//============================================================================
// Name        : CodeWars5.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctype.h>
using namespace std;

string accum(const string &s) {
	string str = "";
	for (size_t i = 0; i < s.size(); ++i) {
		if (!((char) toupper(s[i]) == s[i])) {
			str.push_back((char) toupper(s[i]));
			str.insert(end(str), i, s[i]);
		} else {
			str.push_back(s[i]);
			str.insert(end(str), i, (char) tolower(s[i]));
		}
		if (i != (s.size() - 1)) {
			str.push_back('-');
		}

	}
	return str;
}

int main() {
	string str = "abc";

	cout << accum("abc") << endl; // prints !!!Hello World!!!
	return 0;
}
