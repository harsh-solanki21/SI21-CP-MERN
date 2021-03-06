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

        int previous = a[0], count = 0;
        if(a[0] > a[1])
            count++;
        for(int i=1; i<n-1; i++) {
            if(previous < a[i] && a[i] > a[i+1])
                count++;
            previous = max(previous,a[i]);
        }
        if(previous < a[n-1])
            count++;

        cout<<count<<endl;
         
    }
        

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
