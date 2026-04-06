module;
#include <iostream>

import header;
import gameutile;

export module displayprint;

export void Printboard(int y, int x) {
	board checkgameboard;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (checkgameboard.getboard(y, x) == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "a";
			}
		}
	}
}