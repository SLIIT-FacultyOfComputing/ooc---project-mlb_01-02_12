#include <iostream>
#include <cstring>
using namespace std;

class Payment
{
private:
int paymentID;
int paymentDate;
string paymentMethod;

public:
Payment();
Payment(int id, int pDate, string pMethod);
void validatePayment();

~Payment();
};