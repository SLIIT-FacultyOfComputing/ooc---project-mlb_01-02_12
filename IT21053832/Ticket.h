#include <iostream>
#include <cstring>
using namespace std;


class Ticket
{
private:
      int ticketNo;
      int ticket_date;
      string s_class;
      int seatNo;
public:
Ticket();
Ticket(int tNo, int t_date, string seat_c,int sNo);
      void Displaydetails();
      

      ~Ticket() ;
};
