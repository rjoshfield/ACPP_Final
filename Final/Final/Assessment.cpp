#include "Assessment.h"
#include "AssessUnit.h"

double Assessment::getScore() {
	if (this->assessList != NULL) {
		int sum = 0;
		for (list<AssessUnit>::iterator it = this->assessList->begin();
			it != this->assessList->end(); it++) {
			sum += (*it).getScore();
		}
	}
	return 0;
}

void Assessment::addAssessmentUnit(AssessUnit assessUnit) {
	if (this->assessList == NULL)
		this->assessList = new list<AssessUnit>();

	this->assessList->push_back(assessUnit);
}

void Assessment::removeAssessmentUnit(int index) {
	if (this->assessList != NULL)
		this->assessList->pop_back();
}

int Assessment::getNumOfAssessmentUnits() {
	if (this->assessList != NULL)
		return this->assessList->size();
	else
		return 0;
}

Assessment::Assessment(Student * stu) {
	this->student = stu;
}

Student * Assessment::getStudent() {
	return this->student;
}

void Assessment::setStudent(Student * student) {
	this->student = student;
}