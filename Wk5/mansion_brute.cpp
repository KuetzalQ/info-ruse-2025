#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, w;
    cin >> N >> w;

    int houses[N];
    for (int i = 0; i < N; i++) {
        cin >> houses[i];
    }

    // possible starting positions: N - w  + 1

    int best = 0;

    for (int i = 0; i < N - w + 1; i++) {
        int total = 0;
        for (int j = i; j < i + w; j++) {
            total += houses[j];
        }
        
        // update best?
        if (total > best) {
            best = total;
        }
    }

    cout << best << "\n";

}

