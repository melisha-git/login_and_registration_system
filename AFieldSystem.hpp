#ifndef LOGIN_AND_REGISTRATION_SYSTEM_AFIELDSYSTEM_HPP
#define LOGIN_AND_REGISTRATION_SYSTEM_AFIELDSYSTEM_HPP

#include <iostream>
#include <string>

using namespace std;

class AFieldsSystem {
private:
	string _login;
	string _password;
public:
	static const string _path;
	virtual void writeLogin() final;
	virtual void writePassword() final;

	const string getLogin() const;

	const string getPassword() const;
	virtual void workWithData() = 0;
	virtual bool checkLogin() const = 0;
	virtual bool checkPassword() const = 0;
};

#endif
