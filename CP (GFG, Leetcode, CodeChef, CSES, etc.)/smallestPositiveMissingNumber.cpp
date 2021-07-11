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


    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int mx = a[0];
    for(int i=1; i<n; i++)
        mx = max(mx,a[i]);

    int len = mx+1;
    int b[len] = {0};
    int i = 0;
    while(i < n) {
        int index = a[i];
        b[index] = 1;
        i++;
    }

    int ans = -1;
    for(int i=1; i<len; i++) {
        if(b[i] == 0) {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
