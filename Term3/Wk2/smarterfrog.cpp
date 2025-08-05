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

    for (int mid = 1; mid < N - 1; mid++) {
        int bestLeft = fences[mid];
        for (int left = 0; left < mid; left++) {
            bestLeft = min(bestLeft, fences[left]);
        }
        int bestRight = fences[mid];
        for (int right = mid+1; right < N; right++) {  
            bestRight = min(bestRight, fences[right]);
        }

        if (bestRight < fences[mid] && bestLeft < fences[mid]) {
            int diff = fences[mid] - bestRight + fences[mid] - bestLeft;
            best = max(diff, best);
        }
    }

    cout << best;                                                                           
}