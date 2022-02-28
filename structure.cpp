#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You enterd: " << str << endl;
    } while (str != "goodbye");

    return 0;
}