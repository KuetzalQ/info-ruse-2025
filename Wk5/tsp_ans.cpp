#include <bits/stdc++.h>
using namespace std;

int main() {

    // declare all the variables you need here
    int N;
    int lastSold;
    int possible = 1;

    // read the first number
    cin >> N;

    // declare the arrays you need here
    int mini[N];
    int maxi[N];

    // read the rest of the numbers into your arrays
    for (int i = 0; i < N; i++) {
        cin >> mini[i];
    }
    
    // repeat above ^ for maxiumum
    for (int i = 0; i < N; i++) {
        cin >> maxi[i];
    }

    // simulate the tomatos sold on each day
    lastSold = mini[0]; // we just try to sell the minimum

    for (int i = 1; i < N; i++) {

        if (lastSold > maxi[i]) {
            possible = 0;
        }

        lastSold = max(lastSold, mini[i]);
    }

    // print output
    if (possible == 0) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }

}