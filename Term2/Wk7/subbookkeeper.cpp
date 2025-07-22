#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char c;
    cin >> c;

    int counter = 0;

    for (int i = 1; i < N; i++) {
        char x;
        cin >> x;
        if (c == '?') {
            counter += 1;
        } else if (x == '?') {
            x = c;
            counter += 1;
        } else if (x == c) {
            counter += 1;
        }
        c = x;
    }
    cout << counter << "\n";
}