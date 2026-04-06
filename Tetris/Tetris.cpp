#include <iostream>

import start;

using namespace std;

namespace {
	int buffer;
	bool isRunning{ true };
}

int main(void) {
	start();
	while (isRunning) {
		buffer = menu();

		switch (buffer) {
		case 0:
			break;
		default:
			break;
		}
	}
	return 0;
}