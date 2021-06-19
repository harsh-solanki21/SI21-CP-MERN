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


bool evenDigit(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    if(count%2 == 0)
        return true;
    else
        return false;
}
     

void mainCode() {
    
    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        int v[n];
        for(int i=0; i<n; i++)
            cin>>v[i];

        int count = 0;
        for(int i=0; i<n; i++) {

            bool even = evenDigit(v[i]);
            if(even == true)
                count++;

        }
        cout<<count<<endl;

    }

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
