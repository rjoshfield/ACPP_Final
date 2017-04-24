#if !defined(_STUDENT_H)
#define _STUDENT_H

#include "ContactInfo.h"

class Student {
public:
	string getName();
	void setName(string name);
	string getID();
	void setID(string ID);
	ContactInfo getContact();
	void setContact(ContactInfo contact);
	Student(string name, string ID);
	Student(string name, string ID, string address, 
		string email, string phone);
	string toString();
	string getFullInfor();
private:
	string name;
	string ID;
	ContactInfo contactInfo;
};

#endif  //_STUDENT_H
