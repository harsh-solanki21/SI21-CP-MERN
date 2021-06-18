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
    
    int a[] = {1,2,0,7,2};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum += a[j];
            cout<<sum<<endl;
        }
    }
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
