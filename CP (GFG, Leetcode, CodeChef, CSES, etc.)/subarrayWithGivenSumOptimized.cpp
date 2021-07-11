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


    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int i = 0, j = 0;
    int sum = a[i];
    while(i < n) {
        if(sum > s) {
            i++;
            j = i;
            sum = a[i];
        }
        else if(sum == s) {
            cout<<i+1<<" "<<j+1<<endl;
            break;
        }
        else {
            j++;
            sum += a[j];
        }
    } 


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
