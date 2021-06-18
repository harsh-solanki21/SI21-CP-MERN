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

    int a,b;
    cin>>a>>b;
    int term;
    cin>>term;

    int difference = b - a;
    int v[term];

    v[0] = a;
    for(int i=1; i<term; i++) {
        v[i] = b;
        b += difference;
    }

    cout<<v[term-1]<<endl;
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
