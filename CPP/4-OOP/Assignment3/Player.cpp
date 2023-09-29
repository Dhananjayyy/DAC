#include <iostream>
#include <cstring>
using namespace std;

class Player
{
    int pID, pRun, pWickets, pInnings;
    char pName[100];
public:
    void dispPlayer();
    void setPlayer(int, int, int, int, char*);
    int getRuns();
    int getWickets();
    char* getName();
};

Player* getMaxRunPlayer(Player *players, int count);
Player* getMaxWicketPlayer(Player *players, int count);

int main()
{
    int numPlayers = 2;
    Player *p = new Player[numPlayers];

    for (int i = 0; i < numPlayers; i++)
    {
        cout << "Enter information for Player " << i + 1 << endl;
        int id, runs, wickets, innings;
        char name[100];
        cout << "Enter ID, Runs, Wickets, Innings, Name" << endl;
        cin >> id >> runs >> wickets >> innings >> name;
        p[i].setPlayer(id, runs, wickets, innings, name);
    }

    cout << endl;
    for (int i = 0; i < numPlayers; i++)
    {
        p[i].dispPlayer();
    }

    Player* maxRunPlayer = getMaxRunPlayer(p, numPlayers);
    Player* maxWicketPlayer = getMaxWicketPlayer(p, numPlayers);

    cout << "Max run scorer: " << maxRunPlayer->getName() << endl;
    cout << "Max wicket scorer: " << maxWicketPlayer->getName() << endl;

    delete[] p;
    return 0;
}

Player* getMaxRunPlayer(Player *players, int count)
{
    int maxRuns = 0;
    Player* maxRunPlayer;
    for (int i = 0; i < count; i++)
    {
        int runs = players[i].getRuns();
        if (runs > maxRuns)
        {
            maxRunPlayer = &players[i];
            maxRuns = runs;
        }
    }
    return maxRunPlayer;
}

Player* getMaxWicketPlayer(Player *players, int count)
{
    int maxWickets = 0;
    Player* maxWicketPlayer;
    for (int i = 0; i < count; i++)
    {
        int wickets = players[i].getWickets();
        if (wickets > maxWickets)
        {
            maxWicketPlayer = &players[i];
            maxWickets = wickets;
        }
    }
    return maxWicketPlayer;
}

void Player::dispPlayer()
{
    cout << "ID: " << pID << ", Runs: " << pRun << ", Wickets: " << pWickets << ", Innings: " << pInnings << ", Name: " << pName << endl;
}

void Player::setPlayer(int id, int runs, int wickets, int innings, char *name)
{
    pID = id;
    pRun = runs;
    pWickets = wickets;
    pInnings = innings;
    strcpy(pName, name);
}

int Player::getRuns()
{
    return pRun;
}

int Player::getWickets()
{
    return pWickets;
}

char* Player::getName()
{
    return pName;
}
