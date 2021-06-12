#include <iostream>
using namespace std;

// class as a 'blueprint'

class Book {
    private:
        string rating;
    public:
        string title;
        string author;
        int pages;
        // making the constructor
        Book(string btitle, string bauthor, int bpages, string arating){
            cout << "Making object " << endl;
            title = btitle;
            author = bauthor;
            pages = bpages;
            setRating(arating);
        }

        // adding public method
        bool isThick(){
            if (pages >=100){
                return true;
            }else{
                return false;
            }
        }

        void setRating(string aRating){
            rating = aRating;
        }
};


int main(){
    // making the object
    // Book (tipe data) dan nama objek
    Book book1("Outliers", "Malcolm Gladwell", 338,"good");
    cout << book1.title <<endl;

    Book book2("Thinking, fast and slow", "Daniel Kahnemann", 500, "good");
    
    cout << book2.isThick() <<endl;




    return 0;
}
