// operating with variables

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// not check type in compile 
#define PI 3.14159

int main() {
    // declaring variables
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;


    // terminate the program
    return 0;
}