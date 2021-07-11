#include<bits/stdc++.h>
using namespace std;


bool pairSum(int a[], int n, int k) {

    int i = 0, j = n-1;
    while(i < j) {
        if(a[i]+a[j] == k) {
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(k > a[i]+a[j])
            i++;
        else
            j--;
    }
    return false;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    bool result = pairSum(a,n,k);
    if(!result)
        cout<<"Pair Sum Not Found"<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
