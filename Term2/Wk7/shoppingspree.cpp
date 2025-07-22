#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int prices[N];
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    int total = 0;

    for (int i = 0; i < K; i++) {
        total += prices[i];
    }

    for (int i = K; i < N-K; i+= 2) {
        total += prices[i+1];
    }

    cout << total << "\n";
}