#include<bits/stdc++.h>
using namespace std;
#define int long long int


int findSqrt(int x) {
    if (x < 2) return x;
    
    int right = x / 2;
    int left = 1;
    while (left <= right) {
        int mid = (right + left) / 2;
        if ((long)mid*mid > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return right;
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

    cout<<findSqrt(n)<<endl;;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
