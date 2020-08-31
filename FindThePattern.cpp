//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-pattern-6/submissions/?utm_source=header&utm_medium=search&utm_campaign=he-search

#include<bits/stdc++.h>
using namespace std;

int main(){

long long n;
cin >> n;

vector < long long> arr(n);

for (long long i= 0; i< n; i++)
    cin >> arr[i];

    sort(arr.begin(),arr.end());
    cout << arr[0] + arr[n-1];
    return 0;
}
