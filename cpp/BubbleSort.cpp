#include <iostream>
using namespace std;

//Сортировка пузырьком
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//создание массива
int main() {
    const int N = 3;
    int arr[N];
    
    //Ввод
    cout << "Put " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    //Вывод до сортировки
    cout << "Before sort: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Сама сортировка
    bubbleSort(arr, N);
    //Вывод после сортировки
    cout << "After sort: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}