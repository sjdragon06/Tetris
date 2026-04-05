module;
#include <iostream>

import header;

export module start;

namespace starttemp {
	int buffer;
}

using namespace std;
using namespace Units;

export void start() {
	Clearscreen();
	cout << "TETRIS" << endl;
	cout << "PRESS ANY KEY TO START" << endl;
	while ( Key::Keyhit() == false) {
		;
	}
}

export void menu() {
	Clearscreen();
	cout << "ESC : help" << endl;
	cout << "1. " << endl;
}