#include "Register.hpp"

void Register::writeNewPassword() {
	cout << "Write password now\n";
	getline(cin, _newPass);
}

void Register::workWithData() {
	cout << "Write additional information\n";
	string data;
	getline(cin, data);
	ofstream file(_path + this->getLogin() + ".user");

	file << "login : " << this->getLogin() << endl;
	file << "password: " << this->getPassword() << endl;
	file << "additional information: " << data << endl;
	file.close();
}

bool Register::checkPassword() const {
	if (!(this->getPassword().empty()) && _newPass == this->getPassword()) {
		return true;
	}
	if (!(this->getPassword().empty()))
		cout << "Error\nPassword mismatch\n";
	return false;
}

bool Register::checkLogin() const {
	if (this->getLogin().empty()) {
		return false;
	}
	std::ifstream file(_path + this->getLogin() + ".user");
	if (file.is_open()) {
		file.close();
		cout << "User with login: " << this->getLogin() << " already exist\n";
		return false;
	}
	return true;
}