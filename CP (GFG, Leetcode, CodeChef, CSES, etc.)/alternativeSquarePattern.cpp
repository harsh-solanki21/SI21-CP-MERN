#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int odd = 1, even = 10;
    
    for(int i=1; i<=n; i++) {
        
        if(i%2 != 0) {
            for(int j=1; j<=5; j++) {
                cout<<odd<<" ";
                odd++;
            }
            odd += 5;
            cout<<endl;
        }
        else {
            for(int j=1; j<=5; j++) {
                cout<<even<<" ";
                even--;
            }
            even += 15;
            cout<<endl;
        }
    }
    
    return 0;
}
