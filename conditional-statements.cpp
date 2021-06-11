
#include <iostream>
using namespace std;

int main(){

    // using if statements
    bool isActive = true;
    bool isOn = false;

    if (isActive){
        cout << "It's active!" << endl;
    }else{
        cout << "It's not active!" << endl;
    }

    // another example but now with multiple conditions

    if (isActive && isOn){
        cout << "The game is active and is on" << endl;
    }else if(isActive && !isOn){
        cout << "The game is active but off" << endl;
    }else{
        cout << "The game is not active and is not on" << endl;
    }






    return 0;
}






