// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fredo-and-game/?utm_source=header&utm_medium=search&utm_campaign=he-search

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, a, n;

    cin >> t;

    while(t--){

        cin >> a >> n;
        int arr[n];

        for(int i =0; i<n;i++)
        cin >> arr[i];

        int final = 0;

        for(int i = 0; i< n && a > 0; i++){
            arr[i] ? a+=2 : a -= 1;
            final = i+1;
        }

        if(final ==n){
            cout << "Yes " << a << "\n";
        }

        else 
        cout << "No " << final << "\n";
    
    }
    
return 0;
}
