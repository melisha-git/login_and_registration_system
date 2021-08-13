#include "Login.hpp"

void Login::workWithData() {
	std::ifstream  file(_path + this->getLogin() + ".user");
	string line;
	int i = 1;
	while (getline(file, line)) {
		if (i >= 3)
			std::cout << line << "\n";
		i++;
	}
	file.close();
}

bool Login::checkLogin() const {
	if (this->getLogin().empty()) {
		return false;
	}
	std::ifstream file(_path + this->getLogin() + ".user");
	if (!file.is_open()) {
		cout << "User with login: " << this->getLogin() << " no exist\n";
		return false;
	}
	file.close();
	return true;
}

bool Login::checkPassword() const {
	std::ifstream  file(_path + this->getLogin() + ".user");
	string line;
	for (int i = 0; i != 2; i++) {
		getline(file, line);
	}
	file.close();
	line = line.substr(10, line.size() - 10);
	if (this->getPassword() == line) {
		return true;
	}
	if (!(this->getPassword().empty()))
		cout << "Error\nWrong password\n";
	return false;
}