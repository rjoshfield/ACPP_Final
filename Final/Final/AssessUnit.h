#if !defined(_ASSESSUNIT_H)
#define _ASSESSUNIT_H

#include "Question.h"

class AssessUnit {
public:
	//AssessUnit(Question question);
	AssessUnit(AssessUnit * another);
	//AssessUnit();
	void operator=(AssessUnit * another);
	Question getQuestion();
	void setQuestion(Question question);
	double getScore();
	void setScore(double score);
	string getAnswer();
	void setAnser(string answer);
private:
	Question question;
	double score;
	string answer;
};

#endif  //_ASSESSUNIT_H
