#include<bits/stdc++.h>
using namespace std;

void fileCode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {

    fileCode();
    
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a == b && b== c)
        cout<<"1"<<endl;
    else if((a == b || b == c || a == c) && (a+b>c && b+c>a && a+c>b))
        cout<<"2"<<endl;
    else if((a != b && b != c && a != c) && (a+b>c && b+c>a && a+c>b))
        cout<<"3"<<endl;
    else
        cout<<"-1"<<endl;

    return 0;

}
