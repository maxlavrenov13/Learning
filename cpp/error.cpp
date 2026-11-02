#include <iostream>
#include <string>
using namespace std;

void calculatorFunc(double a, double b, char operation);
int main() {
    long long x, y;
    char op;
    string answer;
    while(answer != "Нет") {
        cout << "Введите числа: " << endl;
        cin >> x >> y;
        cout << "Введите операцию: *, /, +, -" << endl;
        cin >> op;
        try{
            calculatorFunc(x, y, op);
        }
        catch(int error){
            if(error == 100)
            cout << "Ошибка деления на ноль!" << endl;
        }
        cout << "Продолжить?" << endl;
        cin >> answer;
    }
}
void calculatorFunc(double a, double b, char operation){
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
        if(b == 0) throw(100);
        cout<<"Операция деления: " << a / b << endl;
        }
    else
        cout << "Неизвестная операция" << endl;
    }