#include<bits/stdc++.h>
using namespace std;
#define int long long int



int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        vector<int> nums;
        int input;
        for(int i=0; i<n; i++) {
            cin>>input;
            nums.push_back(input);
        }

        if(nums.size()==0)
            return 0;
        int ind=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            else
            {
                nums[ind]=nums[i];
                ind++;
            }
        }
        nums.erase(nums.begin()+ind, nums.end());
        for(int val: nums)
            cout<<val<<" ";
        cout<<endl;
        cout<<nums.size()<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
