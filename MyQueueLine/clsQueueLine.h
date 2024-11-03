#pragma once
#include <iostream>
#include "queue"
#include "stack"
#include "clsDate.h"
using namespace std;

class clsQueueLine
{
private:

	short _TotalTickets = 0;
	short _AverageServeTime = 0;
	string _Perfix = "";

	class clsTicket
	{
	private:

		short _Number = 0;
		string _Perfix;
		string _TicketTime;
		short _WaitingClients = 0;
		short _AverageServeTime = 0;
		short _ExpectedServeTime = 0;

	public:

		clsTicket(string Perfix, short Number, short WaitingClients, short AverageServeTime)
		{
			_Number = Number;
			_Perfix = Perfix;
			_TicketTime = clsDate::GetSystemDateTimeString();
			_WaitingClients = WaitingClients;
			_AverageServeTime = AverageServeTime;
		}

		string Perfix()
		{
			return _Perfix;
		}

		short Number()
		{
			return _Number;
		}

		string FullNumber()
		{
			return _Perfix + to_string(_Number);
		}

		string TicketTime()
		{
			return _TicketTime;
		}

		short WaitingClients()
		{
			return _WaitingClients;
		}

		short ExpectedServeTime()
		{
			return _AverageServeTime * _WaitingClients;
		}

		void Print()
		{
			cout << "\n\t\t\t______________________________\n";
			cout << "\n\t\t\t\t      " << FullNumber();
			cout << "\n\n\t\t\t      " << _TicketTime;
			cout << "\n\t\t\t      Waiting Clients = " << _WaitingClients;
			cout << "\n\t\t\t        Serve time In";
			cout << "\n\t\t\t         " << ExpectedServeTime() << " Minutes.";
			cout << "\n\t\t\t______________________________\n";
		}

	};

public:

	queue <clsTicket> QueueLine;

	clsQueueLine(string Perfix, short AverageServeTime)
	{
		_TotalTickets = 0;
		_Perfix = Perfix;
		_AverageServeTime = AverageServeTime;
	}

	void IssueTicket()
	{
		_TotalTickets++;
		clsTicket Ticket(_Perfix, _TotalTickets, WaitingClients(), _AverageServeTime);
		QueueLine.push(Ticket);
	}

	int WaitingClients()
	{
		return QueueLine.size();
	}

	string WhoIsNext()
	{
		if (QueueLine.empty())
			return "No Clients Left.";
		else
			return QueueLine.front().FullNumber();
	}

	bool ServeNextClient()
	{
		if (QueueLine.empty())
			return false;

		QueueLine.pop();
		return true;
	}

	short ServedClients()
	{
		return _TotalTickets - WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\n\t\t\t______________________________\n";
		cout << "\n\t\t\t\t  Queue Info";
		cout << "\n\t\t\t______________________________\n";
		cout << "\n\t\t\t   Perfix    = " << _Perfix;
		cout << "\n\t\t\t   Total Tickets   = " << _TotalTickets;
		cout << "\n\t\t\t   Served Clients  = " << ServedClients();
		cout << "\n\t\t\t   Wating Clients  = " << WaitingClients();
		cout << "\n\t\t\t______________________________\n";
	}

	void PrintTicketsLineRTL()
	{
		if (QueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;

		while (!TempQueueLine.empty())
		{
			clsTicket Ticket = TempQueueLine.front();

			cout << " " << Ticket.FullNumber() << " <-- ";

			TempQueueLine.pop();
		}

		cout << "\n";

	}

	void PrintTicketsLineLTR()
	{
		if (QueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;
		stack <clsTicket> TempStackLine;

		while (!TempQueueLine.empty())
		{
			TempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}

		while (!TempStackLine.empty())
		{
			clsTicket Ticket = TempStackLine.top();

			cout << " " << Ticket.FullNumber() << " --> ";

			TempStackLine.pop();
		}

		cout << "\n";

	}

	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t\t--- Tickets ---";

		if (QueueLine.empty())
			cout << "\n\n\t\t\t\t---No Tickets---\n";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;

		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}
	}

};