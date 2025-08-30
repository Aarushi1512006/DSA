#include<iostream>
using namespace std;
int main(){
    int m=3, n=3;
    int poly1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int poly2[3][3] = {{9,8,7}, {6,5,4}, {2,3,1}};
    int sum[3][3];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum[i][j] = poly1[i][j] + poly2[i][j];
        }
    }
    cout << "Sum of two polynomials is: " << endl;
    bool fTerm = true;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(sum[i][j] != 0){
                if(!fTerm) cout << " + ";
                cout << sum[i][j] << "x^" << i << "y^" << j;
                fTerm = false;
            }
        }
    }
}