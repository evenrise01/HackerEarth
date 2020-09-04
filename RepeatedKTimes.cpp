//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/submissions/


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, ele, k;
    map<int, int> mp;

    cin >>n;

    for(int i = 0; i < n; i++){
        cin >>ele;
        mp[ele]++;
    }
    cin >>k;
	
    for(auto ele : mp){
        if(ele.second == k){
            cout <<ele.first;
            break;
        }
    }
    return 0;
}
