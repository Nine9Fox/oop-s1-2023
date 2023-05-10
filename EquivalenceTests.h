// EquivalenceTests.h
#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H
#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        void testN_PositiveIntegers();
        void testP_NositiveIntegers();
        void testL_PositiveIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    // Add other test functions here
    void testN_PositiveIntegers() {
        Addition addition;
        if (addition.add(-5, 10) != 5) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZeroIntegers() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testL_PositiveIntegers() {
        Addition addition;
        if (addition.add(525, 100) != 625) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }
};
#endif