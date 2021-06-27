#include<bits/stdc++.h>
using namespace std;

void fileCode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
 

void mainCode() {
    
    int t;
    cin>>t;

    while(t--) {

        int n,m;
        cin>>n>>m;

        int count = 0;
        int a[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>a[i][j];
                if(a[i][j] == 1)
                    count++;
            }
        }

        if(count % 2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
