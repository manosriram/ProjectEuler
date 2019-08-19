#include <iostream>
#define lt long long int
using namespace std;

bool isPalindrome(lt p) {
	string num = std::to_string(p);
	int low = 0, high = num.length() - 1;

	while (low < high) {
		if (num[low] == num[high]) {
			low++;
			high--;
			continue;
		}
		return false;
	}
	return true;
}

int largest3dPal(lt x, lt y) {
	static lt maxP = INT_MIN;
	for (lt t=y;t>=100;t--) {
		for (lt j=y;j>=x;j--) {
			if (isPalindrome(t * j)) {
				if ((t * j) > maxP) {
				maxP = (t * j);
				}
			}
			else
				continue;
		}
		continue;
	}
	return (maxP == INT_MIN ? -1 : maxP);
}


int main() {
	lt x=100,y=999;

	cout << largest3dPal(x, y) << endl;

}