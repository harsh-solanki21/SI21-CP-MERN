#include <iostream>
using namespace std;

typedef long long ll;

int main() {
	
	ll n;
	cin >> n;

		while(n--) {

			ll D, d, P, Q, money;
			cin >> D >> d >> P >> Q;

			ll x = D / d;

			if (x % 2 == 0)
				money = d * ((x / 2) * (2 * P + (x - 1) * Q));
			else
				money = d * (x * (P + ((x - 1) / 2) * Q));

			money += (D % d) * (P + x * Q);
			cout << money << endl;
			
		}
	
	return 0;
}
