#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n;
    cin>>n;

    if(n%2 != 0)
        cout<<"0"<<endl;
    else {
        if(n%4 == 0)
            cout<<(n/4)-1<<endl;
        else
            cout<<n/4<<endl;
    }

    return 0;

}
