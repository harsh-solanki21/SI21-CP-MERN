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

        if(s[0] == '1')
            s[0] = '0';
        cout<<"1"+s<<endl;

    }

    return 0;

}
