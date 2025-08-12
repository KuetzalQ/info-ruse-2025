#include <iostream>
#include <algorithm>
using namespace std;

int N, k;

int main() {

    // read in all input
    cin >> N >> k;

    int foods[N];
    for (int i = 0; i < N; i++) {
        cin >> foods[i];
    }

    // sort the foods array
    // fill this line in

    // loop through foods array

    int redarrow = 0;
    int hippos = 1; // ☠ whoops this should be 1 XD
    
    for (int greenarrow = 1; greenarrow < N; greenarrow++) {
        // fill this for loop in    
        
        // if green arrow dish is far enough away from red arrow dish
            // add 1 to hippos
            // move red arrow up
    }
    cout << hippos;
}