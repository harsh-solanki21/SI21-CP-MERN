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

    long long int a, ratio, term;
    cin>>a>>ratio>>term;

    long long int v[term];
    v[0] = a;
    for(long long int i=1; i<term; i++) {
        v[i] = v[i-1] * ratio;
    }
    for(long long int i=0; i<term; i++)
        cout<<v[i]<<" ";

    cout<<v[term-1]<<endl;
    
}


int main() {

    fileCode();

    mainCode();

    return 0;

}
