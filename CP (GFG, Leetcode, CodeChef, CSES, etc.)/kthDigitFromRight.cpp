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

    int a,b,k;
    cin>>a>>b>>k;

    int digit = pow(a,b);

    int result = 0;
    for(int i=0; i<k; i++) {
        result = digit % 10;
        digit /= 10;
    }
    cout<<result<<endl;
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
