# C++ Cheatsheet 

## Basic scaffold
``` c++
#include <iostream>
using namespace std;

int main() {
    // code here
    cout << "Hello World";
}
```

`#include <iostream>` tells us what extra c++ features we want to use, in this case iostream for `cout`. <br>
`using namespace std;` tells the program that the default namespace is std, so we don't have to write `std::cout`. <br>
`int main()` is the main function, what the computer runs <br>

## Include declarations
`#include <iostream>` is for cin and cout

`#include <algorithm>` is for sorting

`#include <map>` is for dictionaries/maps

`#include <bits/stdc++.h>` includes everything, but may not always work depending on your laptop

## Variables
C++ is a typed language, meaning we have to tell it what type of data each variable holds.

``` c++
// integer variables

// empty variable
int x;

// initialised to equal 3
int y = 3;

// updating value of variable
x = 5;

// using variables in calculations
x = x + y;

// next two lines are equivalent:
x = x + 5;
x += 5;

// applicable for -, *, /
x -= 3;
x *= 2;
x /= 2;

x ++; // equal to x = x + 1;
```

Other types of variables:
``` c++

char c = 'a';  // single character
float f = 3.14; // decimal number
c = ' ';
f /= 2;
```

## Input and Output
An easy way we can use input is using `cin` and `cout`.

Reading in integers:
``` c++
int N;
cin >> N;

int a, b, c;
cin >> a >> b >> c;
```

Reading in characters:
``` c++
char c;
cin >> c;

char a, b, c;
cin >> a >> b >> c;
```

Printing out things:
``` c++
char c = 'a';
cout << c;
cout << "Character: " << c;

// new line:
int x = 5;
int y = 3;
cout << x << "\n" << y;

// OR

cout << x;
cout << "\n";
cout << y;
```

## If Statements
Allows our code to make decisions
``` c++
if (condition) {
    // code
}
```

Conditions are usually `<`, `>`, `<=`, `>=`, `==` or `!=`
```
3 < 5
3 > 5
a == b
a != 0
a >= 0
```

We can also add `else` to our if statements:
``` c++
if (condition1) {
    // do first thing
} else if (condition2) {
    // do second thing, only possible if condition1 is false and condition2 is true
} else {
    // do third thing, only if both condition1 and condition2 is false
}
```
You can have as many `else if`s as you want, or none. You can have at most one `else` at the very end.
``` c++
if (a) {
    //...
} else {
    //...
}

if (a) {
    //...
} else if (b) {
    //...
} else if (c) {
    //...
}
```

## While Loops
While loops let us repeat code easily.

``` c++
while (condition) {
    // do something
}
```
Everything inside the loop will run until the condition becomes false. Be careful to avoid infinite loops!

### Examples:

Counting:
``` c++
int counter = 0;
while (counter < 10) {
    cout << counter << '\n';
    counter += 1;
}
```
Finding sum of 5 numbers:
``` c++
int total = 0;
int counter = 0;
while (counter < 5) {
    int x;
    cin >> x;
    total = total + x;
    counter += 1;
}
cout << total;
```

## For Loops
Similar to while loop, for loops let us repeat code.

``` c++
for (initial state; run condition; loop step) {
    // do something
}

for (int i = 0; i < 5; i++) {
    // do something
}
```

## Arrays 
Arrays store multiple values which we can access using an index. They are similar to variables, except we have to give a `position` or `index` everytime we want to retrieve something.

Reading into an array:
```c++

int array[5];
for (int i = 0; i < 5; i++) {
    cin >> array[i];
}
```

If we want the array to start empty, i.e. all elements are 0s, then we should declare the array _outside_ of the main loop:
```c++

int array[5];

int main() {
    
    // do stuff with array in here
    int test[5];
    cout << test[0];

}

```

### Array frequency count
```c++
int counter[100000];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        counter[x] += 1;
    }
}
```

This counts the frequency of N numbers. Each number must be <= 99999. The counter array will hold how many times each number appeared, counter[x] = freq(x). For example, if the input is
```
5
3 4 7 3 3
```
Then `counter[3] = 3`, `counter[4] = 1`, `counter[7] = 1` and `counter[1] = 0`.

### Sorting
This sorts all the numbers in the array. `arr+5` is where you want to sort up to. If you only wanted to sort the first 3 numbers, you could use `arr+3` instead.

```c++
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {7,2,4,6,1};
    sort(arr, arr+5);
}
```

### Dictionary/maps

Declaring and using a dictionary:
```cpp
#include <map>
using namespace std;

int main() {
    map<int,int> dict;

    // set a value in the map
    dict[3] = 5;

    // increase a value in the map
    dict[3] += 1;

    // check if a value exists in the map
    if (dict.contains(4)) {
        cout << "found 4" << "\n";
    } else {
     cout << "didn't find 4" << "\n";
    }

    // store int,char instead
    map<int,char> another_dict;
    another_dict[2] = 'a';

    // store char, int instead
    map<char,int> last_dict;
    last_dict['b'] = 3;
}
```

The default value in a cpp dictionary is 0, i.e. if you try find a key that doesn't exist, the value is 0.