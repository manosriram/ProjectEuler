#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#define ld long long int
using namespace std;

bool isPrime(ld n) {
	if (n == 1)
		return false;
	else if (n < 4)
		return true;
	else if (n % 2 == 0)
		return false;
	else if (n < 9)
		return true;
	else if (n % 3 == 0)
		return false;
	else {
		ld r = floor(sqrt(n));
		ld f = 5;
		while (f <= r) {
			if (n % f == 0)
				return false;
			else if (n % (f+2) == 0)
				return false;

			f += 6;
		}
		return true;
	}
}

string addN(ld a, ld b, string totalS) {
	ld c = a + b;
	string temp = std::to_string(c);

	totalS += temp;
	return totalS;
}

// n = 2 Million.
ld getSum(ld n) {
	string totalS;
	ld i = 1, prev = 2;
	while (n > 0) {
		if (isPrime(i)) {
			cout << i << " ";
			n--;
			totalS = addN(prev, i, totalS);
			prev = i;
			// cout << totalS << endl;
		}
		i++;
	}
	int t = std::to_integer(totalS);
	return t;
}

int main() {
	ld n;
	cin >> n;		

	getSum(n);
}