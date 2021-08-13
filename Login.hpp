#ifndef LOGIN_AND_REGISTRATION_SYSTEM_LOGIN_HPP
#define LOGIN_AND_REGISTRATION_SYSTEM_LOGIN_HPP

#include "AFieldSystem.hpp"
#include <fstream>

using namespace std;

class Login : public AFieldsSystem {
public:
	void workWithData();

	bool checkLogin() const;

	bool checkPassword() const;
};

#endif
