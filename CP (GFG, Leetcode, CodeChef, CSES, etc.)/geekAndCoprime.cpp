#include<bits/stdc++.h>
using namespace std;

void fileCode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


void mainCode() {

    int t;
    cin>>t;

    while(t--) {

        int n, m;
        cin>>n>>m;

        vector<int> v1, v2;

        for(int i=1; i<=n; i++) {
            if(n%i == 0)
                v1.push_back(i);
        }

        for(int i=1; i<=m; i++) {
            if(m%i == 0)
                v2.push_back(i);
        }

        int great = 0;
        for(int i=0; i<v1.size(); i++) {
            for(int j=0; j<v2.size(); j++) {
                if(v1[i] == v2[j])
                    great = v1[i];
            }
        }

        cout<<(n/great)+(m/great)<<endl;      

    }
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
