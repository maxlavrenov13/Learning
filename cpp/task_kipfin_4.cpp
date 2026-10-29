#include <iostream> // Подключаем библиотеку ввода и вывода
using namespace std; // Используем пространство имен std
void frame(string a, string b, string c, string d){
    cout << "**************************************" << endl;
    cout << "*         Лабораторная работа 1      *" << endl;
    cout << "*Выполнил студент группы: " << d << "  *" << endl;
    cout << "*" << b << " " << a  << " " << c << "        *" << endl;
    cout << "**************************************" << endl;
}
int main() {
    string  name, sname, lname, group;
    cout << "Введите имя студента: ";
    cin >> name;
    cout << "Введите фамилию студента: ";
    cin >> sname;
    cout << "Введите отчество студента: ";
    cin >> lname;
    cout << "Введите группу студента: ";
    cin >> group;
    frame(name, sname, lname, group);
    return 0;
}