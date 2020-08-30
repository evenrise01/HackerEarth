#include <iostream>
#define MAX 100001
using namespace std;

int main(){

int arr[MAX],k;
int n = sizeof(arr)/sizeof(arr[0]);
cin >> n ;

for (int i =0;i<n;i++){
    cin >> arr[i];
}

cin >> k;

for (int i =0;i<n;i++){
    if(arr[i]==k)
    cout << arr[i];
}

return 0;
}
