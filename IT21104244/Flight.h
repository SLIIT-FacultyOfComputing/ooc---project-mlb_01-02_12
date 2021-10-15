#pragma once

class Flight {
  private:
    int flightNo;
    char origin[50];
    char destination[50];
    int depTime;
  public:
    Flight(int no, const char pOrigin[], const char pDestination[], int pDepTime);
    void DisplayFlightDetails();
};
