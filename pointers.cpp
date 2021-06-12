#include <iostream>
using namespace std;


int main(){

    // pointers are basically a location where a variable stored in the RAM
    // example

    int age = 10;
    int *pAge = &age;
    // accessing the address
    cout << &age << endl;

    // saving it into a pointer variable
    cout << pAge << endl;

    // dereferencing a pointer :
    // mengambil nilai dari pointer
    cout << *pAge << endl;
    
    

    



    return 0;
}

