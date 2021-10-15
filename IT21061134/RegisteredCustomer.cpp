#include <iostream>
#include "RegisteredCustomer.h"

RegisteredCustomer ::RegisteredCustomer()
{
    Cid = 0;
}

RegisteredCustomer ::RegisteredCustomer(int cid, char name[], char address[], char uName[], char email[]) : Customer(name, address, uName, email)
{
    Cid = cid;
}

void RegisteredCustomer ::SendFeedback()
{
}

RegisteredCustomer ::~RegisteredCustomer()
{
}
