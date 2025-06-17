#include <iostream>
using namespace std;

int forest[100000];
int main() {

    // read in number of parks
    int N;
    cin >> N;

    // read in order of resort built
    int when_built[N];
    for (int i = 0; i < N; i++) {
        cin >> when_built[i];
    }

    // 'simulate' the resorts being built
    // time step: goes from 1 to N
    int parks = 1;
    int best = 1;
    for (int t = 1; t <= N; t++) {
        // we want to find which park is being built
        // how? we can loop through the when_built array to find which park is built at time t
        int spot;
        for (int i = 0; i < N; i++) {
            if (when_built[i] == t) {
                spot = i;
            }
        }
        // we switch the forest[spot] to 1, to show a resort is built
        forest[spot] = 1;
        // how do we know what happens to the parks when we build a new resort?

        if (spot == 0) {
            // left edge
            if (forest[spot + 1] == 1) {
                parks -= 1;
            } 
        } else if (spot == N - 1) {
            // right edge
            if (forest[spot - 1] == 1) {
                parks -= 1;
            }
        } else {
            // somewhere in the middle
            if (forest[spot - 1] == 1 && forest[spot + 1] == 1) {
                parks -= 1;
            } else if (forest[spot - 1] == 0 && forest[spot + 1] == 0) {
                parks += 1;
            }
        }

        best = max(best, parks);
    }

    cout << best;
}