#include <iostream>
using namespace std;

int main(){

    int theNumber = 21;
    bool canGuess = true;
    int trialLimit= 3;
    int guessedNumber = 0;
    int trialCount = 0;


    while(canGuess && guessedNumber != theNumber){
        if ( trialCount < trialLimit){
            cout << "Enter your guesses : " << endl;
            cin >> guessedNumber;
            trialCount++;
            
        }else{
            canGuess = false;
        }
    }
    cout << "Correct!" << endl;





    return 0;
}






