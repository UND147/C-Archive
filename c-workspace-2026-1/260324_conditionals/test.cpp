#include <iostream>
using namespace std;
int main() {
	int x = 2, y = 10, z = 0;
	z = x++ * 2 + --y - 5 + x * (y % 2);
	cout << z;
	return 0;
}