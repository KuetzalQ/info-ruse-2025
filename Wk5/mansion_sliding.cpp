#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, w;
    cin >> N >> w;

    int houses[N];
    for (int i = 0; i < N; i++) {
        cin >> houses[i];
    }

    // calculate the first window (red)
    int total = 0;
    for (int i = 0; i < w; i++) {
        total += houses[i];
    }

    // for rest of possible positions, remove first house and add last house
    int best = total;

    // possible positions: N - w + 1

    for (int i = 0; i < N - w; i++) {
        // we update the total instead of recalculating
        // total = total - (start of mansion) + (end of mansion)
        total = total - houses[i] + houses[i + w];

        if (total > best) {
            best = total;
        }
    }

    cout << best << "\n";
}

