#include "teamObject.h"
//#include "team_cvals.cpp"
#include "initialize_teams.cpp"
//#include "2012Data.cpp"
//#include "2013Data.cpp"
//#include "2014Data.cpp"

//Put definitions of constructors and destructor here
Team::Team()
{
    rank=0;
    teamNumber=0;
    opponentNumber=0;
    homeTeam = false;
}

Team::Team(int teamNum, int weekNum)
{
    for(int i=0; i<19; i++){
        rankarray[0][i] = RCardinals[i];
        rankarray[1][i] = RFalcons[i];
        rankarray[2][i] = RRavens[i];
        rankarray[3][i] = RBills[i];
        rankarray[4][i] = RPanthers[i];
        rankarray[5][i] = RBears[i];
        rankarray[6][i] = RBengals[i];
        rankarray[7][i] = RBrowns[i];
        rankarray[8][i] = RCowboys[i];
        rankarray[9][i] = RBroncos[i];
        rankarray[10][i] = RLions[i];
        rankarray[11][i] = RPackers[i];
        rankarray[12][i] = RTexans[i];
        rankarray[13][i] = RColts[i];
        rankarray[14][i] = RJaguars[i];
        rankarray[15][i] = RChiefs[i];
        rankarray[16][i] = RDolphins[i];
        rankarray[17][i] = RVikings[i];
        rankarray[18][i] = RPatriots[i];
        rankarray[19][i] = RSaints[i];
        rankarray[20][i] = RGiants[i];
        rankarray[21][i] = RJets[i];
        rankarray[22][i] = RRaiders[i];
        rankarray[23][i] = REagles[i];
        rankarray[24][i] = RSteelers[i];
        rankarray[25][i] = RRams[i];
        rankarray[26][i] = RChargers[i];
        rankarray[27][i] = RFortyNiners[i];
        rankarray[28][i] = RSeahawks[i];
        rankarray[29][i] = RBuccaneers[i];
        rankarray[30][i] = RTitans[i];
        rankarray[31][i] = RRedskins[i];
    }

    for(int i=0; i<19; i++){
        homearray[0][i] = HCardinals[i];
        homearray[1][i] = HFalcons[i];
        homearray[2][i] = HRavens[i];
        homearray[3][i] = HBills[i];
        homearray[4][i] = HPanthers[i];
        homearray[5][i] = HBears[i];
        homearray[6][i] = HBengals[i];
        homearray[7][i] = HBrowns[i];
        homearray[8][i] = HCowboys[i];
        homearray[9][i] = HBroncos[i];
        homearray[10][i] = HLions[i];
        homearray[11][i] = HPackers[i];
        homearray[12][i] = HTexans[i];
        homearray[13][i] = HColts[i];
        homearray[14][i] = HJaguars[i];
        homearray[15][i] = HChiefs[i];
        homearray[16][i] = HDolphins[i];
        homearray[17][i] = HVikings[i];
        homearray[18][i] = HPatriots[i];
        homearray[19][i] = HSaints[i];
        homearray[20][i] = HGiants[i];
        homearray[21][i] = HJets[i];
        homearray[22][i] = HRaiders[i];
        homearray[23][i] = HEagles[i];
        homearray[24][i] = HSteelers[i];
        homearray[25][i] = HRams[i];
        homearray[26][i] = HChargers[i];
        homearray[27][i] = HFortyNiners[i];
        homearray[28][i] = HSeahawks[i];
        homearray[29][i] = HBuccaneers[i];
        homearray[30][i] = HTitans[i];
        homearray[31][i] = HRedskins[i];
    }

    for(int i=0; i<19; i++){
        opponentarray[0][i] = OCardinals[i];
        opponentarray[1][i] = OFalcons[i];
        opponentarray[2][i] = ORavens[i];
        opponentarray[3][i] = OBills[i];
        opponentarray[4][i] = OPanthers[i];
        opponentarray[5][i] = OBears[i];
        opponentarray[6][i] = OBengals[i];
        opponentarray[7][i] = OBrowns[i];
        opponentarray[8][i] = OCowboys[i];
        opponentarray[9][i] = OBroncos[i];
        opponentarray[10][i] = OLions[i];
        opponentarray[11][i] = OPackers[i];
        opponentarray[12][i] = OTexans[i];
        opponentarray[13][i] = OColts[i];
        opponentarray[14][i] = OJaguars[i];
        opponentarray[15][i] = OChiefs[i];
        opponentarray[16][i] = ODolphins[i];
        opponentarray[17][i] = OVikings[i];
        opponentarray[18][i] = OPatriots[i];
        opponentarray[19][i] = OSaints[i];
        opponentarray[20][i] = OGiants[i];
        opponentarray[21][i] = OJets[i];
        opponentarray[22][i] = ORaiders[i];
        opponentarray[23][i] = OEagles[i];
        opponentarray[24][i] = OSteelers[i];
        opponentarray[25][i] = ORams[i];
        opponentarray[26][i] = OChargers[i];
        opponentarray[27][i] = OFortyNiners[i];
        opponentarray[28][i] = OSeahawks[i];
        opponentarray[29][i] = OBuccaneers[i];
        opponentarray[30][i] = OTitans[i];
        opponentarray[31][i] = ORedskins[i];
    }

    teamNumber=teamNum;
    rank = rankarray[teamNum-1][weekNum+1];
    homeTeam=homearray[teamNum-1][weekNum];
    opponentNumber=opponentarray[teamNum-1][weekNum];
}

