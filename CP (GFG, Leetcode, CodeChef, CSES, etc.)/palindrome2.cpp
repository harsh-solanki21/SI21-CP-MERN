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

int main() {

	initCode();

	string s, newString;
	cin>>s;

	for (int i = s.size()-1; i >= 0; --i) {
		newString.push_back(s[i]);
	}

	if(s == newString)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";

	return 0;

}
