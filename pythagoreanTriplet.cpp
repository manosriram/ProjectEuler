#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long int a, b, c, i, j, k;
    a = 1, b = 2, c = 3;
    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 1000; j++)
        {
            for (k = 0; k < 1000; k++)
            {
                if (i < j && j < k)
                {
                    if (pow(i, 2) + pow(j, 2) == pow(k, 2))
                    {
                        break;
                    }
                }
            }
        }
    }
    cout << i << " " << j << " " << k << endl;
}