#include <iostream>

/*
* num
* g.t.       : 1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1  ...  7 8 9 8 7 6 5 4 3 2 1
* range(idx) : 1         6                 15    28                      45
* step       :     +5             +9         +13             +17
*                         +4            +4           +4
* 
* denom
* g.t.       : 1 2 1 1 2 3 4 3 2 1 1  ...  7 8 7 6 5 4 3 2 1
* range(idx) :     3             10   21                  36
* step       :  +3        +7       +11       + 15
*                    +4        +4       +4
*/

int calc_num_and_denom(int n, int range, int step) {
	while (n > range) {
		step += 4;
		range += step;
	}

	int prev_step = range - step;
	// Local highs in a repeating pattern of ups and downs
	int top_val = (range - prev_step) / 2 + 1;
	int top_idx = (range - step) + top_val;

	return top_val - abs(n - top_idx);
}

int main() {
	int n;
	std::cin >> n;

	int num_range = 1;
	int num_step = 1;
	int num = calc_num_and_denom(n, num_range, num_step);

	int denom_range = 0;
	int denom_step = -1;
	int denom = calc_num_and_denom(n, denom_range, denom_step);

	std::cout << num << '/' << denom;

	return 0;
}