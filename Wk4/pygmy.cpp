#include <iostream>
using namespace std;

int main() {
    int N, a, b, c;
    cin >> N >> a >> b >> c;

    int f1 = a-1;
    int f2 = b-a-1;
    int f3 = c-b-1;
    int f4 = N-c;
    
    int best = max(f2,f3) + max(f1,f4);
    best = max(best, f1+f4);
    cout << best;
}