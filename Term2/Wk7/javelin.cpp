#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int curr;
    cin >> curr;

    int counter = 1;
    for (int i = 1; i < N; i++) {
        int x;
        cin >> x;
        if (x > curr) {
            curr = x;
            counter += 1;
        }
    }

    cout << counter << "\n";
}