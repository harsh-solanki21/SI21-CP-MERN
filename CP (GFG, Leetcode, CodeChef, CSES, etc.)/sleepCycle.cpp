#include<bits/stdc++.h>
using namespace std;


bool sleepCycle(vector<int> v, int h) {

    for(int i=0; i<v.size(); i++) {
        if(h-v[i] <= 0)
            return true;
        else
            h = pow(2,i+1)*(h-v[i]);             
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

    int t;
    cin>>t;

    while(t--) {
    
        int l,h;
        cin>>l>>h;
        string s;
        cin>>s;
        int n = s.length();

        vector<int> v;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1' && count != 0) {
                v.push_back(count);
                count = 0;
            }
            else if(s[i] == '0')
                count++;
        }
        if(count != 0)
            v.push_back(count);

        bool result = sleepCycle(v, h);
        
        if(result)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;

}
