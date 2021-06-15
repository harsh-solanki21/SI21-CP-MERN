#include<bits/stdc++.h>
using namespace std;


string interpret(string command) {
        
    string result;
    int i=0;
        
    while(i < command.size()) {
            
        if(command[i] == 'G') {
            result.push_back('G');
            i++;
        }
        else if(command[i] == '(' && command[i+1] == ')') {
            result.push_back('o');
            i += 2;
        } 
        else if(command[i] == '(' && command[i+1] == 'a') {
            result.push_back('a');
            result.push_back('l');
            i += 4;
        }
    }
        
    return result;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--) {
        string command;
        cin>>command;

        string result = interpret(command);
        cout<<result<<endl;
    }  

    return 0;

}
