#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    public:
        float width;
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
    obj1.width = 7;
    Rectangle obj2;
    obj2.length = 2;
    obj2.width =  31.2;
    cout << obj1.area() << endl << obj1.perimeter() << endl;
}