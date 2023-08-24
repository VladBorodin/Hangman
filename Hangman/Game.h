#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <list>
#include <vector>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <cctype>
#include <ctime>
#include "Words.h"

#define WIDTH 80 
#define HEIGHT 25

class Game:public Words {
private:
	std::vector<std::string> gWords;
public:

	bool words_changed = false;
    bool end = false;

	void ShowEnd(std::string word);
	void ShowIdicator(int i);
	std::vector<bool> gameFlow();
	bool gameWin();
	void Timer(int t);
	void menu(Words words);
	void menu_play(Words words);
	void options(Words words);
	void chooseWord();
	void credits();
	void showStats();
	std::string crypt();
	std::string decrypt();
	void SetColor(int text, int bg);
	void ShowWord(std::string word, std::vector<bool> guessedLetters);
	std::vector<bool> gameFlow(char playerLetter, std::string word, std::vector<bool> guessedLetters);
	bool gameWin(std::string word, std::vector<bool> guessedLetters);
	void GamePlay(Words words, std::string w);
	std::string getRandWord(Words words);
	std::vector<std::string>getGameWords();
	void credits_light(std::string str);
};