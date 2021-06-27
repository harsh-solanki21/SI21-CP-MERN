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
    
    int n,q;
    cin>>n>>q;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    string result;

    while(q--) {
        int x;
        cin>>x;
        int position = lower_bound(a.begin(), a.end(), x) - a.begin();

        if(a[position] == x)
            result = "0";
        else if(position%2 == 0)
            result = "POSITIVE";
        else
            result = "NEGATIVE";
        cout<<result<<endl;
    }

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
