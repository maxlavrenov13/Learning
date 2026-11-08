#include <iostream>
#include <string>
using namespace std;
class Person;
class Car{
private:
    int static Count;
    int year;
    string model;
    string colour;
    int mileage;
public:
    Car(int year, string model, string colour, int miles){
        this -> year = year;
        this -> model = model;
        this -> colour = colour;
        this -> mileage = miles;
        Count ++;
    }
    void getInfo() {
        cout << year << endl << model << endl << colour << endl << mileage << endl << endl;
    }
    static int getCount(){
        return Count;
    }
    int drive(){
        cout << "Введите расстрояние: ";
        int kilometers;
        cin >> kilometers;
        mileage = mileage + kilometers;
        return mileage;
    }
    int carAge(){
        int age = 2026 - year;
        return age;
    }
    friend void getInfo(Car &car, Person &person);
    friend class Person;
};
class Person{
private:
    int age;
    string name;
public:
    Person(int age, string name){
        this -> age = age;
        this -> name = name;
    }
    void damageCar(Car& car){
        cout << "Некий " << name << " раздолбал машину " << car.model << endl;
    }
    friend void getInfo(Car &car, Person &person);
};
void getInfo(Car &car, Person &person){
    cout << "Человеку с именем " << person.name << " принадлежит машина " << car.model << endl;
}
int Car::Count = 0;
int main(){
    Car bmw(2013, "Bmw X5", "Black", 237932);
    Car nissan(1999, "Nissan Silvia", "White", 390131);
    Person Max(21, "Max");
    Person Artem(21, "Artem");
    getInfo(nissan, Max);
    cout << bmw.carAge() << endl;
    cout << bmw.drive() << endl;
    cout << Car::getCount() << endl;
    Artem.damageCar(bmw);
    return 0;
}