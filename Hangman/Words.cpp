#include "Words.h"
#include <iostream>
#include <vector>
#include <string>

    std::vector<std::string> Words::getWords() {
        return words;
    }
    std::string Words::getWord(int i) {
        return words[i];
    }
    std::string Words::getStandartWord(int i) {
        return arrStandartWords[i];
    }
    void Words::setWord(std::string W) {
        words.push_back(W);
    }
    void Words::deleteWord(){
        words.pop_back();
    }
    void Words::setWords(std::vector<std::string>& w) {
        words = w;
    }