#include<bits/stdc++.h>
using namespace std;
#define int long long int

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

        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        if(n == 1) {
            cout<<"1"<<endl;
            return;
        }

        else {

            int count = 0;
            for(int i=1; i<n-1; i++) {
                if(a[i] > a[i-1] && a[i]> a[i+1])
                    count++;
            }

            cout<<count<<endl;
        }

    }
    
}


int32_t main() {

    fileCode();

    mainCode();

    return 0;

}
