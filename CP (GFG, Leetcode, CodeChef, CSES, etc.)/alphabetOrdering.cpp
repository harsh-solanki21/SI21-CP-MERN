#include<bits/stdc++.h>
#define int long long int
using namespace std;


int Break(string s, int n) {
    int sub = 0;
    int flag = 2;  // 0 for increase, 1 for decrease, 2 for startMode

    for(int i=0; i<n-1; i++) {
        if(s[i] > s[i+1]) {
            
            if(flag == 1) {
                sub++;
                flag = 2;
            }
            else
                flag = 0;
        }

        else if(s[i] < s[i+1]) {

            if(flag == 0) {
                sub++;
                flag = 2;
            }
            else
                flag = 1;
        }
    }
    return sub+1;
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

        string s;
        cin>>s;
        int n = s.size();
        int result = Break(s, n);
        cout<<result<<endl;

    }

    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
