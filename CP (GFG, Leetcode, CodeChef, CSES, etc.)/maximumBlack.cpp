#include<bits/stdc++.h>
using namespace std;


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

        int r,c;
        cin>>r>>c;

        char a[r][c];
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                cin>>a[i][j];
            }
        }

        int result = 0;
        for(int i=0; i<r; i++) {
            int count = 0;
            for(int j=0; j<c; j++) {
                if(a[i][j] == '#')
                    count++;
            }
            result = max(result, count);
        }

        cout<<result<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
