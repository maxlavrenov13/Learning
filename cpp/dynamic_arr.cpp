#include <iostream>
using namespace std;

void changeFunk(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > arr[i + 1]) {
            delete &arr[i + 1];
        }
    }
    cout << *arr;
}
int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Введите числа массива: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Ваш массив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    changeFunk(arr, size);
}