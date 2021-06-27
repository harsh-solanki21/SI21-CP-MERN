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
    
        unordered_map<string,int> mp;
        int n;
        cin>>n;

        for(int i=0; i<n*3; i++) {
            string s;
            int temp;
            cin>>s>>temp;

            if(mp.find(s) != mp.end()) {
                mp[s] += temp;
            }
            else {
                mp.insert({s,temp});
            }
        }
        vector<int> v;
        for(auto i : mp) {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
