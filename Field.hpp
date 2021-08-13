#ifndef LOGIN_AND_REGISTRATION_SYSTEM_FIELD_HPP
#define LOGIN_AND_REGISTRATION_SYSTEM_FIELD_HPP

#include <iostream>
#include <string>

using namespace std;

class Field {
private:
	string _request;
public:
	bool request();

	friend bool operator==(const Field &, const string &);
};

#endif
