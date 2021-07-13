#include<bits/stdc++.h>
using namespace std;


int powerOptimised(int a, int n) {
 
    int ans = 1;
    while(n > 0) {

        int last_bit = (n & 1);
        
        if(last_bit) {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a = 2, n = 10;
    cout << powerOptimised(a, n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
