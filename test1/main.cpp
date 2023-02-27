#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array[8] = {4,5,6,7,8,2,3,4};
    std::cout << "The number is: " << count(array, 8) << std::endl;
    return 0;
}