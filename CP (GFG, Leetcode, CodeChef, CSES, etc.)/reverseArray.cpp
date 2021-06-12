#include <bits/stdc++.h>
using namespace std;
 

void rvereseArray(int arr[], int start, int end) {

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
void printArray(int arr[], int size) {

   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
}
 
int main() {

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Original array is" << endl;
    printArray(arr, n);
     
    rvereseArray(arr, 0, n-1);
     
    cout << "\nReversed array is" << endl;
    printArray(arr, n);
     
    return 0;

}
