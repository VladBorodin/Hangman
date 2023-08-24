#pragma once
#include <iostream>
#include <string>
#include <vector>

#define STANDRT_AMOUNT 5
#define STANDRT_LENGTH 50

class Words {
protected:
    std::vector<std::string> words;
    std::string word;
    std::string arrStandartWords[STANDRT_AMOUNT]{ "Указатель","Радуга","Поиск","Петля","Сигнализация" };
public:
    std::vector<std::string> getWords();
    std::string getWord(int i);
    std::string getStandartWord(int i);
    void setWord(std::string W);
    void deleteWord();
    void setWords(std::vector<std::string>& words);
};