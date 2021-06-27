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
    
    string num = "35427";

    for(int i=num.size()-1; i>=0; i--) {
        int n = (int)num[i];
        cout<<n-48<<endl;
        if((n-48)%2 ==0)
            num.erase(num.size()-1);
        else
            break;
    }
    cout<<num;
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
