#include<bits/stdc++.h>
using namespace std;


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n,m;
    cin>>n>>m;

    int target;
    cin>>target;

    int a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    int r = 0, c = m-1;
    bool found = false;
    while(r < n and c >= 0) {
        if(a[r][c] == target) {
            found = true;
            break;
        }
        else if(a[r][c] > target)
            c--;
        else
            r++;
    }
    if(found)
        cout<<"Element Found"<<endl;
    else
        cout<<"Element does not Exist"<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
