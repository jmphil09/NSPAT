#ifndef TEAMOBJECT_H_
#define TEAMOBJECT_H_

#include <iostream>
#include <string>

using namespace std;

class Team
{
public:
    //put constructors and destructor here

    //default constructor
    Team();

    //overload constructor
    Team(int, int);
        //This constructor can take an input of the teamNumber and use it to calculate all other information

    //overload constructor
    Team(int, int, int, bool);
        //This constructor can take an input of the teamNumber, rank, opponentNumber, and homeTeam and use it to calculate all other information.

    //destructor
    ~Team();

    //ACCESSOR FUNCTIONS

    //This function will get the team number of the team
    int getTeamNumber() const;

    //This function will get the rank of the team
    int getRank() const;

    //This function will find the opponent team number of the team
    int getOpponentNumber() const;

    //This function will return whether or not the team is playing at home
    bool isHome() const;

private:
    //MEMBER VARIABLES
    int teamNumber;
    int rank;
    int opponentNumber;
    bool homeTeam;

};

#endif /* TEAMOBJECT_H_ */
