#include "Student.h"
#include "ContactInfo.h"

string Student::getName() {
	return this->name;
}

void Student::setName(string name) {
	this->name = name;
}

string Student::getID() {
	return this->ID;
}

void Student::setID(string ID) {
	this->ID = ID;
}

ContactInfo Student::getContact() {
	return this->contactInfo;
}

void Student::setContact(ContactInfo contact) {
	this->contactInfo = contact;
}

Student::Student(string name, string ID) {
	this->name = name;
	this->ID = ID;
}

Student::Student(string name, string ID, string address,
	string email, string phone) {
	Student(name, ID);
	this->contactInfo.setAddress(address);
	this->contactInfo.setEmail(email);
	this->contactInfo.setPhone(phone);

}
string Student::toString() {
	return "Name: " + this->name + "\nID: " + this->ID + "\n";
}

string Student::getFullInfor() {
	return toString();
}