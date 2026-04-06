module;
#include <stdio.h>

export module gameutile;

export class board {
private:
	static const int WIDTH{10};
	static const int HEIGHT{20};
	int board_perm[HEIGHT][WIDTH][2];
public:
	board() { reset_board(); };
	int board_temp[HEIGHT][WIDTH][2];

	void reset_board() {
		for (int y = 0; y < HEIGHT; y++) {
			for (int x = 0; x < WIDTH; x++) {
				board_perm[y][x][0] = 0;
				board_perm[y][x][1] = 0;
				board_temp[y][x][0] = 0;
				board_temp[y][x][1] = 0;
			}
		}
	}

	int getboard(int y, int x) const { return board_perm[y][x][0]; }
	int getboardcolor(int y, int x) const { return board_perm[y][x][1]; }
};

export class block {
private:
	int block_type;
	int x, y;
	int block_rotation;

	static const int blocklist[7][4][4][4];
public:
	block(int t, int startX, int startY)
		:block_type{ t }, block_rotation{ 0 }, x{ startX }, y{ startY } {}
	~block() {}
};

const int block::blocklist[7][4][4][4] = {
{
	{{0,0,0,0}, {1,1,1,1}, {0,0,0,0}, {0,0,0,0}},
	{{0,0,1,0}, {0,0,1,0}, {0,0,1,0}, {0,0,1,0}},
	{{0,0,0,0}, {0,0,0,0}, {1,1,1,1}, {0,0,0,0}},
	{{0,1,0,0}, {0,1,0,0}, {0,1,0,0}, {0,1,0,0},}
},
{
	{{0,0,0,0}, {1,1,0,0}, {0,1,1,0}, {0,0,0,0}},
	{{0,0,1,0}, {0,1,1,0}, {0,1,0,0}, {0,0,0,0}},
	{{0,0,0,0}, {0,1,1,0}, {0,0,1,1}, {0,0,0,0}},
	{{0,0,0,0}, {0,0,1,0}, {0,1,1,0}, {0,1,0,0}}
},
{
	{{0,0,0,0}, {0,0,1,1}, {0,1,1,0}, {0,0,0,0}},
	{{0,0,0,0}, {0,1,0,0}, {0,1,1,0}, {0,0,1,0}},
	{{0,0,0,0}, {0,1,1,0}, {1,1,0,0}, {0,0,0,0}},
	{{0,1,0,0}, {0,1,1,0}, {0,0,1,0}, {0,0,0,0}}
},
{

},
{

},
{

},
{
	{{0,0,0,0}, {0,1,1,0}, {0,1,1,0}, {0,0,0,0}},
	{{0,0,0,0}, {0,1,1,0}, {0,1,1,0}, {0,0,0,0}},
	{{0,0,0,0}, {0,1,1,0}, {0,1,1,0}, {0,0,0,0}},
	{{0,0,0,0}, {0,1,1,0}, {0,1,1,0}, {0,0,0,0}}
},
};