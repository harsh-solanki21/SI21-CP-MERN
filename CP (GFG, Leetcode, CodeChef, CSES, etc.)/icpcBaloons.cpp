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

        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=n-1; i>=0; i--) {
            if(a[i] <= 7) {
                cout<<i+1<<endl;
                break;
            }
        }
         
    }

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
