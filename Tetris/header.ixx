module;
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

export module header;

export namespace Units {
	namespace Key {
		int Keyhit() {
			return ::_kbhit();
		}
		int Getch() {
			return ::_getch();
		}
	}
	void Clearscreen() {
		::system("cls");
	}
	void GotoXY(int x, int y) {
		COORD pos = { (short)x, (short)y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}