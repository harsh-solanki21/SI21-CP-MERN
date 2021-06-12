#include<bits/stdc++.h>
using namespace std;

void initCode() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   
 	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void decimalToBinary(int n) {
	int a[10];
	int i=0;
	while(n>0) {
		a[i] = n%2;
		n /= 2;
		i++;
	}
	for(int j=i-1; j>=0; j--)
		cout<<a[j];
}

int main() {

	initCode();

	decimalToBinary(45);

	return 0;

}
