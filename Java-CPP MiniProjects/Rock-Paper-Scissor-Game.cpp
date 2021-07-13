#include<bits/stdc++.h>
using namespace std;


string winner(string moves) {

    map<char, int> data;
    data['R'] = 0;
    data['P'] = 1;
    data['S'] = 2;
 
    // If both the players chose to play the same move
    if (moves[0] == moves[1]) {
        return "Draw";
    }
 
    // Player A wins the game
    if (((data[moves[0]] | 1 << (2)) - (data[moves[1]] | 0 << (2))) % 3) {
        return "Player A Won!";
    }
 
    return "Player B Won!";
}

// Query function
void performQueries(string a[], int n) {
    for (int i = 0; i < n; i++)
        cout << winner(a[i]) << endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string a[] = { "RP", "PS", "RS", "SS" };
    int n = sizeof(a) / sizeof(string);
 
    performQueries(a, n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
