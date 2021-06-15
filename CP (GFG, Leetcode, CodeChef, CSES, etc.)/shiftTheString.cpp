#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int k;
    cin>>k;
    string result;

    for(int i=k; i<s.size(); i++) {
        result.push_back(s[i]);
    }
    for(int i=0; i<k; i++) {
        result.push_back(s[i]);
    }

    cout<<result<<endl;

    return 0;

}
