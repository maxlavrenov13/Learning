#include <iostream>
using namespace std;

int main() {
    int number = 5;
    int *ptrnum = &number;
    cout << number << endl;
    *ptrnum = 100;
    cout << number << endl;
    string word = "Hello all people of the World";
    string *ptrword = &word;
    cout << word << endl;
    cout << *ptrword << endl;
    cout << &word << endl << ptrword << endl;
    *ptrword = "I like C++";
    cout << word << endl; 
}