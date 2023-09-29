#include <iostream>
#include "Player.cpp"
using namespace std;

class Batsman:public Player
{
    int innings, not_outs, runs;
    public:
    Batsman();
    Batsman(int, char[], int, int, int);
    void Display();
    int calcAvg();
};

Batsman::Batsman()
{
    runs,not_outs,innings=0;
}

Batsman::Batsman(int id, char pname[],int runs, int not_outs, int innings):Player(id,pname)
{
    this->innings = innings;
    this->runs= runs;
    this->not_outs = not_outs;
}

void Batsman::Display()
{
    Player::Display();
    cout << "Innings: " << innings  << " Runs: " << runs << " Not-outs: " << not_outs << endl;
}

int Batsman::calcAvg()
{
    int batavg;
    batavg = runs / not_outs;
    return batavg;
}

int main()
{
    Batsman b1;
    b1.Display();

    char n[20] = "Dhananjay";
    Batsman b2(3, n, 200, 4, 25);
    b2.Display();
    cout << "Batting average is: " << b2.calcAvg() << endl;
}