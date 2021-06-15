#include<bits/stdc++.h>
using namespace std;

string substring(string s, int a, int b) {

    string result;

    for(int i=0; i<s.size(); i++) {

        if(i >= a && i <= b)
            result.push_back(s[b-i+a]);
        else
            result.push_back(s[i]);
    }

    return result;
}

int main() {

    int t;
    cin>>t;

    while(t--) {

        string s;
        int a,b;

        cin>>s>>a>>b;

        string result = substring(s, a, b);
        cout<<result<<endl;

    }

    return 0;

}
