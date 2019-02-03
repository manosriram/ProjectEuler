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
    long double n;
    long int mod = 1000000007;
    string a;
    long int g, sum = 0;
    cin >> n;
    while (n--)
    {
        if (isPrime(n))
        {
            g = n;
            sum += g;
            sum %= mod;
        }
    }
    cout << sum - 1 << endl;
}