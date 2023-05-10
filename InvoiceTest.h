// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(0);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10000);
            if (invoice.getDollarsOwed() != 10000) {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }

    }

    // Add other test functions here
    void testGetDollarsOwed()
    {
        {
            Invoice invoice("AB#D");
            invoice.addServiceCost(2);
            if (invoice.getDollarsOwed() != 2) {
                std::cout << "Test 5 failed!" << std::endl;
            }
        }
    }

    void testGetInvoiceId()
    {
        {
            Invoice invoice("AB#D");
            if (invoice.getInvoiceId() != "AB#D") {
                std::cout << "Test 6 failed!" << std::endl;
            }
        }
    }
};
