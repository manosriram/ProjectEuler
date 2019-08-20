#include <iostream>
#include <math.h>
#define ld long long int
using namespace std;

int main() {
	ld n, sumFirstN, sumSquareFirstN;
	cin >> n;

	sumFirstN = pow((n * (n + 1)) / 2, 2);
	sumSquareFirstN = (n * (n + 1) * ((2 * n) + 1))/6;

	cout << abs(sumFirstN - sumSquareFirstN) << endl;
}