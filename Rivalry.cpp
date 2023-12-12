#include <iostream>

static void testcase() {
	int R1, R2;
	std::cin >> R1 >> R2;
	int D1, D2;
	std::cin >> D1 >> D2;
	std::cout << (R1 + D1 > R2 + D2 ? "Dominater\n" : "Everule\n");
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cin.exceptions(std::ios::failbit | std::ios::badbit);
	testcase();
}
