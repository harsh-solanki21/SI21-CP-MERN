#include <iostream>
using namespace std;

typedef long long ll;


int main() {

    ll n;
    cin>>n;

    if (n == 2 || n == 3)
			cout << "NO SOLUTION";
		else {

			for (ll i = 1; i <= n; i++) {
				if (i % 2 == 0)
					cout << i << " ";
			}
			for (ll i = 1; i <= n; i++) {
				if (i % 2 != 0)
					cout << i << " ";
			}

		}

return 0;

}