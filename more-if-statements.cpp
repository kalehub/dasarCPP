#include <iostream>
using namespace std;

void get_biggest(int a, int b){
    if (a < b){
        cout << a << " is less than " << b << endl;
    }else if(a > b){
        cout << a << " is greater than " << b << endl;
    }else{
        cout << a << " is equal to " << b << endl;
    }

}


int main(){
    int a, b;

    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    get_biggest(a,b);





    return 0;
}






