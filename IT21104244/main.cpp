#include <iostream>
#include "Flight.h"
#include <cstring>

using namespace std;

int main() {

  Flight f1(3001, "Colombo", "Tokyo", 1800);
  Flight f2(3002, "New York", "Dubai", 1300);

  f1.DisplayFlightDetails();

  cout << "\n";

  f2.DisplayFlightDetails();
    
  return 0;
  }


/*
//Composition - Implementation - Between Flight and Ticket

#include <string>
#include <iostream>

using namespace std;

class Flight {
  private:
    int flightNo;
  public:
    Flight(){};
    Flight(int no) {
       flightNo = no;
    };
    void DisplayFlightDetails() {
       cout << "Flight No " << flightNo << endl;
    };
    ~Flight() {
      cout << "Deleting Flight " << flightNo << endl;
    }
};

class Ticket {
   private:
     Flight *flight; 
   public:
     Ticket() {
        flight = new Flight(1000);
     }
     Ticket(int fNo) {
        flight = new Flight(fNo);
     }
     void DisplayFlights() {
         flight->DisplayFlightDetails();
     }
     ~Ticket() {
        cout << "Tickets cancelling " << endl;
           delete flight;
        cout << "Everything is deleted" << endl;
     }
};

int main()
{
      Ticket *myTicket;
      myTicket = new Ticket(3001);
      myTicket->DisplayFlights();
      delete myTicket;	
	return 0;
}
*/