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
    
    int a[6] = {0};
    for(int i=0; i<6; i++) {
        a[i] = i+1;
    }

    int i;
    int position = 1;
    for(i=0; i<position-1; i++)
        cout<<a[i]<<" ";

    a[i] = 18;
    cout<<a[i]<<" ";
    i++;

    for(i=position; i<6; i++)
        cout<<a[i]<<" ";

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
