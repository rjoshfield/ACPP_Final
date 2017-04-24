#if !defined(_CONTACTINFO_H)
#define _CONTACTINFO_H

#include <string>
using namespace std;
class ContactInfo {
public:
	string getAddress();
	string getPhone();
	string getEmail();
	void setAddress(string address);
	void setPhone(string phone);
	void setEmail(string email);
	ContactInfo(string address, string phone, string email);
	ContactInfo(ContactInfo *another);
	ContactInfo();
	string toString();
	void operator=(ContactInfo *another);
private:
	string address;
	string phone;
	string email;
};

#endif  //_CONTACTINFO_H
