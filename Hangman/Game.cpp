#include "Game.h"
#include "Words.h"
#include "Graphic.h"
#include <iostream>

std::string Game::getRandWord(Words words) {
    std::string word = "";
    int random_word = (rand() % words.getWords().size());
    word = words.getWords()[random_word];
    return word;
}

void Game::ShowIdicator(int i){
    SetConsoleCP(866);                                          //псевдографика
    SetConsoleOutputCP(866);
    miss_idication(i);                                          //висильник
    SetConsoleCP(1251);                                         //русский язык
    SetConsoleOutputCP(1251); 
    position(0,12);
}

void Game::ShowWord(std::string word, std::vector<bool> guessedLetters) {
    std::vector<bool> gL = guessedLetters;
    for (int i = 0; i < word.length(); i++) {
        if (guessedLetters[i] == false) {
            Letter_34_Line(i);
        } else {
            if ((unsigned char)word[i] == 192 || (unsigned char)word[i] == 224)
            {
                Letter_1_A(i);
            }
            if ((unsigned char)word[i] == 193 || (unsigned char)word[i] == 225)
            {
                Letter_2_Be(i);
            }
            if ((unsigned char)word[i] == 194 || (unsigned char)word[i] == 226)
            {
                Letter_3_Ve(i);
            }
            if ((unsigned char)word[i] == 195 || (unsigned char)word[i] == 227)
            {
                Letter_4_Ge(i);
            }
            if ((unsigned char)word[i] == 196 || (unsigned char)word[i] == 228)
            {
                Letter_5_De(i);
            }
            if ((unsigned char)word[i] == 197 || (unsigned char)word[i] == 229)
            {
                Letter_6_E(i);
            }
            if ((unsigned char)word[i] == 168 || (unsigned char)word[i] == 184)
            {
                Letter_7_Yo(i);
            }
            if ((unsigned char)word[i] == 198 || (unsigned char)word[i] == 230)
            {
                Letter_8_Je(i);
            }
            if ((unsigned char)word[i] == 199 || (unsigned char)word[i] == 231)
            {
                Letter_9_Ze(i);
            }
            if ((unsigned char)word[i] == 200 || (unsigned char)word[i] == 232)
            {
                Letter_10_I(i);
            }
            if ((unsigned char)word[i] == 201 || (unsigned char)word[i] == 233)
            {
                Letter_11_Iy(i);
            }
            if ((unsigned char)word[i] == 202 || (unsigned char)word[i] == 234)
            {
                Letter_12_K(i);
            }
            if ((unsigned char)word[i] == 203 || (unsigned char)word[i] == 235)
            {
                Letter_13_eL(i);
            }
            if ((unsigned char)word[i] == 204 || (unsigned char)word[i] == 236)
            {
                Letter_14_eM(i);
            }
            if ((unsigned char)word[i] == 205 || (unsigned char)word[i] == 237)
            {
                Letter_15_eN(i);
            }
            if ((unsigned char)word[i] == 206 || (unsigned char)word[i] == 238)
            {
                Letter_16_O(i);
            }
            if ((unsigned char)word[i] == 207 || (unsigned char)word[i] == 239)
            {
                Letter_17_Pe(i);
            }
            if ((unsigned char)word[i] == 208 || (unsigned char)word[i] == 240)
            {
                Letter_18_Re(i);
            }
            if ((unsigned char)word[i] == 209 || (unsigned char)word[i] == 241)
            {
                Letter_19_Se(i);
            }
            if ((unsigned char)word[i] == 210 || (unsigned char)word[i] == 242)
            {
                Letter_20_Te(i);
            }
            if ((unsigned char)word[i] == 211 || (unsigned char)word[i] == 243)
            {
                Letter_21_U(i);
            }
            if ((unsigned char)word[i] == 212 || (unsigned char)word[i] == 244)
            {
                Letter_22_eF(i);
            }
            if ((unsigned char)word[i] == 213 || (unsigned char)word[i] == 245)
            {
                Letter_23_Ha(i);
            }
            if ((unsigned char)word[i] == 214 || (unsigned char)word[i] == 246)
            {
                Letter_24_Ce(i);
            }
            if ((unsigned char)word[i] == 215 || (unsigned char)word[i] == 247)
            {
                Letter_25_Che(i);
            }
            if ((unsigned char)word[i] == 216 || (unsigned char)word[i] == 248)
            {
                Letter_26_Sha(i);
            }
            if ((unsigned char)word[i] == 217 || (unsigned char)word[i] == 249)
            {
                Letter_27_Scha(i);
            }
            if ((unsigned char)word[i] == 218 || (unsigned char)word[i] == 250)
            {
                Letter_28_TverdZnak(i);
            }
            if ((unsigned char)word[i] == 219 || (unsigned char)word[i] == 251)
            {
                Letter_29_Ii(i);
            }
            if ((unsigned char)word[i] == 220 || (unsigned char)word[i] == 252)
            {
                Letter_30_MyagkZnak(i);
            }
            if ((unsigned char)word[i] == 221 || (unsigned char)word[i] == 253)
            {
                Letter_31_Ee(i);
            }
            if ((unsigned char)word[i] == 222 || (unsigned char)word[i] == 254)
            {
                Letter_32_Yu(i);
            }
            if ((unsigned char)word[i] == 223 || (unsigned char)word[i] == 255)
            {
                Letter_33_Ya(i);
            }
        }
    }
}

