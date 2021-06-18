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


int sumOfDigits(int n) {

    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}


bool palindromeSum(int sum) {

    string s = to_string(sum);

    for(int i=0; i<s.size()/2; i++) {
        if(s[i] != s[s.size()-i-1])
            return false;
    }
    
    return true;
}


void mainCode() {

    int n;
    cin>>n;

    int sum = sumOfDigits(n);

    bool result = palindromeSum(sum);

    cout<<result<<endl;
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
