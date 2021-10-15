#include "Payment.h"
Payment::Payment()
  { 
    int paymentID;
    int paymentDate;
    string paymentMethod;  
}


Payment::Payment(int id, int pDate, string pMethod) {
      paymentID = id; 
      paymentDate=pDate;  
      paymentMethod=pMethod; 
 
}

void Payment::validatePayment() {
}
Payment::~Payment()
{
  
}