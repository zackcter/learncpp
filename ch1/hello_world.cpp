#include <iostream>

using namespace std;

// Needed for windows systems.
// Kept in just so I can remind myself how to create a function.
inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
    cout << "Hello, world!\n";
    keep_window_open();
    return 0;
}