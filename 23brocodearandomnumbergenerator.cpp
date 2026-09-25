#include <iostream>

int main() {

    srand(time(NULL));
// random number between 0 and 20
    int num = (rand() % 20) + 1;

    std::cout << num;

    return 0;
}
    