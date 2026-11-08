#include <iostream>
#include <string>
using namespace std;

class Cars {
    private:
        string mark;
        string model;
        int year;
        string colour;
        int mileage;
    public:
        Cars(string mar, string mod, int y, string col, int km){
        mark = mar;
        model = mod;
        year = y;
        colour = col;
        mileage = km;
        }
    void getInfo() {
        cout << mark << endl << model << endl << year << endl << colour << endl << mileage << endl << endl;
    }
    int drive(){
        cout << "Введите расстрояние: ";
        int kilometers;
        cin >> kilometers;
        mileage = mileage + kilometers;
        return mileage;
    }
};
int main() {
    Cars BMW("BMW", "M5", 2012, "Black", 149289);
    BMW.getInfo();
    Cars Audi("Audi", "A7", 2019, "Dark Blue", 24205);
    Audi.getInfo();
    BMW.drive();
    BMW.getInfo();
}