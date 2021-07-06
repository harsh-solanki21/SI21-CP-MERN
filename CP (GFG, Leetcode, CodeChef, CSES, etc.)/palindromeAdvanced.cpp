#include<bits/stdc++.h>
using namespace std;
#define int long long int


string processString(string process){

    int n = process.length();

    string processedString;

    for(int i=0; i<n; i++){

        if(isalnum(process[i])){ 
             if(process[i] >= 65 && process[i] <= 90)
                processedString.push_back(process[i]+32);
             else
                processedString.push_back(process[i]);
        }
    }
    return processedString;
}

bool isPalindrome(string s) {
    
    string complete = processString(s);
        
    int total = complete.length();
    int ptr1 = 0;
    int ptr2 = total - 1;

    while(ptr1 <= ptr2){

       if(complete[ptr1] == complete[ptr2]){
            ptr1++;
            ptr2--;
        }

        else
            return false;
    }
   return true;
    
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string s;
    cin>>s;

    if(isPalindrome(s))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
