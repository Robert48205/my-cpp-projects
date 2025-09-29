#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string select(int x)
{
    string s;
    if (x >= 0 && x < 4) {
        s = "Scissor";
    }
    else if (x >= 4 && x < 7) {
        s = "Paper";
    }
    else if (x >= 7 && x <= 9) {
        s = "Rock";
    }
    return s;
}

int main()
{
    
    int n,x;
    string var;
    while (true) {
        srand(time(NULL));
        x = rand() % 10;
        cout << "Make your choice:" << endl;
        cout << "1.Scissors." << endl;
        cout << "2.Paper" << endl;
        cout << "3.Rock" << endl;
        cout << "4.Exit" << endl;
        cin >> n;
        if (n == 1)
        {
            var = select(x);
            if (var == "Rock")
                cout << "The computer chose " << var << ", you lost!"<<endl;
            else if (var == "Paper")
                cout << "The computer chose " << var << ", you won!" << endl;
            else if (var == "Scissor")
                cout << "The computer chose " << var << ", tie" << endl;
            
        }
        else if (n == 2)
        {
            var = select(x);
            if (var == "Rock")
                cout << "The computer chose "<<var<<", you won!" << endl;
            else if (var == "Paper")
                cout << "The computer chose " << var << ", tie!" << endl;
            else if (var == "Scissor")
                cout << "The computer chose " << var << ", you lost!" << endl;
        }
        else if (n == 3)
        {
            var = select(x);
            if (var == "Rock")
                cout << "The computer chose " << var << ", tie!" << endl;
            else if (var == "Paper")
                cout << "The computer chose " << var << ", you lost!" << endl;
            else if (var == "Scissor")
                cout << "The computer chose " << var << ", you won" << endl;
        }
        else if(n==4) {
            cout << "Thank you for playing!!!";
            break;
        }
        else {
            cout << "ERROR! Please choose a number from 1 to 4!"<<endl;

        }
    }
}
