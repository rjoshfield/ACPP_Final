#if !defined(_QUIZ_H)
#define _QUIZ_H

#include "Question.h"

class Quiz {
public:
	Quiz();
	~Quiz();
	Quiz(Quiz *quiz);
	int getNumOfQuestions();
	Question getQuestion(int index);
	void addQuestion(Question question);
	void removeQuestion(int index);
	void updateQuestion(int index, Question question);
	string toString();
	string getTitle();
	void setTitle(string title);
private:
	list<Question> *questions;
	string title;
};

#endif  //_QUIZ_H
