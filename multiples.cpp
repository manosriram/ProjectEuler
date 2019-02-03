#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    cin >> n;
    while (n--)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            sum += n;
        }
    }
    cout << sum << endl;
}