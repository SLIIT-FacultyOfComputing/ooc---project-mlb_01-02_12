#include <iostream>
#include <cstring>

using namespace std;


class UnregisteredCustomer
{
private:
int tepId;
public:
    UnregisteredCustomer();
     UnregisteredCustomer(int id);
void creatAnAccount();
int getFlightDetails();
virtual void displayFlightDetails();
int getFlightFacilitie();
virtual void displayFlightFacilitie();
~UnregisteredCustomer();
};