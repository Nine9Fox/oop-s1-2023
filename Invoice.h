#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
using namespace std;
class Invoice
{
private:
    string invoicedId;
    int costDollars;
public:
    Invoice(string invoicedId);
    ~Invoice();

    void addServiceCost(int costDollars);
    int getDollarsOwed();
    string getInvoiceId();
};

#endif
