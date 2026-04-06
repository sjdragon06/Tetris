module;
#include <iostream>

import header;

export module start;

namespace {
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
	Key::Getch();
}

export int menu() {
	Clearscreen();
	cout << "0, HELP" << endl;
	cout << "1. Game Start" << endl;
	cout << "2. Setting" << endl;
	while (Key::Keyhit() == false) {
		;
	}
	buffer = Key::Getch();
	if (buffer >= 0) { return buffer; }
	else { return -1; }
}