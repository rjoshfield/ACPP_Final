#if !defined(_QUESTION_H)
#define _QUESTION_H

#include <string>
#include <list>
using namespace std;
class Question {
public:
	string getTitle();
	void setTitle(string title);
	string getDescription();
	void setDescription(string desc);
	int getNumOfOptions();
	string getOption(int index);
	void addOption(string option);
	void setOption(int index, string option);
	string getAnswer();
	void setAnswer(string answer);

	int getPoints();
	void setPoints(int points);
	string getExplanation();
	void setExplanation(string expl);
	int getQuestionType();
	void setQuestionType(int type);
	Question(string title, int points);
	Question(Question * another);
	Question();
	void operator=(Question * another);
	string toString();
	bool isEqual(Question question);
	string getConceptID();
	void setConceptID(string concept);
	int getID();
	void setID(int ID);
private:
	string title;
	string descripton;
	list<string> options;
	string answer;
	int points;
	string explanation;
	int questionType;
	string conceptID;
	int ID;
};

#endif  //_QUESTION_H
