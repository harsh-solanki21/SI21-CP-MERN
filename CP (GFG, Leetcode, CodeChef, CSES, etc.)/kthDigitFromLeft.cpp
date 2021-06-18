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
    int copyDigit = digit;

    int countDigit = 0;
    while(digit > 0) {
        countDigit++;
        digit /= 10;
    }
    
    int n = (countDigit - k) + 1;
    int result = 0;
    for(int i=0; i<n; i++) {
        result = copyDigit % 10;
        copyDigit /= 10;
    }
    cout<<result<<endl;
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