Team::Team(int teamNum, int teamRank, int teamOpponentNumber, bool teamHomeTeam)
{
    for(int i=0; i<19; i++){
        rankarray[0][i] = RCardinals[i];
        rankarray[1][i] = RFalcons[i];
        rankarray[2][i] = RRavens[i];
        rankarray[3][i] = RBills[i];
        rankarray[4][i] = RPanthers[i];
        rankarray[5][i] = RBears[i];
        rankarray[6][i] = RBengals[i];
        rankarray[7][i] = RBrowns[i];
        rankarray[8][i] = RCowboys[i];
        rankarray[9][i] = RBroncos[i];
        rankarray[10][i] = RLions[i];
        rankarray[11][i] = RPackers[i];
        rankarray[12][i] = RTexans[i];
        rankarray[13][i] = RColts[i];
        rankarray[14][i] = RJaguars[i];
        rankarray[15][i] = RChiefs[i];
        rankarray[16][i] = RDolphins[i];
        rankarray[17][i] = RVikings[i];
        rankarray[18][i] = RPatriots[i];
        rankarray[19][i] = RSaints[i];
        rankarray[20][i] = RGiants[i];
        rankarray[21][i] = RJets[i];
        rankarray[22][i] = RRaiders[i];
        rankarray[23][i] = REagles[i];
        rankarray[24][i] = RSteelers[i];
        rankarray[25][i] = RRams[i];
        rankarray[26][i] = RChargers[i];
        rankarray[27][i] = RFortyNiners[i];
        rankarray[28][i] = RSeahawks[i];
        rankarray[29][i] = RBuccaneers[i];
        rankarray[30][i] = RTitans[i];
        rankarray[31][i] = RRedskins[i];
    }

    for(int i=0; i<19; i++){
        homearray[0][i] = HCardinals[i];
        homearray[1][i] = HFalcons[i];
        homearray[2][i] = HRavens[i];
        homearray[3][i] = HBills[i];
        homearray[4][i] = HPanthers[i];
        homearray[5][i] = HBears[i];
        homearray[6][i] = HBengals[i];
        homearray[7][i] = HBrowns[i];
        homearray[8][i] = HCowboys[i];
        homearray[9][i] = HBroncos[i];
        homearray[10][i] = HLions[i];
        homearray[11][i] = HPackers[i];
        homearray[12][i] = HTexans[i];
        homearray[13][i] = HColts[i];
        homearray[14][i] = HJaguars[i];
        homearray[15][i] = HChiefs[i];
        homearray[16][i] = HDolphins[i];
        homearray[17][i] = HVikings[i];
        homearray[18][i] = HPatriots[i];
        homearray[19][i] = HSaints[i];
        homearray[20][i] = HGiants[i];
        homearray[21][i] = HJets[i];
        homearray[22][i] = HRaiders[i];
        homearray[23][i] = HEagles[i];
        homearray[24][i] = HSteelers[i];
        homearray[25][i] = HRams[i];
        homearray[26][i] = HChargers[i];
        homearray[27][i] = HFortyNiners[i];
        homearray[28][i] = HSeahawks[i];
        homearray[29][i] = HBuccaneers[i];
        homearray[30][i] = HTitans[i];
        homearray[31][i] = HRedskins[i];
    }

    for(int i=0; i<19; i++){
        opponentarray[0][i] = OCardinals[i];
        opponentarray[1][i] = OFalcons[i];
        opponentarray[2][i] = ORavens[i];
        opponentarray[3][i] = OBills[i];
        opponentarray[4][i] = OPanthers[i];
        opponentarray[5][i] = OBears[i];
        opponentarray[6][i] = OBengals[i];
        opponentarray[7][i] = OBrowns[i];
        opponentarray[8][i] = OCowboys[i];
        opponentarray[9][i] = OBroncos[i];
        opponentarray[10][i] = OLions[i];
        opponentarray[11][i] = OPackers[i];
        opponentarray[12][i] = OTexans[i];
        opponentarray[13][i] = OColts[i];
        opponentarray[14][i] = OJaguars[i];
        opponentarray[15][i] = OChiefs[i];
        opponentarray[16][i] = ODolphins[i];
        opponentarray[17][i] = OVikings[i];
        opponentarray[18][i] = OPatriots[i];
        opponentarray[19][i] = OSaints[i];
        opponentarray[20][i] = OGiants[i];
        opponentarray[21][i] = OJets[i];
        opponentarray[22][i] = ORaiders[i];
        opponentarray[23][i] = OEagles[i];
        opponentarray[24][i] = OSteelers[i];
        opponentarray[25][i] = ORams[i];
        opponentarray[26][i] = OChargers[i];
        opponentarray[27][i] = OFortyNiners[i];
        opponentarray[28][i] = OSeahawks[i];
        opponentarray[29][i] = OBuccaneers[i];
        opponentarray[30][i] = OTitans[i];
        opponentarray[31][i] = ORedskins[i];
    }

    teamNumber = teamNum;
    rank = teamRank;
    opponentNumber = teamOpponentNumber;
    homeTeam = teamHomeTeam;
}

Team::~Team()
{

}

//ACCESSOR FUNCTIONS

int Team::getTeamNumber() const
{
    return teamNumber;
}

int Team::getRank() const
{
    return rank;
}

int Team::getOpponentNumber() const
{
    return opponentNumber;
}

bool Team::isHome() const
{
    return homeTeam;
}
