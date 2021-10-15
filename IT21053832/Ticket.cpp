#include "Ticket.h"

Ticket::Ticket()
  { 
    int ticketNo=0;
      int ticket_date=0;
      string s_class="";
      int seatNo=0;
}


Ticket::Ticket(int tNo, int t_date, string seat_c,int sNo) {
            ticketNo = tNo;
            ticket_date =  t_date;
            s_class = seat_c;
            seatNo = sNo;
}

void Ticket::Displaydetails(){
}
Ticket::~Ticket()
{
  
}