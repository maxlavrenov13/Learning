#include <iostream>
using namespace std;

double avgarr(double arr[], const int size);
int main (){
    const int size = 5;
    double arr[size];
    cout << "Введите " << size << " чисел: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << avgarr(arr, size);
    return 0;
}
double avgarr(double arr[], const int size){
    double c = 0;
    for(int i = 0;i < size;i++){
        c = c + arr[i];
    }
    return c / size;
}