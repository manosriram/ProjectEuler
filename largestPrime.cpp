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
    unsigned long long int t;
    for (t = 2; t <= 600851475143 / 2; t++)
    {
        if (600851475143 % t == 0 && isPrime(t))
        {
            cout << t << " ";
            continue;
        }
        cout << t << '\n';
    }
}