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

	string s;
	cin>>s;
	bool isPalindrome = true;

	for(int i=0; i<s.size()/2; i++) {
		if(s[i] != s[s.size()-i-1]) {
			isPalindrome = false;
			break;
		}
	}
	
	if(isPalindrome)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";

	return 0;

}
