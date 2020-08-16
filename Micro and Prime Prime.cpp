//https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/?utm_source=header&utm_medium=search&utm_campaign=he-search


#include <iostream>
#define REP(i,n) for (int i =1; i<=n;i++)
using namespace std;


int  ar[1000001];
int pp[1000001];

void Sieve() {

	int n = 1000000;

	REP(i, n) ar[i] = 1;
	ar[0] = ar[1] = 1;

	for (int p = 2; p * p <= n; p++) {

		if (ar[p] == 1) {

			for (int i = p * p; i <= n; i += p)

				ar[i] = 0;
		}
	}

	int cnt = 0;

	REP(i, n) {

		if (ar[i] == 1) cnt++;

		if (ar[cnt]==1) pp[i] = 1;

		else pp[i] = 0;
	}

	REP(i, n)
		pp[i] += pp[i - 1];
}

int main() {
	
	Sieve();
	int t,L,R;
	cin >> t;

	while (t--) {


	cin >> L >> R;
	int cnt = pp[R] - pp[L-1];

		cout << cnt << endl;
	}
}
