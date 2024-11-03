
#include <iostream>
#include "clsQueueLine.h"
using namespace std;

int main()
{
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);
	clsQueueLine VIPQueue("V0", 7);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "\nPay Bills Queue Info: \n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextClient();
	cout << "\n\nPay Bills Queue After Serving One Client:";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintAllTickets();

	cout << "\nSubscriptions Queue Info:\n";

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeNextClient();
	cout << "\n\nSubscriptions Queue After Serving One Client:";
	SubscriptionsQueue.PrintInfo();

	system("pause>0");
	return 0;
}