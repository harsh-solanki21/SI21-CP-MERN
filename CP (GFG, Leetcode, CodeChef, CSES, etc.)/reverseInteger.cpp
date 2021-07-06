#include<bits/stdc++.h>
using namespace std;
#define int long long int


int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = (rev*10) + (n%10);
        n /= 10;
    }
    return rev;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        bool sign;
        if(n < 0)
            sign = false;
        else
            sign = true;

        int result = reverse(abs(n));

        if(sign)
            cout<<result<<endl;
        else
            cout<<result*(-1)<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
