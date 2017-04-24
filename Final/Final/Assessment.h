#if !defined(_ASSESSMENT_H)
#define _ASSESSMENT_H

#include "AssessUnit.h"
#include "Student.h"

class Assessment {
public:
	double getScore();
	void addAssessmentUnit(AssessUnit assessUnit);
	void removeAssessmentUnit(int index);
	int getNumOfAssessmentUnits();
	Assessment(Student * stu);
	Student * getStudent();
	void setStudent(Student * student);
private:
	list<AssessUnit> *assessList;
	Student * student;
};

#endif  //_ASSESSMENT_H
