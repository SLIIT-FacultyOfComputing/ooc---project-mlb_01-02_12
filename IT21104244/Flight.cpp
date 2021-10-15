#include "Flight.h"
#include <cstring>

Flight::Flight()
{
  flightNo=0;
  strcpy(origin,"");
  strcpy(destination,"");
  depTime=0;
}

Flight::Flight(int no, const char porigin[], const char pDestination[], int pDepTime){
  flightNo=no;
  strcpy(origin,porigin);
  strcpy(destination,pDestination);
  depTime=pDepTime;
}

void Flight::DisplayFlightDetails()
{

}

Flight::~Flight()
{
  
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