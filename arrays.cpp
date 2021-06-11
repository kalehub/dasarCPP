#include <iostream>
using namespace std;


int main(){
    // first way to define an array :
    int arr[] = { 10, 20, 30};

    cout << arr[1] << endl;
    // changing the value

    arr[1] = 21;
    cout << arr[1] << endl;

    // second way to define an array :
    // specifying the number of elements
    int arr2[10];
    arr2[0] = 9;

    cout << arr2[0] << endl;
    


    return 0;
}
