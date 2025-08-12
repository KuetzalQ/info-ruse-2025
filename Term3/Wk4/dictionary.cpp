#include <iostream>
#include <map>
using namespace std;

int main() {

    int d, w;
    cin >> d >> w;

    map<int,int> dictionary;

    for (int i = 0; i < d; i++) {
        int x, y;
        cin >> x >> y;
        dictionary[x] = y;
    }

    for (int i = 0; i < w; i++) {
        int q;
        cin >> q;
        if (dictionary.count(q) == 0) {
            cout << "C?\n";
        } else {
            cout << dictionary[q] << "\n";
        }
    }


}