#include <iostream>
using namespace std;

bool isPositive(string str1, string str2) {
    int m = str1.size();
    int n = str2.size();

    int i = 0;
    int j = 0;

    while (j < m && i < n){
        if (str1[j] == str2[i]) {
            j++;
        }
        i++;
    }
    return (j == m);
}

int main() {

	string vc;
	cin>>vc;
	int sc;
	cin>>sc;
	int count=0;

	while(count < sc) {
        count++;
        string sample;
		cin>>sample;
        
        bool result = isPositive(sample,vc);
        if(result)
            cout<<"POSITIVE"<<endl;
        else
            cout<<"NEGATIVE"<<endl;
    }

}
