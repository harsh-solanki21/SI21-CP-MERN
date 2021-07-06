#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string s;
    getline(cin, s);

    int count = 0, result = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ')
            count = 0;
        else
            count++;
        result = max(result,count);
    }
    cout<<result<<endl;

    return 0;

}
