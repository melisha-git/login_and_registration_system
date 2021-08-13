#include <iostream>
#include "Field.hpp"
#include "Register.hpp"
#include "Login.hpp"

using namespace std;

int main() {
	Field field;
	cout << "Hi, User\n";
	while (!(field.request()));
	AFieldsSystem *pole;
	if (field == "register") {
		pole = new Register();
	}
	if (field == "login") {
		pole = new Login();
	}
	while (!pole->checkLogin() || !pole->checkPassword()) {
		pole->writeLogin();
		pole->writePassword();
		if (dynamic_cast<Register *>(pole) != nullptr) {
			dynamic_cast<Register *>(pole)->writeNewPassword();
		}
	}
	pole->workWithData();
	if (dynamic_cast<Register *>(pole) != nullptr) {
		delete dynamic_cast<Register *>(pole);
	} else {
		delete dynamic_cast<Login *>(pole);
	}
}
