#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct car {
    string mark;
    string model;
    int year;
    int distance;
    void info(){
        cout << endl << "Марка: " << mark << endl << "Модель: " << model << endl << "Год: " << year << endl << "Пробег: " << distance << endl;
    }
    void writeIN(){
        ofstream file("CAR.txt", ios_base::out);
        if(file.is_open()){
        file << "Марка: " << mark << endl << "Модель: " << model << endl << "Год: " << year << endl << "Пробег: " << distance << endl;
        file.close();
        }
    }
};
int skrutkaProbega(int *a);
int main() {
    car BMW;
    BMW.mark = "BMW";
    BMW.model = "X5M";
    BMW.year = 2012;
    BMW.distance = 145000;
    car Mercedes;
    Mercedes.mark = "Mercedes";
    Mercedes.model = "S-class S500";
    Mercedes.year = 2013;
    Mercedes.distance = 204000;
    car Toyota;
    Toyota.mark = "Toyota";
    Toyota.model = "Mark 2";
    Toyota.year = 1999;
    Toyota.distance = 454242;
    car Ford;
    Ford.mark = "Ford";
    Ford.model = "Mustang GT500";
    Ford.year = 2020;
    Ford.distance = 53390;
    Toyota.info();
    skrutkaProbega(&Toyota.distance);
    Toyota.info();
    BMW.writeIN();
}
int skrutkaProbega(int *a){
    *a /= 2;
    return 0;
}