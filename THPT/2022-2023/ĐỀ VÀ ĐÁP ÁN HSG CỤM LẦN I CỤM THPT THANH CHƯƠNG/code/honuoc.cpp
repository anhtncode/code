#include<bits/stdc++.h>;
#define MAX 1000000

#define ll long long
using namespace std;

long long l1;
long long a[MAX]; long long b[MAX];

int main(){ freopen("HONUOC.INP","r",stdin);
freopen("HONUOC.OUT","w",stdout);
	int N, t;
	cin >> N >> t;

	ll sum = 0;
	for (int i = 1; i <= N; i++){
		cin >> a[i] >> b[i];
		sum += a[i];
	}
	cout << sum << endl;

	for (int i = 1; i <= t; i++){
		for (int k = 1; k <= N; k++){
			if (a[k] > 0){
				a[k] -= b[k];
			}
		}
		sum = 0;
		for (int j = 1; j <= N; j++){
			if (a[j] >= 0){
				sum += a[j];
			}
		}

		cout << sum << endl;
	}

	return 0;
}

