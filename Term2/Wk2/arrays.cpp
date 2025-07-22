#include <bits/stdc++.h>
using namespace std;

int main() {
    // get length of array
    int n;
    cin >> n;

    // get number of questions
    int q;
    cin >> q;

    // create an array of integers, length n

    int my_array[n];

    // start reading into the array
    // repeat n times
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        my_array[i] = x;
    }

    // read in each question
    for (int i = 0; i < q; i++) {
        int page;
        cin >> page;
        cout << my_array[page - 1] << "\n";
    }
}