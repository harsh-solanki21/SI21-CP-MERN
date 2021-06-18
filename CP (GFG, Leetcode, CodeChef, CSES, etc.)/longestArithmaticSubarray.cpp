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
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        int diff[n-1];
        for(int i=0; i<n-1; i++) {
            diff[i] = a[i] - a[i+1];
        }

        int count = 2, result = 2;
        for(int i=0; i<n-1; i++) {
            if(diff[i] == diff[i+1])
                count++;
            else
                count = 2;
            result = max(result, count);
        }

        cout<<result<<endl;;

    }    
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
