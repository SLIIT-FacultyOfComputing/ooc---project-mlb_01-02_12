#include <iostream>
using namespace std;

class Flight {
  private:
  int flightNo;
  char origin[50];
  char destination[50];
  int depTime;
  
  public:
  Flight();
  Flight(int no, const char porigin[], const char pDestination[], int pDepTime);
  void DisplayFlightDetails();
  ~Flight();
};