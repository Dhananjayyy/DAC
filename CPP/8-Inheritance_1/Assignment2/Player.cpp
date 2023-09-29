#include <iostream>
#include <string.h>
using namespace std;


class Player
{
    int pid;
    char pname[20];
    public:
    Player();
    Player(int, char []);
    void Display();
};

Player::Player()
{
    pid=0;
    strcpy(pname,"NA");
}

Player::Player(int pid, char n[20])
{
    this->pid = pid;
    strcpy(this->pname,n);
}

void Player::Display()
{
    cout << "ID: " << pid << " Name: " << pname << endl;
}

// int main()
// {
//     Player p1;
//     p1.Display();
//     char n[20] = "Dhananjay";
//     Player p2(2,n);
//     p2.Display();
// }