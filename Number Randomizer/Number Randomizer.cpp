#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    std::cout << "Your random number between 1 and 100 is: " << randomNumber << std::endl;

    return 0;
}