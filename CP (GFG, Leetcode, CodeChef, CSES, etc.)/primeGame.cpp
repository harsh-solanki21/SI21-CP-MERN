#include <bits/stdc++.h>
using namespace std;

void fileCode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int primeGame(int a, int b) {

    vector<int> v;
    int flag;

    for(int i=a; i<=b; i++) {
        flag = 1;
        for(int j=2; j<=sqrt(i); j++) {
            if(i%j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            v.push_back(i);
    }

    if(v.size() == 1)
        return 0;
    else if(v.size() == 0)
        return -1;
    else
        return v.back() - v.front();

}

int main() {

    fileCode();

    int t;
    cin>>t;

    while(t--) {

        int a,b;
        cin>>a>>b;

        int result = primeGame(a,b);

        cout<<result<<endl;

    }

}
