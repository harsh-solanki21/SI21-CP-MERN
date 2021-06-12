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

	int t;
	cin>>t;

	while(t--) {

		string j,s;
		cin>>j>>s;
		int count=0;

		for(int i=0; i<s.size(); i++){

			for(int k=0; k<j.size(); k++) {
				if(s[i]==j[k]) {
					count++;
					break;
				}
			}

		}

		cout<<count<<endl;

	}

	return 0;

}
