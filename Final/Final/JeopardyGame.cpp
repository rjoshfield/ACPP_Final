//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : JeopardyGame.cpp
//  @ Date : 3/29/2017
//  @ Author : 
//
//


#include "JeopardyGame.h"
#include "CQuiz.h"

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

JeopardyGame::JeopardyGame(CQuiz *quiz, int gameType, int temptLimit, int rows, int cols, string colHeadings) 
: CGame(quiz, gameType, temptLimit) {
	this->rows = rows;
	this->cols = cols;
	this->colHeadings = colHeadings;
}

