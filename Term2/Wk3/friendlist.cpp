#include <iostream>
using namespace std;

int main() {

    // 1. read in the number of friendships
    int friendships;
    cin >> friendships;

    // 2. create your array to keep track of occurences
    int occurences[1001] = {0};

    // 3. loop through all friendships
    for (int i = 0; i < friendships; i++) {
        int personA, personB;
        cin >> personA >> personB;
        // 3.i) add occurence to the array

        occurences[personA] += 1;
        // ^ that is the same as doing:
        // occurences[personA] = occurences[personA] + 1;
        occurences[personB] += 1;
    }

    // 4. loop through all the friendships to find max/most popular people

    // what is this code doing? vv
    int most = -1;
    for (int i = 0; i < 1001; i++) {
        if (occurences[i] > most) {
            most = occurences[i];
        }
    }

    for (int i = 0; i < 1001; i++) {
        if (occurences[i] == most) {
            cout << i << "\n";
        }
    }
    
}