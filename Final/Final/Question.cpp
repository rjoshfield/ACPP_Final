#include "Question.h"

string Question::getTitle() {
	return this->title;
}

void Question::setTitle(string title) {
	this->title = title;
}

string Question::getDescription() {
	return this->descripton;
}

void Question::setDescription(string desc) {
	this->descripton = desc;
}

int Question::getNumOfOptions() {
	return this->options.size();
}

string Question::getOption(int index) {
	int count = 0;
	for (list<string>::iterator it = this->options.begin();
		it != this->options.end(); it++) {
		if (count == index) return *it;
		count++;
	}
}

void Question::addOption(string option) {
	this->options.push_back(option);
}

void Question::setOption(int index, string option) {
	int count = 0;
	for (list<string>::iterator it = this->options.begin();
		it != this->options.end(); it++) {
		if (count == index) {
			*it = option;
			return;
		}
		count++;
	}
}

string Question::getAnswer() {
	return this->answer;
}

void Question::setAnswer(string answer) {
	this->answer = answer;
}

int Question::getPoints() {
	return this->points;
}

void Question::setPoints(int points) {
	this->points = points;
}

string Question::getExplanation() {
	return this->explanation;
}

void Question::setExplanation(string expl) {
	this->explanation = expl;
}

int Question::getQuestionType() {
	return this->questionType;
}

void Question::setQuestionType(int type) {
	this->questionType = type;
}

Question::Question(string title, int points) {
	this->title = title;
	this->points = points;
}

Question::Question() {
	this->title = "";
	this->points = 0;
	//... to initialize the remaining members
}

Question::Question(Question * another) {
	if (another != NULL) {
		this->title = another->getTitle();
		this->descripton = another->getDescription();
		this->points = another->getPoints();
		this->answer = another->getAnswer();
		this->conceptID = another->getConceptID();
		this->ID = another->getID();

		for (list<string>::iterator it = this->options.begin();
			it != this->options.end(); it++) {
			this->addOption(*it);
		}
	}
	this->explanation = another->getExplanation();
}

void Question::operator=(Question * another) {
	if (another != NULL) {
		this->title = another->getTitle();
		this->descripton = another->getDescription();
		this->points = another->getPoints();
		this->answer = another->getAnswer();
		this->conceptID = another->getConceptID();
		this->ID = another->getID();

		for (list<string>::iterator it = this->options.begin();
			it != this->options.end(); it++) {
			this->addOption(*it);
		}
	}
	this->explanation = another->getExplanation();
}

string Question::toString() {
	return "Question title: " + this->title;
}

bool Question::isEqual(Question question) {
	//if (question == NULL) return false; // if question is a pointer parameter

	if (this->title == question.getTitle())
		return true;
	else
		return false;
}

string Question::getConceptID() {
	return this->conceptID;
}

void Question::setConceptID(string concept) {
	this->conceptID = concept;
}

int Question::getID() {
	return this->ID;
}

void Question::setID(int ID) {
	this->ID = ID;
}