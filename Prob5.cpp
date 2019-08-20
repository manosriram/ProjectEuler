#include <iostream>
#define ld long long
using namespace std;

ld smallestMultiple() {
	ld num = 1, t;

	while(true) {
		for (t=1;t<=20;t++) {
			if (num % t == 0)
				continue;

			break;
		}
		if (t == 21)
			return num;

		num++;
	}
	return -1;
}

int main() {
	cout << smallestMultiple() << endl;
}