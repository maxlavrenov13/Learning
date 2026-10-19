#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Введите переменную: ";
    cin>>num;
    switch(num) { 
        case 1: cout<<"Это цифра 1";
        break;
        case 2: cout<<"Это цифра 2";
        break;
        case 3: cout<<"Это цифра 3";
        break;
        case 4: cout<<"Это цифра 4";
        break;
        case 5: cout<<"Это цифра 5";
        break;
        case 1488: cout<<"ааа пасхалкооооо zzzz goyda";
        break;
        default: cout<<"Эта цифра больше 5";
        break;
    }
    return 0; 
}