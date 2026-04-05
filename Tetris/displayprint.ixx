module;
#include <stdio.h>

import header;
import gameutile;
export module displayprint;

export void Printboard(int y, int x) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf(" ");
		}
	}
}