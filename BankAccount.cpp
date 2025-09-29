
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class acc {
public:
	string name;
	long long accn;
	double b;
	acc(string n, long long nb, double balance)
	{
		name = n;
		accn = nb;
		b = balance;
	}
	void show()
	{
		cout << "Account name: " << name << ", " << "account number: " << accn << ", " << "balance: " << b << endl;
	}
	void deposit(double x)
	{
		if (x > 0) {
			b += x;
			cout << "Deposit succesful!" << endl;
		}
	}
	void withdraw(double x)
	{
		if (b >= x && x > 0) {
			b -= x;
			cout << "Withdraw succesful!" << endl;
		}
		else
			cout << "Insuffiecient funds!"<<endl;
	}


};


int main()
{
	int c;
	vector<acc> accounts;
	while (true) {
		cout << "*****Welcome, what can we help you with?*****" << endl;
		cout << "1. Create account." << endl;
		cout << "2. Deposit money." << endl;
		cout << "3. Withdraw money." << endl;
		cout << "4. Display account details" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> c;
		if (c == 1)
		{
			string name;
			long long acn;
			double balance;

			cout << "Enter account name: ";
			cin >> name;
			cout << "Enter account number: ";
			cin >> acn;
			cout << "Enter initial balance:";
			cin >> balance;
			accounts.push_back(acc(name, acn, balance));
			cout << "Account created succsesfully!" << endl;;

		}
		else if (c == 2)
		{
			long long acn;
			double amount;
			cout << "Enter account number: ";
			cin >> acn;
			bool found = false;
			for (auto& x : accounts)
			{
				if (x.accn == acn)
				{
					found = true;
					cout << "Enter deposit amount: ";
					cin >> amount;
					x.deposit(amount);

					break;
				}

			}
			if (found == false)
			{
				cout << "Account not found!" << endl;
			}
		}
		else if (c == 3)
		{
			long long acn;
			double amount;
			cout << "Enter account number: ";
			cin >> acn;
			bool found = false;
			for (auto& x : accounts)
			{
				if (x.accn == acn)
				{
					found = true;
					cout << "Enter withdraw amount: ";
					cin >> amount;
					x.withdraw(amount);
					break;
				}

			}
			if (found == false)
			{
				cout << "Account not found!" << endl;
			}

		}
		else if (c == 4) {
			long long acn;
			cout << "Enter your account number: ";
			cin >> acn;
			bool found = false;
			for (auto& x : accounts)
			{
				if (x.accn == acn)
				{
					found = true;
					x.show();
					break;
				}
			}
			if (found == false)
			{
				cout << "Account not found!" << endl;
			}
		}
		else if (c == 5) {
			cout << "Thank you!";
			break;
		}
		else {
			cout << "Invalid choice";
		}

	}

}
