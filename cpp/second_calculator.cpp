#include <iostream>
using namespace std;
int main() {
    string answer;
    while(answer !="Стоп") {
    long long a;
    long long b;
    char operation;
    cout<<"Выберите операцию: +, -, *, / \n";
    cin >> operation;
    cout<<"Введите первое число: ";
    cin >> a;
    cout<<"Введите второе число: ";
    cin >> b;
    if(operation == '+') {
        cout<<"Операция сложения: " << a + b << endl;
    }
    else if(operation == '-') {
        cout<<"Операция вычитания: " << a - b << endl;
    }
    else if(operation == '*') {
        cout<<"Операция умножения: " << a * b << endl;
    }
    else if(operation == '/') {
        cout<<"Операция деления: " << a / b << endl;
        }
    }
    cout<<"Продолжить?"<<endl;
    cin>>answer;
}