#include <iostream>
#include <math.h>
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

ld getNthPrime(ld n) {
	ld i = 1;
	while (n > 0) {
		if (isPrime(i))
			n--;
		i+=2;
	}
	return i;
}

int main() {
	ld n;
	cin >> n;		
	cout << getNthPrime(n) << endl;
}