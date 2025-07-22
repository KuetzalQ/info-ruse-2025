#include <iostream>
using namespace std;

int main() {
    int N, h1, h2, h3; // read in all the numbers
    cin >> N >> h1 >> h2 >> h3;

    int s1 = h1-1; // calculate each section
    int s2 = h2-h1-1;
    int s3 = h3-h2-1;
    int s4 = N-h3;
    
    // find best combination between 1 edge and 1 middle
    int best = max(s2,s3) + max(s1,s4);

    // find best combination with two edges
    best = max(best, s1+s4);

    // print output
    cout << best;
}

// if (best > s1+s4) {
//         best = s1+s4;
//     }

//     max(1,5) = 5;