#include <iostream>
#include <string.h>
#include "Customer.h"

Customer::Customer()
{
}
Customer::Customer(char name[], char address[], char uName[], char email[])
{
    strcpy(Cname, name);
    strcpy(Caddress, address);
    strcpy(userName, uName);
    strcpy(Cemail, email);
}
void Customer::bookingFlightTicket()
{
}
void Customer::makePayment()
{
}
void Customer::sreachFlight()
{
}

Customer::~Customer()
{
}