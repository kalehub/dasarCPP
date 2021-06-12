
#include <iostream>
using namespace std;


int main(){
    // untuk array 2 dimensional
    int arr[3][3] = { {21,22,23}, {24,25,26}, {27,28,29} };
    int arrLen = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrLen ; i++){
        for (int j = 0 ; j < arrLen ; j++){
            cout << arr[i][j] << endl;
        }
    }

    




    return 0;
}








