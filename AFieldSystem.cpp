#include "AFieldSystem.hpp"

const string AFieldsSystem::_path = "../data/";

void AFieldsSystem::writeLogin() {
	cout << "Write login\n";
	getline(cin, _login);
}

void AFieldsSystem::writePassword() {
	cout << "Write password\n";
	getline(cin, _password);
}

const string AFieldsSystem::getLogin() const {
	return _login;
}

const string AFieldsSystem::getPassword() const {
	return _password;
}