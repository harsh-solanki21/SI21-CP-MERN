#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        bool result = false;
        int n = s.length();
        if(n > 3) {
        result = (s[0]=='<' && s[1]=='/' && s[n-1]=='>');
        for(int i=2; i<n-1; i++) {
            if(!(islower(s[i])) || (isdigit(s[i])))
                result = false;
            }
        }
        if(result)
            cout<<"Success"<<endl;
        else
            cout<<"Error"<<endl;
    }

    return 0;

}
