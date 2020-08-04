//Evenrise

#include <bits/stdc++.h>
#define MAX 19000007
using namespace std;
 
long long int i,j;
 
int prime(long long int n)
{
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}
 
int main()
{
    int t;
 
    cin >>t;
    while(t--)
    {
        long long int num;
        cin >> num;
 
        if(num == 1) cout << "YES\n";
        else if(prime(num+1) == 1) cout << "NO\n";
        else if(prime(num + 1) == 0) cout<<"YES\n";
    }
}
