#if !defined(_JEOPARDYGAME_H)
#define _JEOPARDYGAME_H

#include "Game.h"
#include "Quiz.h"

class JeopardyGame : public Game {
public:
	int getRows();
	int getCols();
	void setRows(int rows);
	void setCols(int cols);
	string getColHeadings();
	void setColHeadings(string colHeadings);
	JeopardyGame(Quiz *quiz, int gameType, int temptLimit, int rows, int cols, string colHeadings);
private:
	int rows;
	int cols;
	string colHeadings;
};

#endif  //_JEOPARDYGAME_H
