#include <iostream>
#include "Words.h"
#include "Game.h"
#include "Graphic.h"

std::string crypt(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] += 2;
    }
    return str;
}

std::string decrypt(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] -= 2;
    }
    return str;
}

int main() {
    srand(time(0));
    system("chcp 1251 | cls");
    int key;
    Words words;
    std::string word;
    Game G;
    std::fstream fs;
    std::string path = "words.bin";
    std::string fileName = "words.bin";
    //проверка файла
    fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
    if (!fs.is_open()) {
        std::cout << "\t\t\t\t === Не получилось открыть файл!!! ===\n\n\n\t\t\t\t == Файл будет создан автоматически == " << std::endl;
        Sleep(2000);
        system("cls");
    }
    if (fs.peek() == EOF){
            fs.seekg(0, std::ios::beg);
        for (int i = 0; i < STANDRT_AMOUNT; i++) {
            SetConsoleCP(1251);
            fs << crypt(words.getStandartWord(i)); 
            if(i!=STANDRT_AMOUNT-1)
            {fs << std::endl;}
        }
    }

    fs.seekg(0, std::ios::beg);
    
    while (!fs.eof()) {
        word = "";
        fs >> word;
        word = decrypt(word);
        words.setWord(word);
    }
    fs.close();
    
    std::cout<<"|                                                                           НАЖМИТЕ ЛЮБУЮ КНОПКУ                                                                                               |";

    key = _getch(); 
    system("cls");

    intro();

    G.menu(words);

    if(G.words_changed){
        fs.open(path, std::ios::out);
        fs.close();         
        fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
        fs.seekg(0, std::ios::beg);
        for (int i = 0; i < G.getGameWords().size(); i++) {
            //fs.write((char*)&W.getStandartWord()[i],W.getStandartWord()[i].length());
            SetConsoleCP(1251);
            fs << crypt(G.getGameWords()[i]); if(i!=G.getGameWords().size()-1) fs << std::endl;
        }
    }

    fs.close();
    exit_animation();
}