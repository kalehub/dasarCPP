#include <iostream>
using namespace std;

void sayHi(){
    cout << "Hi!" << endl;
}

void sayHiTo(string name, int age){
    cout << "Hi " << name << ", you are " << age << " years old!" << endl;
}

int sumNum(int a, int b){
    return a+b;
}

int getPow(int num, int powBy){
    int newNum = num;
    for(int i = 1; i<powBy;i++){
        newNum = newNum*num;
    }
    return newNum;
}

int main(){
    // void function returns nothing
    sayHi();
    // void function with parameter
    sayHiTo("Teguh", 22);
    sayHiTo("Maxi", 3);
    sayHiTo("Leo", 1);

    // function that returns something
    cout << sumNum(2,2) << endl;
    cout << getPow(3,3) << endl;

    int example = getPow(2,5);
    cout << example << endl;



    return 0;
}







