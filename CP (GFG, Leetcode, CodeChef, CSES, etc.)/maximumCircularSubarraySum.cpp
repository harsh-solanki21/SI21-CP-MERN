#include<bits/stdc++.h>
using namespace std;


int kadane(int a[], int n) {

    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++) {
        currentsum += a[i];
        if(currentsum < 0) {
            currentsum = 0;
        }
        else {
            maxsum = max(maxsum, currentsum);
        }
    }
    return maxsum;

}

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
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(a,n);

    int totalsum = 0;
    for(int i=0; i<n; i++) {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a,n);

    cout<<max(wrapsum, nonwrapsum)<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
