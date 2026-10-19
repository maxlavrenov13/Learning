#include <iostream>
using namespace std;

int sumFunk(int N) {
    int total = 0;
    for (int i = 1; i <= N; i++) {
    total = total + i;
    }
    return total;
}
int main() {
    int N;
    cin >> N;
    int result = sumFunk(N);
    cout << "Sum = " << result << endl;
    return 0;
}