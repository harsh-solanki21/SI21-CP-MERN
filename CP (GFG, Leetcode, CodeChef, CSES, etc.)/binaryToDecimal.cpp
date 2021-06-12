#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void initCode() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   
 	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void binary(ll n) {
	
	ll mul = 1, sum = 0;

	while(n > 0) {

		ll lastDigit = n%10;
		n /= 10;

		if(lastDigit) {
			sum += lastDigit * mul;
		}
		mul *= 2;
	}
	cout<<sum;
}

int main() {

	initCode();

	binary(10101111110);

	return 0;

}
