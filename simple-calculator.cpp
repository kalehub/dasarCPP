// calculator project
#include <iostream>
using namespace std;

void displayError(int errorId){
    if (errorId == 0){
        string error = "No operation found";
        cout << error << endl;
    }else{
        string error = "Error";
        cout << error << endl;
    }
}


int getOps(int a, int b, string ops){
    if (ops == "+"){
        return a+b;
    }else if(ops == "="){
        return a-b;
    }else if(ops == "*"){
        return a*b;
    }else if(ops == "-"){
        return a-b;
    }else if(ops == "/"){
        return a/b;
    }else{
        displayError(0);
        return 0;
    }
}

int main()
{
    int numA, numB;
    string ops;

    cout << "Enter the first number : ";
    cin >> numA;
    cout << "Enter the second number : ";
    cin >> numB;
    cout << "Enter the operation : ";
    cin >> ops;

    int result = getOps(numA, numB, ops);
    cout << "Result : " << result << endl;





    return 0;
}






