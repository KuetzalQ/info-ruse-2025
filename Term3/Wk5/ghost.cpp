#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,int> times;

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int loc, time;
        cin >> loc >> time;
         // vv replace with correct formula 
        int time_needed = 0;
        times[time_needed] += 1;
    }

    int best = 0;
    for (auto time : times) {
        best = max(best, time.second);
    }
    cout << best;
}
