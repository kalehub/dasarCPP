
#include <iostream>
using namespace std;

int main(){
    string fullName = "I Gede Teguh Satya Dharma";
    cout << "Working with strings"<< endl;
    cout << "Hello" << endl;

    // cek panjang string
    cout << fullName.length() <<endl;

    // mengambil char dari string
    cout << fullName[0] << endl;

    // mengubah char dari string
    // fullName[5] = 'E';
    // cout << fullName << endl;

    // menemukan sebuah char dari string
    // variable.find("string yg ingin dicari", integer mulai pencarian index)
    cout << fullName.find("Teguh", 0) << endl;

    // mengambil bagian dari string
    // substring -> himpunan string dari string terdahulu
    // variable.substr(index_mulai (int), index_sub (int))
    cout << fullName.substr(7,5) << endl;

    // proses bilangan kayanya udh bisa jadi tak skip


    

    

    return 0;
}






