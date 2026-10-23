#include <iostream>
using namespace std;
 int main() {
    int val = 10;
    int *ptrval = &val;
    cout << &val << val << endl;
    cout << ptrval << *ptrval << endl;
 }