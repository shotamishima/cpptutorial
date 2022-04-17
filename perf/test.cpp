#include <iostream>

void loop1() {
    int sum = 0;
    for (int i = 0; i < 10000; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;

}

void loop2() {
    int sum = 0;
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}

int main() {
    loop1();
    loop2();
    return 0;
}