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

    int curBestLeft = fences[0];
    int bestLeft[N];
    bestLeft[0] = curBestLeft;    
    for (int i = 1; i < N; i++) {
        curBestLeft = min(curBestLeft,fences[i]);
        bestLeft[i] = curBestLeft;
    }

    int curBestRight = fences[N-1];
    int bestRight[N];
    bestLeft[N-1] = curBestRight;    
    for (int i = 1; i < N; i++) {
        curBestRight = min(curBestRight,fences[N-1-i]);
        bestRight[i] = curBestRight;
    }

    int best = 0;
    for (int i = 1; i < N - 1; i++) {
        if (fences[i] > bestLeft[i-1] && fences[i] > bestRight[i+1]) {
            int diff = fences[i] - bestLeft[i-1] + fences[i] - bestRight[i+1];
            best = max(best,diff);
        }
    }                             
    cout << best;
}