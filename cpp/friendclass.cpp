#include <iostream>
using namespace std;
class Person;
class Dog{
private:
    int health;
public:
    Dog (int health){
        this ->health = health;
    }
    friend class Person;
};
class Person{
public:
    void damageDog(Dog& dog){
        dog.health -=20;
        cout << dog.health << endl;
    }
    void healDog(Dog& dog){
        dog.health +=20;
    }
};
 int main() {
    Dog doberman(100);
    Person Artem;
    Artem.damageDog(doberman);
}