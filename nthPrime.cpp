#include <iostream>
using namespace std;

inline bool isPrime(unsigned long long int n)
{
    for (int t = 2; t <= n / 2; t++)
    {
        if (n % t == 0)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned long long int n;
    unsigned long long int cnt = 0, in = 1;
    cin >> n;
    while (cnt != n)
    {
        in++;
        if (isPrime(in))
        {
            cnt++;
        }
    }
    cout << in << endl;
}