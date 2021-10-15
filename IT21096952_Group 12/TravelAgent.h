#include <iostream>
#include <cstring>
using namespace std;

class TravelAgent : public Customer
{
private:
int AgentID;
string AgentName;
string AgencyName;
string AgentEmail;



public:
TravelAgent();
TravelAgent(int AgtID,string AgtName ,string AcyName );
void setAgentEmail(string email);
void displayTravelAgentDetails();
int getDiscount();
void displayDiscount();
~TravelAgent();




};