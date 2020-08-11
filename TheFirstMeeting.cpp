#include <iostream>
#include<cstring>
using namespace std;
#define MAX 1000000
bool prime[MAX + 1];
 
void sieve() {
 
	memset(prime, true, sizeof(prime));
 
	prime[1] = false;
	
	for (int p = 2; p * p <= MAX; p++) {
 
		if (prime[p] == true) 
			for (int i = p * p; i <= MAX; i += p) {
				prime[i] = false;
			}
	}
}
 
int solve(int arr[], int n) {
 
	int min = MAX + 2, max = -1;
 
	for (int i = 0; i < n; i++) {
		if (prime[arr[i]] == true) {
 
			if (arr[i] > max) max = arr[i];
 
			if (arr[i] < min) min = arr[i];
 
		}
	}
 
	return (max == -1) ? -1 : (max - min);
}
 
int main() {
 
	sieve();
	int n, array[MAX];
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
 
	int res = solve(array, n);
 
	if (res == -1) cout << "-1";
 
	else cout << res;
}
