#include <iostream>
using namespace std;

class Rectangle {
    public:
        float width = 10;
        float length;
        int area() {
            int h = width * length;
            return h;
        }
        int perimeter() {
            int z = width * 2 + length * 2;
            return z;
        }
    
};
int main() {
    Rectangle obj1;
    obj1.length = 4.5;
    Rectangle obj2;
    obj2.length = 2;
    cout << obj1.width << endl << obj2.width << endl;
    cout << obj1.area() << endl << obj1.perimeter() << endl;
}