#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int result = 0;
	bool negative = false;

	for (char ch : str) {
		if (ch == '-') {
			negative = true;
			continue;
		}

		if (int(ch) < 48 || int(ch) > 57) {
			if (negative) {
				negative = false;
			}
			continue;
		}

		int converted = ch - '0';

		if (negative) {
			converted *= -1;
			negative = false;
		}

		result += converted;
	}

	return result;
}
