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

    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            for(int k=1; k<=n-i+1; k++) {
                cout<<n-j+1<<" ";
            }
        }
        cout<<"$";  // print $ instead of new line
    }
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
