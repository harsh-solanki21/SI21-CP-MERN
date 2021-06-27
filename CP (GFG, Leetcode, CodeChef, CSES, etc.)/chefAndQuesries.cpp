#include<bits/stdc++.h>
using namespace std;


bool sleepCycle(vector<int> v, int h) {

    for(int i=0; i<v.size(); i++) {
        if(h-v[i] <= 0)
            return true;
        else
            h = 2*(h-v[i]);             
    }
    return false;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    while(q--) {

        long long qnum;
        cin>>qnum;
        if(qnum == 1) {
            long long l,r,x;
            cin>>l>>r>>x;
            for(int i=l-1; i<=r-1; i++) {
                a[i] = a[i] + ((x+i+1-l)*(x+i+1-l));
            }
        }
        if(qnum == 2) {
            long long y;
            cin>>y;
            cout<<a[y-1]<<endl;
        }

    }

    return 0;

}
