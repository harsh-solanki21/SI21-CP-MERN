#include<bits/stdc++.h>
using namespace std;


void checkRecord(string s) {
        
    int absent = 0;
    int late = 0;
        
    for(int i=0;i<s.size();i++) {
        if(s[i]=='A')
            absent++;
        if(s[i]=='L')
            late++;
        else
            late=0;
        if(absent >= 2 || late  >2)
            return false;
    }
    return true;
        
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    checkRecord(s);

    return 0;

}
