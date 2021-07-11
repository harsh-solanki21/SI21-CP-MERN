#include<bits/stdc++.h>
using namespace std;


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string s = "qsdfghjxcvnmsdfghjk";
    int a[26] = {0};

    for(int i=0; i<s.length(); i++)
        a[s[i]-'a']++;

    char ans = 'a';
    int maximum = 0;

    for(int i=0; i<26; i++) {
        if(a[i] > maximum) {
            maximum = a[i];
            ans = i + 'a';
        }
    }

    cout<<maximum<<" "<<ans<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
