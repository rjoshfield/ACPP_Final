#include "Game.h"

Game::Game(Quiz * quiz, int gameType, int temptLimit) {
	this->gameType = gameType;
	this->temptLimit = temptLimit;
	this->quiz = quiz;
}

int Game::getGameType() {
	return this->gameType;
}

void Game::setGameType(int gameType) {
	this->gameType = gameType;
}

int Game::getTemptLimit() {
	return this->temptLimit;
}

void Game::setTemptLimit(int temptLimit) {
	this->temptLimit = temptLimit;
}

Quiz * Game::getQuiz() {
	return this->quiz;
}

void Game::setQuiz(Quiz * quiz) {
	this->quiz = quiz;
}