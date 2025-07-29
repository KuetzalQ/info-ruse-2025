#include <iostream>
using namespace std;

int main() {

    // Get number of fences
    int N;
    cin >> N;

    // Store all heights of fences
    int fences[N];
    for (int i = 0; i < N; i++) {
        cin >> fences[i];
    }

    // if we want to find max of 1, single for loop
    // if we want to find max of 2, nested for loops
    int best = 0;

    for (int fence1 = 0; fence1 < N; fence1++) {
        for (int fence2 = 0; fence2 < N; fence2++) {
            for (int fence3 = 0; fence3 < N; fence3++) {
                if (fence1 < fence2 && fence2 < fence3) {
                    int diff = (fences[fence2] - fences[fence1]) + (fences[fence2] - fences[fence3]);
                    best = max(best, diff);
                }
            }
        }
    }

    cout << best;
}