void Game::ShowEnd(std::string word){
    for (int i = 0; i < word.length(); i++) {
        if ((unsigned char)word[i] == 192 || (unsigned char)word[i] == 224)
        {
            Letter_1_A(i);
        }
        if ((unsigned char)word[i] == 193 || (unsigned char)word[i] == 225)
        {
            Letter_2_Be(i);
        }
        if ((unsigned char)word[i] == 194 || (unsigned char)word[i] == 226)
        {
            Letter_3_Ve(i);
        }
        if ((unsigned char)word[i] == 195 || (unsigned char)word[i] == 227)
        {
            Letter_4_Ge(i);
        }
        if ((unsigned char)word[i] == 196 || (unsigned char)word[i] == 228)
        {
            Letter_5_De(i);
        }
        if ((unsigned char)word[i] == 197 || (unsigned char)word[i] == 229)
        {
            Letter_6_E(i);
        }
        if ((unsigned char)word[i] == 168 || (unsigned char)word[i] == 184)
        {
            Letter_7_Yo(i);
        }
        if ((unsigned char)word[i] == 198 || (unsigned char)word[i] == 230)
        {
            Letter_8_Je(i);
        }
        if ((unsigned char)word[i] == 199 || (unsigned char)word[i] == 231)
        {
            Letter_9_Ze(i);
        }
        if ((unsigned char)word[i] == 200 || (unsigned char)word[i] == 232)
        {
            Letter_10_I(i);
        }
        if ((unsigned char)word[i] == 201 || (unsigned char)word[i] == 233)
        {
            Letter_11_Iy(i);
        }
        if ((unsigned char)word[i] == 202 || (unsigned char)word[i] == 234)
        {
            Letter_12_K(i);
        }
        if ((unsigned char)word[i] == 203 || (unsigned char)word[i] == 235)
        {
            Letter_13_eL(i);
        }
        if ((unsigned char)word[i] == 204 || (unsigned char)word[i] == 236)
        {
            Letter_14_eM(i);
        }
        if ((unsigned char)word[i] == 205 || (unsigned char)word[i] == 237)
        {
            Letter_15_eN(i);
        }
        if ((unsigned char)word[i] == 206 || (unsigned char)word[i] == 238)
        {
            Letter_16_O(i);
        }
        if ((unsigned char)word[i] == 207 || (unsigned char)word[i] == 239)
        {
            Letter_17_Pe(i);
        }
        if ((unsigned char)word[i] == 208 || (unsigned char)word[i] == 240)
        {
            Letter_18_Re(i);
        }
        if ((unsigned char)word[i] == 209 || (unsigned char)word[i] == 241)
        {
            Letter_19_Se(i);
        }
        if ((unsigned char)word[i] == 210 || (unsigned char)word[i] == 242)
        {
            Letter_20_Te(i);
        }
        if ((unsigned char)word[i] == 211 || (unsigned char)word[i] == 243)
        {
            Letter_21_U(i);
        }
        if ((unsigned char)word[i] == 212 || (unsigned char)word[i] == 244)
        {
            Letter_22_eF(i);
        }
        if ((unsigned char)word[i] == 213 || (unsigned char)word[i] == 245)
        {
            Letter_23_Ha(i);
        }
        if ((unsigned char)word[i] == 214 || (unsigned char)word[i] == 246)
        {
            Letter_24_Ce(i);
        }
        if ((unsigned char)word[i] == 215 || (unsigned char)word[i] == 247)
        {
            Letter_25_Che(i);
        }
        if ((unsigned char)word[i] == 216 || (unsigned char)word[i] == 248)
        {
            Letter_26_Sha(i);
        }
        if ((unsigned char)word[i] == 217 || (unsigned char)word[i] == 249)
        {
            Letter_27_Scha(i);
        }
        if ((unsigned char)word[i] == 218 || (unsigned char)word[i] == 250)
        {
            Letter_28_TverdZnak(i);
        }
        if ((unsigned char)word[i] == 219 || (unsigned char)word[i] == 251)
        {
            Letter_29_Ii(i);
        }
        if ((unsigned char)word[i] == 220 || (unsigned char)word[i] == 252)
        {
            Letter_30_MyagkZnak(i);
        }
        if ((unsigned char)word[i] == 221 || (unsigned char)word[i] == 253)
        {
            Letter_31_Ee(i);
        }
        if ((unsigned char)word[i] == 222 || (unsigned char)word[i] == 254)
        {
            Letter_32_Yu(i);
        }
        if ((unsigned char)word[i] == 223 || (unsigned char)word[i] == 255)
        {
            Letter_33_Ya(i);
        }
        if ((unsigned char)word[i] == 32)
        {
            Letter_35_probel(i);
        }
    
    }
}

