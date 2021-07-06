#include<bits/stdc++.h>
using namespace std;
#define int long long int

int largestPrimefactor(int n) {
   int lpf = -1;
   while (n % 2 == 0) {
      lpf = 2;
      n /= 2;
   }
   for (int i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
         lpf = i;
         n = n / i;
      }
   }
   if (n > 2)
   lpf = n;
   return lpf;
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

    cout<<largestPrimefactor(n)<<endl;;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
