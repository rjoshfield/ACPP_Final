#include "Quiz.h"
#include "Question.h"

#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

using namespace std;
Quiz::Quiz() {
	this->questions = new list<Question>();
}

Quiz::~Quiz() {
	if (this->questions != NULL) {
		this->questions->clear();
		delete this->questions;
		this->questions = NULL;
	}
}

Quiz::Quiz(Quiz *quiz) {
	this->questions = new list<Question>();

	if (quiz != NULL) {
		for (int i = 0; i < quiz->getNumOfQuestions(); i++) {
			this->questions->push_back(quiz->getQuestion(i));
		}
	}
}

int Quiz::getNumOfQuestions() {
	if (this->questions != NULL)
		return this->questions->size();
	else
		return 0;
}

Question Quiz::getQuestion(int index) {
	if (this->questions == NULL || index < 0 || index >= this->questions->size())
		return NULL;

	int count = 0;
	for (list<Question>::iterator it = this->questions->begin();
		it != this->questions->end(); it++) {
		if (count == index) return *it;
		count++;
	}
}

void Quiz::addQuestion(Question question) {
	if (this->questions == NULL)
		this->questions = new list<Question>();

	this->questions->push_back(question);
}

void Quiz::removeQuestion(int index) {
	if (this->questions != NULL)
		this->questions->pop_back();
}

void Quiz::updateQuestion(int index, Question question) {
	if (this->questions == NULL || index < 0 || index >= this->questions->size())
		return ;

	int count = 0;
	for (list<Question>::iterator it = this->questions->begin();
		it != this->questions->end(); it++) {
		if (count == index) {
			*it = question;
			return;
		}
		count++;
	}
}

string Quiz::getTitle() {
	return this->title;
}

void Quiz::setTitle(string title) {
	this->title = title;
}
string Quiz::toString() {
	return "Title: " + this->getTitle() + "\nNumber of questions: "
		+ std::to_string(this->getNumOfQuestions()) + "\n";
}