#include <iostream>
using namespace std;
void funcMax(int *arr, int size);
void funcMin(int *arr, int size);
int main() {
    int size;
    cout <<  "Введите размер массива:";
    cin >> size;
    int *arr = new int [size];
    cout << "Введите числа массива: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    funcMax(arr, size);
    funcMin(arr, size);
    delete arr;
    return 0;
}
void funcMax(int *arr, int size){
    int temp = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    cout << temp << endl;
}
void funcMin(int *arr, int size){
    int gemp = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] < gemp){
            gemp = arr[i];
        }
    }
    cout << gemp << endl;
}