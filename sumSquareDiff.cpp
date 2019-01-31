#include <iostream>
#include <math.h>
using namespace std;

uint32_t sumOfSq(int n)
{
    return ((n * (n + 1) * ((2 * n) + 1)) / 6);
}

uint32_t squareOfSum(int n)
{
    unsigned long long int res = ((n * (n + 1)) / 2);
    return (pow(res, 2));
    // cout << pow(res, 2);
}

int main()
{
    int n;
    cin >> n;
    cout << squareOfSum(n) - sumOfSq(n) << '\n';
}