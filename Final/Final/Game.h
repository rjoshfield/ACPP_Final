#if !defined(_GAME_H)
#define _GAME_H

#include "Quiz.h";

class Game {
public:
	Game(Quiz * quiz, int gameType, int temptLimit);
	int getGameType();
	void setGameType(int gameType);
	int getTemptLimit();
	void setTemptLimit(int temptLimit);
	Quiz * getQuiz();
	void setQuiz(Quiz * quiz);
private:
	int gameType;
	int temptLimit;
	Quiz * quiz;
};

#endif  //_GAME_H
