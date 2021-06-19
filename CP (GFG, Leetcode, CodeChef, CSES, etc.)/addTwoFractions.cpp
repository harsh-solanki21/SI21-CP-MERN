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


int gcd(int n1, int n2) {

    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;

}

void mainCode() {
    
    int t;
    cin>>t;

    while(t--) {

        int n1,d1,n2,d2;
        cin>>n1>>d1>>n2>>d2;

        if(d1 == d2) {
            cout<<(n1+n2)<<"/"<<d1<<endl;
        }

        else {

            int denominator1 = d1, denominator2 = d2;
            int i = 2, j = 2;

            while(denominator1 != denominator2) {
                if(denominator1 < denominator2) {
                    denominator1 = d1 * i;
                    i++;
                }
                else {
                    denominator2 = d2 * j;
                    j++;
                }
            }

            n1 = n1 * (i-1);
            n2 = n2 * (j-1);
            int numeratorSum = n1 + n2;

            int divide = gcd(numeratorSum, denominator1);
            
            cout<<numeratorSum/divide<<"/"<<denominator1/divide<<endl;

        }

    }

}


int main() {

    fileCode();

    mainCode();

    return 0;

}
