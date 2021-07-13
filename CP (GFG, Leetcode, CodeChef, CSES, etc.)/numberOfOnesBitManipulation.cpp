#include<bits/stdc++.h>
using namespace std;


int numberOfOnes(int n) {
    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    cout<<numberOfOnes(19)<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
