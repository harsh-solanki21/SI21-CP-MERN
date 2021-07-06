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


    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        int a[2*n];
        int odd = 0, even = 0;
        for(int i=0; i<2*n; i++) {
            int a;
            cin>>a;
            if(a%2 == 0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

    return 0;

}
