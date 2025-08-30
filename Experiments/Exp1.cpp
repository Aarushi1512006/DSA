#include <iostream>
using namespace std;
int main() {
    int arr[2][3];   
    int wordSize = sizeof(int);

    cout << "Word size = " << wordSize << " bytes" << endl;
    cout << "Base Address of arr = " << (void*)arr << endl << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // Actual address
            cout << "Address of arr[" << i << "][" << j << "] = " << (void*)&arr[i][j] << endl;

            // Theoretical address
            void* theoAddr = (void*)((char*)arr + ((i * 4) + j) * wordSize);
            cout << "Theoretical Address = Base + ((" << i << "4)+" << j << ")" 
                 << wordSize << " = " << theoAddr << endl << endl;
        }
    }

    return 0;
}