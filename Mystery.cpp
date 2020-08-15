// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/mystery-20/


#include<bits/stdc++.h> 
using namespace std;

bool isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++) {

        // If (i * i = n) 
        if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
}

void solve()
{
    int div = 0;
    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
            div += (div * div == n ? 1 : 2);


    if (isPerfectSquare(n)) cout << div - 1 << endl;
    else cout << div << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
      
        solve();
    }

    return 0;
}
