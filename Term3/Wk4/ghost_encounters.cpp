#include <iostream>
#include <map>
using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    map<int,int> ghosts;

    for (int i = 0; i < N; i++) {
        int x, t;
        cin >> x >> t;
        ghosts[x] += 1;
    }

    int best = -1;
    for (auto ghost : ghosts) {
        if (ghost.second > best) {
            best = ghost.second;
        }
    }
    cout << best;
}
