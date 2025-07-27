// Input: arr = 10 | 12| 14 | 16 | 18 | ; element valueto be added;
//insert a new element at the end, begining, pos=3 of the array
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {10, 12, 14, 16, 18};
    int n = (sizeof(arr)/sizeof(arr[0]))-3;
    int ele =7;
    
    for(int i = n-1; i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = ele;
    n++;
    int pos =3;
    for(int i = n-1; i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = 11;
    n++;
    arr[n] = 20;
    n++;
    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}