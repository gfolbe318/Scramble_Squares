#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

enum shark {
	silver, blue, orange, brown
};

enum part {
	head, tail
};

struct info {	
	shark species;
	part body_part;

	info() {}

	info(shark shark_in, part part_in)
		:species(shark_in), body_part(part_in) {}
};

struct tile {

	info north;
	info east;
	info south;
	info west;

	tile() {}

	tile(
		shark shark_one, part part_one,	shark shark_two, part part_two,
		shark shark_three, part part_three,	shark shark_four, part part_four) {

			north = info(shark_one, part_one);
			east = info(shark_two, part_two);
			south = info(shark_three, part_three);
			west = info(shark_four, part_four);

	}

	void rotate_right() {
		info temp = info(north.species, north.body_part);
		north = east;
		east = south;
		south = west;
		west = temp;
	}
		
};

bool isValid(vector<vector<tile>>& board) {};

	
int main() {

	tile A = tile(shark::blue, part::tail, shark::brown, part::head, shark::orange, part::head, shark::silver, part::tail);
	tile B = tile(shark::brown, part::tail, shark::blue, part::head, shark::silver, part::head, shark::orange, part::tail);
	tile C = tile(shark::silver, part::tail, shark::blue, part::tail, shark::orange, part::tail, shark::brown, part::tail);
	tile D = tile(shark::brown, part::head, shark::silver, part::head, shark::orange, part::head, shark::orange, part::tail);
	tile E = tile(shark::blue, part::head, shark::orange, part::tail, shark::brown, part::tail, shark::silver, part::tail);
	tile F = tile(shark::blue, part::head, shark::blue, part::tail, shark::brown, part::tail, shark::orange, part::head);
	tile G = tile(shark::silver, part::tail, shark::orange, part::head, shark::brown, part::tail, shark::blue, part::head);
	tile H = tile(shark::brown, part::tail, shark::blue, part::tail, shark::silver, part::head, shark::orange, part::head);
	tile I = tile(shark::silver, part::head, shark::blue, part::head, shark::brown, part::head, shark::orange, part::tail);


	vector<vector<tile>> board = {
		{E, B, C},
		{D, A, F},
		{G, H, I}
	};

	return(0);
}

bool isValid(vector<vector<tile>>& board) {

};