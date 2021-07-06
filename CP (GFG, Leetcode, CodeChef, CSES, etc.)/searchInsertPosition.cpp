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

        int target;
        cin>>target;

        int first = 0;
        int last = nums.size()-1;
        while(first < last) {
            int mid = first+(last-first)/2;
            if(target > nums[mid])
                first = mid+1;
            else
                last = mid-1;
        }
        if(nums[last] >= target)
            cout<<last<<endl;
        else
            cout<<last+1<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
