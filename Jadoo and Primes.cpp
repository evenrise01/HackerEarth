#include<bits/stdc++.h>
using namespace std;

vector <int> v;
bool prime[100000001] = { false };
void sieve()
{
    prime[0] = prime[1] = -1;
    int i, j;
    for (i = 2; i <= 100000000; ++i)
    {
        if (prime[i] == false)
        {
            v.push_back(i);
            for (j = 2 * i; j <= 100000000; j = j + i)
                prime[j] = true;
        }
    }
}

int main()
{
    sieve();
    unsigned long long int sum = 0;
    int t, i, n;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        for (i = 0; i < n; i++)
            sum = sum + v[i];
        cout << sum << endl;
    }
    return 0;
}
