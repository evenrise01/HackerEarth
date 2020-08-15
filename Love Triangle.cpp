//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/can-you-guess-1/description/

#include<bits/stdc++.h> 
using namespace std;

long long base_9(long long num)
{
    if (num < 9)
        return num;
    else
        return num % 9 + 10 * base_9(num / 9);
}

int main()
{
    long long number;

    while (scanf("%lld", &number) != EOF)
    {
        cout << base_9(number) << endl;
    }

    return 0;
}
