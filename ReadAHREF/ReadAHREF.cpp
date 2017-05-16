// ReadAHREF.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include <cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

	char t;
	while(cin.get(t)) {
		if (t == 'h') {
			if (cin.get(t) && t == 'r') {
				if (cin.get(t) && t == 'e') {
					if (cin.get(t) && t == 'f') {
						if (cin.get(t) && t == '=') {
							if (cin.get(t)) {
								string res = "";
								while (cin.get(t) && t != '"') {
									if (t == '/') {
										res += '/';
									}
									else {
										res += t;
									}
								}
								if (*(res.end() - 1) == '/') {
									res.pop_back();
								}
								std::cout << res << std::endl;
							}
						}
					}
				}
			}
		}
		
	}
	return 0;
}