#include <iostream>

using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;  // This will inline the square function
    return 0;
}

