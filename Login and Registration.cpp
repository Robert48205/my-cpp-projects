
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
	int n;
	string un, pass;
	string un_f, pass_f;
	while (true)
	{
		cout << "Welcome back, how can we help you?" << endl;
		cout << "1.Log in" << endl;
		cout << "2.Create account" << endl;
		cout << "3.Exit" << endl;
		cin >> n;
		if (n == 1)
		{
			ifstream f("lnrf.txt");
			cout << "Enter your username:" << endl;
			cin >> un;
			cout << "Enter your password:" << endl;
			cin >> pass;
			bool found = false;
			while (f >> un_f >> pass_f)
			{
				if (un == un_f && pass == pass_f)
				{
					cout << "Welcome to your account." << endl;
					found = true;
					break;
				}
			}
			if (found == false)
			{
				cout << "We couldn't find your account, username or password are incorrect." << endl;
			}
			else {
				break;
			}

		}
		else if (n == 2)
		{

			cout << "Please create your username: " << endl;
			cin >> un;
			ifstream f_verify("lnrf.txt");
			if (f_verify.is_open()) {
				bool taken = false;
				while (f_verify >> un_f>>pass_f)
				{
					if (un == un_f) {
						cout << "Username taken. Try with another username!" << endl;
						taken = true;
					}
				}
				if (taken==true) {
					continue;
				}
			}
			cout << "Please create your password: " << endl;
			cin >> pass;
			ofstream fout("lnrf.txt", ios::app);
			if (fout.is_open())
			{
				fout << un << " " << pass << endl;
				cout << "Your account was created succesfully!" << endl;

			}

		}
		else if (n == 3)
		{
			cout << "Thank you for your time!" << endl;
			break;
		}
		else {
			cout << "Invalid option!" << endl;
		}

	}
	return 0;
}
