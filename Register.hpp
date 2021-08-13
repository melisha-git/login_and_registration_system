#ifndef LOGIN_AND_REGISTRATION_SYSTEM_REGISTER_HPP
#define LOGIN_AND_REGISTRATION_SYSTEM_REGISTER_HPP

#include "AFieldSystem.hpp"
#include <fstream>

using namespace std;

class Register : public AFieldsSystem {
private:
	string _newPass;
public:
	void writeNewPassword();

	void workWithData();

	bool checkPassword() const;

	bool checkLogin() const;
};

#endif
