#include <iostream>
using namespace std;

class Cricket
{
public:
    int player_code;
    char player_name[10];
    int no_of_innings;
    int total_runs;

public:
    void accept()
    {
        cout << "\n Enter the Player code : ";
        cin >> player_code;
        cout << "Enter the player name : ";
        cin >> player_name;
        cout << "Enter the player innings : ";
        cin >> no_of_innings;
        cout << "Enter the players total runs :";
        cin >> total_runs;
    }

    void display()
    {
        cout << "Player code is = " << player_code << endl;
        cout << "Player name is = " << player_name << endl;
        cout << "Player inning rate is = " << no_of_innings << endl;
        cout << "Player total runs is = " << total_runs << endl;
    }

    void search()
    {
        this->display();
    }
};

int main()
{
    int n, search_c;
    cout << "Enter number of players for detials : ";
    cin >> n;

    Cricket parr[n];

    for (int i = 0; i < n; i++)
    {
        parr[i].accept();
    }

    cout << "\n\n The Player details are displayed below...\n\n";

    for (int i = 0; i < n; i++)
    {
        parr[i].display();
        cout << endl;
    }

    cout << "\n Enter the Player code to display its details :";
    cin >> search_c;

    for (int i = 0; i < n; i++)
    {
        if (parr[i].player_code == search_c)
        {
            parr[i].search();
        }
    }

    return 0;
}