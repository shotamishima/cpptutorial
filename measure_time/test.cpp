#include "ProcessingTime.hpp"

int main() {
    {
        ProcessingTime pt("test");

        int sum = 0;
        for (int i = 0; i < 1000000; i++) {
            sum += i;
        }
    }
}