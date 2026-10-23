#include <iostream>
using namespace std;
int arrMax(int arr[], const int size);
int arrMin(int arr[], const int size);
int main(){
    const int size = 7;
    int arr[size];
    cout << "Введите " << size << " чисел: ";
    for (int i = 0; i < size; i++) {
    cin >> arr[i];
    }
    cout << arrMax(arr, size) << endl;
    cout << arrMin(arr, size) << endl;
    return 0;
}

int arrMax(int arr[], const int size){
    int temp = arr[0];
    for(int i = 0;i < size;i++){
        if(arr[i] > temp){
        temp = arr[i];
        }
    }
    return temp; 
} 
int arrMin(int arr[], const int size){
    int gemp = arr[0];
    for(int i = 0;i < size;i++){
        if(arr[i] < gemp){
        gemp = arr[i];
        }
    }
    return gemp;
} 