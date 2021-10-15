#include <iostream>
#include "Ticket.h"
using namespace std;
#define SIZE 10;
class Customer
{

protected:
    char Cname[30];
    char Caddress[50];
    char userName[30];
    char Cemail[30];
    Ticket * ticket[SIZE];
    


public:
    Customer();
    Customer(char name[], char address[], char uName[], char email[]);
    void bookingFlightTicket();
    void makePayment();
    void sreachFlight();
    ~Customer();
};