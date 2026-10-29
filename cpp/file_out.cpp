#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("test.txt");
    char temp[50];
    file.getline(temp, 50);
    cout << temp << endl;
    file.close();
    return 0;
}