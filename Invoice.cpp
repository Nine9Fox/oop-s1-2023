#include"Invoice.h"
Invoice::Invoice(string invoicedId)
{
    this->costDollars=0;
    this->invoicedId=invoicedId;
};

Invoice::~Invoice()
{

};

void Invoice::addServiceCost(int costDollars)
{
    if(costDollars>=0)
    {
        this->costDollars=this->costDollars+costDollars;        
    }

};
    
int Invoice::getDollarsOwed()
{
    return costDollars;
};
    
string Invoice::getInvoiceId()
{
    return invoicedId;
};