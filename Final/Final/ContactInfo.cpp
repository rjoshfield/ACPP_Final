#include "ContactInfo.h"

string ContactInfo::getAddress() {
	return this->address;
}

string ContactInfo::getPhone() {
	return this->phone;
}

string ContactInfo::getEmail() {
	return this->email;
}

void ContactInfo::setAddress(string address) {
	this->address = address;
}

void ContactInfo::setPhone(string phone) {

}

void ContactInfo::setEmail(string email) {
	this->email = email;
}

ContactInfo::ContactInfo(string address, string phone, string email) {
	this->address = address;
	this->phone = phone;
	this->email = email;
}

ContactInfo::ContactInfo(ContactInfo *another) {
	this->address = another->getAddress();
	this->email = another->getEmail();
	this->phone = another->getPhone();
}

ContactInfo::ContactInfo() {
	this->address = "";
	this->email = "";
	this->phone = "";
}

string ContactInfo::toString() {
	return this->address + "\n" + this->email + "\n"
		+ this->phone + "\n";
}

void ContactInfo::operator=(ContactInfo *another) {
	this->address = another->getAddress();
	this->email = another->getEmail();
	this->phone = another->getPhone();
}