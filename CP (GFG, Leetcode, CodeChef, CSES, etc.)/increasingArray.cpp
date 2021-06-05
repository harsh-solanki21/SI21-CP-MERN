#include <iostream>
using namespace std;

typedef long long ll;

int main() {
	
	ll n;
	cin >> n;
	ll a[n];
	ll count = 0;
	ll dif = 0;

	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (ll i = 0; i < n - 1; i++) {

		if (a[i + 1] < a[i])
		{
			dif = a[i] - a[i + 1];
			a[i + 1] = a[i];
			count = count + dif;
		}

	}

	cout << count << endl;

	return 0;
}
