#include <iostream>
#include <math.h>
#define lt long long int
using namespace std;

bool isPrime(lt n) {
	for (lt t=2;t<sqrt(n);t++) {
		if (n % t == 0)
			return false;
	}
	return true;
}

lt largestPrime(lt n) {
	lt t;
	for (t = sqrt(n);t>=2;t--) {
		if ((n % t == 0) && isPrime(t)) {
			return t;
		}
		continue;
	}
	return -1;
}

int main() {
	lt n;
	cin >> n;
	largestPrime(n);
}