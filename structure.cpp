#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    // do while
    cout << "--test do while--" << endl;
    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You enterd: " << str << endl;
    } while (str != "goodbye");

    // for loop
    cout << "--test for loop--" << endl;
    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
    }
    cout << "liftoff!" << endl;
    
    // range based for loop
    cout << "--test for loop (range-based)--" << endl;
    str = {"Hello!"};
    for (char c: str) {
        cout << "[" << c << "]";
    }
    cout << endl;

    return 0;
}