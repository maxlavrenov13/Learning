#include <iostream>
using namespace std;

int area(int a, int b){
    return a * b;
}
double area(double a, double b){
    return a * b;
}
int main() {
    cout << area(5, 4) << endl;
    cout << area(4.4, 7.8) << endl;
}