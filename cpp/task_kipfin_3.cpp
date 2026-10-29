#include <iostream> // Подключаем библиотеку ввода и вывода
using namespace std; // Используем пространство имен std
int func(int a, int b);
int main() {
    int a, b;
    cout << "Введите ваши числа: "; // Выводим надпись 
    cin >> a >> b;
    func(a, b);
    return 0;
}
int func(int a, int b) { // Функция для того чтобы не засорять функцию main
        if(a > b){
        cout << "Больше" << endl;
    }
    else
        cout << "Меньше" << endl;
        return 0;
}