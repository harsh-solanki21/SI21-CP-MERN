#include<bits/stdc++.h>
using namespace std;

int main() {

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

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        vector<int> even;
        vector<int> odd;
        for(int i=0; i<n; i++) {
            if(a[i]%2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        for(int i=0; i<even.size(); i++)
            cout<<even[i]<<" ";
        for(int i=0; i<odd.size(); i++)
            cout<<odd[i]<<" ";
        cout<<endl;

    }

    return 0;

}
