#include<bits/stdc++.h>
using namespace std;
#define int long long int


int romanToInt(string s) {
    vector<int>v(256);
    v['I']=1,v['V']=5,v['X']=10,v['L']=50,v['C']=100,v['D']=500,v['M']=1000;

    int sum=0;
    for(int i=0;i<s.length();i++){
        if(v[s[i]]<v[s[i+1]]){
            sum=sum-v[s[i]];
        }
        else{
            sum=sum+v[s[i]];
        }
    }
    return sum;  
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
    
    cout<<romanToInt(s)<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
