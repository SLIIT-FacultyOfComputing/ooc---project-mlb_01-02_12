#include <iostream>
#include "Customer.h"
using namespace std;

class RegisteredCustomer : public Customer
{

private:
    int Cid;

public:
    RegisteredCustomer();
    RegisteredCustomer(int cid, char name[], char address[], char uName[], char email[]);
    void SendFeedback();
    void ChangeDates();
    ~RegisteredCustomer();
};