std::vector<bool> Game::gameFlow(char playerLetter, std::string word, std::vector<bool> guessedLetters) {
    for (int i = 0; i < word.length(); i++) {
        setlocale(LC_ALL, "");                                      //решение проблемы с tolower в студии
        if (std::tolower(playerLetter) == std::tolower(word[i])) {
            guessedLetters[i] = true;
        }
        SetConsoleCP(1251);                                         //русский язык
        SetConsoleOutputCP(1251);
    }
    return guessedLetters;
}

bool Game::gameWin(std::string word, std::vector<bool> guessedLetters) {
    bool isWin = true;
    for (int i = 0; i < word.length(); i++) {
        if (guessedLetters[i] == false) {
            isWin = false;
        }
    }
    return isWin;
}

void Game::Timer(int t) {
    int minutes = ((clock() / 1000) - t)/60;
    std::cout << "\tВы играли: " << minutes << " мин " << ((clock() / 1000) - t) - minutes*60 << " сек" << std::endl;
}

void Game::GamePlay(Words words, std::string word) {
    int key;                                //символ
    int enter;                              //ввод
    int t = clock() / 1000;                 //для подсчета времени
    int t1{ 0 }, t2{ 0 };                   //корректировка времени на выход в меню
    int trying{ 0 };                        //кол-во попыток
    int miss{0};                            //кол-во промахов
    bool missCh{0};                         //корректировка для подсчета промахов
    std::vector<char> playerLetters;
    bool win = false;
    bool lose = false;
    std::vector<bool> guessedLetters;
    for (int i = 0; i < word.length(); i++) {
        guessedLetters.push_back(false);
    }
    while (!win && !lose && !end) {
        bool ok;
        do{
            if(win && lose || end) break;
            t1 = 0; t2 = 0;
            ok = false;
            missCh = true;
            do{
            system("cls");
            ShowWord(word, guessedLetters);
                std::cout << std::endl << "\tУже выбранные буквы: ";       
                for (int i = 0; i < playerLetters.size(); i++) {
                    std::cout << playerLetters[i] << " ";
                }
                std::cout << word;
                std::cout << std::endl << "\tВыбор буквы: ";
                ShowIdicator(miss);
                key = _getch();
                if (key == 27) break;
                std::cout << "\t" << (char)key << " - нажмите ENTER, для подтверждения!" << std::endl;
                enter = _getch();
            }while(enter!=13);
            if (key == 27) {
                t1 = clock() / 1000;    //проверить корректировку времени
                menu_play(words);
                t2 = clock() / 1000;
                if(end)break;
                t += (t2 - t1);
                system("cls");
            }
            if (key>=192 && key<=255 || key == 168 || key == 184)ok = true;       
            for (int i = 0; i < playerLetters.size(); i++) {
                if((char)key == playerLetters[i])ok = false;
            }
            if (!ok && key != 27){std::cout << std:: endl << "\tВведен некорректный или раннее введенный символ! - " << (char)key; Sleep(1000);}
            else if(!ok && key == 27){}
        }while(!ok);
        if (ok && key != 7) {
            playerLetters.push_back((char)key);
            trying++;
            guessedLetters = gameFlow(key, word, guessedLetters);
            for (int i = 0; i<word.length(); i++){
                if(std::tolower((char)key)==tolower(word[i])){
                    missCh = false;
                    break;
                }
            }
            if(missCh){miss++;}
            if(miss==10) lose = true;
            win = gameWin(word, guessedLetters);
        }
    }
    if(!end){
    system("cls");
    ShowEnd(word);
    Sleep(2000);
    ShowIdicator(miss);
    std::cout << std::endl << "\tЧисло ваших попыток:\t" << trying << std::endl;
    std::cout << "\tЧисло ваших ошибок:\t" << miss << std::endl;
    std::cout << "\tВыбранные буквы: ";
    for (int i = 0; i < playerLetters.size(); i++) {
        std::cout << playerLetters[i] << " ";
    }
    std::cout << std::endl;
    Timer(t);
    std::cout<<"|                                     === Для продолжения нажимите любую клавишу ===                                                                 |";
    key = _getch();
    if(lose){
        animation_lose();
    }else{
        animation_win();
    }
    menu(words);
    }
}

