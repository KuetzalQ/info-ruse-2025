#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {7,3,1,6,2};

    sort(arr, arr+5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\n";
    }
}