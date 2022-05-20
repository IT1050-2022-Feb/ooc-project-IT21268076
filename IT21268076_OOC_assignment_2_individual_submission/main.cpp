#include <iostream>
#include <cstring>
#include"Contact.h"
#include "Receipt.h"
#include "Payment.h"

using namespace std;

int main()
{
    Payment* pay1 = new Payment();
    Payment* pay2 = new Payment();

    Receipt* rep1 = new Receipt();
    Receipt* rep2 = new Receipt();

    Contact* c1 = new Contact();
    Contact* c2 = new Contact();

    delete pay1;
    delete pay2;

    delete rep1;
    delete rep2;

    delete c1;
    delete c2;

}