void Game::menu(Words words) {
    int keyPosition{ 1 };
    int key{ 0 };
    std::string word = getRandWord(words);
    while (key != 13 && !end) {
        system("cls");
        menu_st();
        if (keyPosition == 1) Green_ON();
        start_st();
        Color_OFF();
        if (keyPosition == 2) Green_ON();
        options_st();
        Color_OFF();
        if (keyPosition == 3) Green_ON();
        credits_st();
        Color_OFF();
        if (keyPosition == 4) Green_ON();
        exit_st();
        Color_OFF();
        key = _getch();
        if (key == 224) {
            key = _getch();
            if (key == 72 && keyPosition > 1) keyPosition--;
            if (key == 80 && keyPosition < 4) keyPosition++;
        }
        if (key == 13) {
            switch (keyPosition) {
            case 1:
                GamePlay(words, word);
                break;
            case 2:
                options(words);
                break;
            case 3:
                credits();
                menu(words);
                break;
            case 4:
                end = true;
                break;
            } 
        }
    }
}

void Game::menu_play(Words words) {
    int keyPosition{ 1 };
    int key{ 0 };
    while (key != 13 && !end) {
        system("cls");
        menu_st();
        if (keyPosition == 1) Green_ON();
        continue_st();
        Color_OFF();
        if (keyPosition == 2) Green_ON();
        again_st();
        Color_OFF();
        if (keyPosition == 3) Green_ON();
        exit_st();
        Color_OFF();
        key = _getch();
        if (key == 224) {
            key = _getch();
            if (key == 72 && keyPosition > 1) keyPosition--;
            if (key == 80 && keyPosition < 3) keyPosition++;
        }
        if (key == 13) {
            switch (keyPosition) {
            case 1:
                break;
            case 2:
                GamePlay(words,getRandWord(words));
                break;
            case 3:
                menu(words);
                break;
            }
        }
    }
}

