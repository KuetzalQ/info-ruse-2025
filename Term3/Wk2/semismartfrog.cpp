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
        for (int left = 0; left < mid; left++) {
            for (int right = mid+1; right < N; right++) {              
                if (fences[mid] > fences[right] and fences[mid] > fences[left]) {
                    int diff = fences[mid] - fences[right] + fences[mid] - fences[left];
                    best = max(best,diff);
                }
            }
        }
    }

    cout << best;                                                                           
}