#include "Field.hpp"

bool Field::request() {
	cout << "Please, write 'login' or 'register'\n";
	getline(cin, _request);
	if (_request == "login" || _request == "register") {
		return true;
	}
	cout << "Error!\n";
	return false;
}

bool operator==(const Field &first, const string &second) {
	return first._request == second;
}