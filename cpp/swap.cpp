#include <iostream>
using namespace std;

void swapByPtr(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x = 10;
    int y = 20;
    cout << "До функции: " << x << ", " << y << endl;
    swapByPtr(&x, &y); 
    cout << "После функции: " << x << ", " << y << endl;
}