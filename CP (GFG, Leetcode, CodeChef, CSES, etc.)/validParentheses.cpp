#include<bits/stdc++.h>
using namespace std;
#define int long long int


bool validParentheses(string s) {

    stack<char> sc;
    char c;

    for(int i=0; i<s.length(); i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            sc.push(s[i]);

        if(sc.empty())
            return false;

        switch(s[i]) {

            case ')':
            c = sc.top();
            sc.pop();
            if (c == '{' || c == '[')
                return false;
            break;

        case '}':
            c = sc.top();
            sc.pop();
            if (c == '(' || c == '[')
                return false;
            break;

        case ']':
            c = sc.top();
            sc.pop();
            if (c == '(' || c == '{')
                return false;
            break;
            
        }
    }
    return (sc.empty());
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;

    while(t--) {

        string s;
        cin>>s;

        bool result = validParentheses(s);

        if(result)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
