#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int num = 0;
	int negative = false;
	int variable = 0;

	for (char ch: str) {
		variable = 0;

		if (ch == '-') {
			negative = true;
			continue;
		}

		int current = ch - 48;

		if (current <= 9 && current >= 0) {
			variable = current;
		}

		if (negative) {
			variable *= -1;
			negative = false;
		}

		num += variable;
	}
	return num;
}
