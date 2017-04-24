#include "AssessUnit.h"
#include "Question.h"

AssessUnit::AssessUnit(AssessUnit * another) {
	this->score = 0;
	this->answer = "";
	if (another == NULL) return;

	this->question = another->getQuestion();
}

void AssessUnit::operator=(AssessUnit * another) {
	this->score = 0;
	this->answer = "";
	if (another == NULL) return;

	this->question = another->getQuestion();
}

Question AssessUnit::getQuestion() {
	return this->question;
}

void AssessUnit::setQuestion(Question question) {
	this->question = question;
}

double AssessUnit::getScore() {
	return this->score;
}

void AssessUnit::setScore(double score) {
	this->score = score;
}

string AssessUnit::getAnswer() {
	return this->answer;
}

void AssessUnit::setAnser(string answer) {
	this->answer = answer;
}