void Game::options(Words words) {
    int keyPosition{ 1 };
    int key{ 0 };
    bool ok{false};
    std::string word = ""; 
    while (key != 13 && !end) {
        system("cls");
        options_menu_st();
        if (keyPosition == 1) Green_ON();
        add_word_st();
        Color_OFF();
        if (keyPosition == 2) Green_ON();
        delete_word_st();
        Color_OFF();
        if (keyPosition == 3) Green_ON();
        list_st();
        Color_OFF();
        if (keyPosition == 4 || key == 27) Green_ON();
        back_st();
        Color_OFF();
        key = _getch();
        if (key == 224) {
            key = _getch();
            if (key == 72 && keyPosition > 1) keyPosition--;
            if (key == 80 && keyPosition < 4) keyPosition++;
        }
        if (key == 13) {
            switch (keyPosition) {
            case 1:
                std::cout<<std::endl<<"Введите слово: ";
                std::cin >> word;
                for (int i = 0; i < word.length(); i++){
                    if((int)((unsigned char)word[i])!=32 && (int)((unsigned char)word[i])>=192 && (int)((unsigned char)word[i])<=255 || (int)((unsigned char)word[i]) == 168 || (int)((unsigned char)word[i]) == 184){
                        ok = true;
                    } else {
                        ok = false;
                        break;
                    }
                }
                if(word.length()<4 || word.length() > 20){
                    ok = false;
                }
                if(ok){
                    words.setWord(word);
                    words_changed = true;
                    gWords = words.getWords();
                } else {
                    std::cout << std::endl << "Введено некоректное слово!";
                    Sleep(2000);
                }
                options(words);
                break;
            case 2:
                words.deleteWord();
                words_changed = true;
                gWords = words.getWords();
                options(words);
                break;
            case 3:
                std::cout << std::endl << "Список доступных слов: " << std::endl;
                for (int i = 0; i<words.getWords().size(); i++){
                    if(i+1 >= 10 && i+1 < 100){std::cout << " ";}
                    if(i+1 < 10){std::cout << "  ";}
                    std::cout << i+1 << ")" << words.getWords()[i];
                    ((i+1)%6==0) ? std::cout << std::endl : (words.getWords()[i].length()>=12) ? std::cout <<"\t\t" : std::cout <<"\t\t\t";
                }
                std::cout << "\n\nДля продолжения нажмите, любую кнопку!";
                key = _getch();
                options(words);
                break;
            case 4:
                menu(words);
                break;
            }
        }
    }
}

std::vector<std::string> Game::getGameWords(){
    return gWords;
}

void Game::credits_light(std::string str){
    system("cls");
    ShowEnd(str);
    Sleep(500);
    system("cls");
    Dark_Gray();
    ShowEnd(str);
    Sleep(500);
    system("cls");
    Black();
    ShowEnd(str);
    Sleep(500);
    system("cls");
    Color_OFF();
}

void Game::credits(){
    std::string str1 = "СПАСИБО";
    std::string str2 = "ЧТО СЫГРАЛИ";
    std::string str3 = "ОТДЕЛЬНОЕ СПАСИБО";
    std::string str4 = "ЗА ВСЕ СОВЕТЫ";
    std::string str5 = "НЕКРАСОВУ МИХАИЛУ";
    credits_light(str1);
    credits_light(str2);
    credits_light(str3);
    credits_light(str4);
    credits_light(str5);
}