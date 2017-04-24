#include "JeopardyGame.h"
#include "Quiz.h"

int JeopardyGame::getRows() {
	return this->rows;
}

int JeopardyGame::getCols() {
	return this->cols;
}

void JeopardyGame::setRows(int rows) {
	this->rows = rows;
}

void JeopardyGame::setCols(int cols) {
	this->cols = cols;
}

string JeopardyGame::getColHeadings() {
	return this->colHeadings;
}

void JeopardyGame::setColHeadings(string colHeadings) {
	this->colHeadings = colHeadings;
}

JeopardyGame::JeopardyGame(Quiz *quiz, int gameType, int temptLimit, int rows, int cols, string colHeadings) 
: Game(quiz, gameType, temptLimit) {
	this->rows = rows;
	this->cols = cols;
	this->colHeadings = colHeadings;
}