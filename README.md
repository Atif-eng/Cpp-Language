# C++

C++ is a high-performance, general-purpose programming language.  
It is widely used for game development, system software, competitive programming, and applications that need speed and memory control.

## Basic Syntax

A minimal C++ program to print "Hello World":

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}

## Variables
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int sum = a + b;
    
    cout << "Sum of: " << a << " and " << b << " is " << sum << endl;
    return 0;
}

## loops

```cpp
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }
    return 0;
}

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 5) {
        cout << "Count: " << i << endl;
        i++;
    }
    return 0;
}

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Count: " << i << endl;
        i++;
    } while(i <= 5);
    
    return 0;
}


# compile and run

g++ main.cpp -o main
./main
