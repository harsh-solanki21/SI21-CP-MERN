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

    for(int i=0; i<n; i++) {
        int position = a[i]-1; //number 3 goes to index 2
        if(a[i] <= n && a[i] != a[position]) {
            int temp = a[i];
            a[i] = a[position];
            a[position] = temp;
            position = a[i]-1; //now a[i] has changed
        }
    }

    for(int i=1; i<n; i++) {
        if(a[i] != i+1) {
            cout<<i+1<<endl;
            break;
        }
    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
