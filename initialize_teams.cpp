#include "team_cvals.cpp"
//#include "2012Data.cpp"
#include "2013Data.cpp"
#include "2014Data.cpp"

//These are the Rank-Arrays for each team.
int RCardinals [19]= {0, 10, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
int RFalcons [19]= {0, 23, 17, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
int RRavens [19]= {0, 8, 12, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
int RBills [19]= {0, 18, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
int RPanthers [19]= {0, 19, 18, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
int RBears [19]= {0, 25, 27, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
int RBengals [19]= {0, 11, 8, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
int RBrowns [19]= {0, 27, 28, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
int RCowboys [19]= {0, 6, 5, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
int RBroncos [19]= {0, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
int RLions [19]= {0, 12, 20, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
int RPackers [19]= {0, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
int RTexans [19]= {0, 20, 26, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
int RColts [19]= {0, 4, 11, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
int RJaguars [19]= {0, 31, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};
int RChiefs [19]= {0, 14, 7, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
int RDolphins [19]= {0, 15, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
int RVikings [19]= {0, 17, 25, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16};
int RPatriots [19]= {0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int RSaints [19]= {0, 16, 22, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
int RGiants [19]= {0, 21, 24, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
int RJets [19]= {0, 26, 21, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
int RRaiders [19]= {0, 28, 31, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28};
int REagles [19]= {0, 9, 15, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
int RSteelers [19]= {0, 7, 13, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
int RRams [19]= {0, 22, 14, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
int RChargers [19]= {0, 13, 10, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
int RFortyNiners [19]= {0, 24, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
int RSeahawks [19]= {0, 1, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
int RBuccaneers [19]= {0, 29, 32, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
int RTitans [19]= {0, 30, 23, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27};
int RRedskins [19]= {0, 32, 29, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};


int rankarray [32][19];

//These are the home arrays for each team.
bool HCardinals []= {false, true, false, true, true, false, false, true, false, false, false, true, false, false, true, false, true, true};
bool HFalcons []= {false, true, false, false, true, true, false, false, true, false, false, true, true, false, false, false, true, true};
bool HRavens []= {false, false, false, true, false, true, false, false, true, false, true, true, false, false, true, true, true, false};
bool HBills []= {false, true, true, false, true, false, true, false, false, true, false, false, false, true, false, false, true, true};
bool HPanthers []= {false, false, true, true, false, false, false, true, true, true, false, true, false, false, true, false, false, true};
bool HBears []= {false, true, true, false, true, false, false, false, true, false, false, true, false, true, true, false, false, true};
bool HBengals []= {false, false, true, false, true, true, false, false, false, true, true, false, true, false, true, false, false, true};
bool HBrowns []= {false, false, true, true, false, false, true, false, true, false, false, false, true, true, true, false, false, true};
bool HCowboys []= {false, true, false, true, false, true, false, false, true, true, false, false, true, false, false, true, false, true};
bool HBroncos []= {false, true, false, false, true, false, false, false, true, false, true, false, true, false, true, false, true, true};
bool HLions []= {false, false, false, true, false, true, true, true, false, false, false, true, true, true, false, false, true, false};
bool HPackers []= {false, false, true, true, false, true, true, false, false, false, true, false, true, false, true, false, false, true};
bool HTexans []= {false, true, false, true, false, true, false, false, true, false, false, true, true, false, true, false, false, true};
bool HColts []= {false, false, true, false, true, false, true, true, false, true, false, false, true, false, false, true, false, true};
bool HJaguars []= {false, true, true, false, false, false, true, true, false, false, false, true, true, false, true, true, false, false};
bool HChiefs []= {false, false, true, false, false, true, false, true, true, false, false, false, true, false, true, false, true, true};
bool HDolphins []= {false, false, false, true, true, false, false, true, false, false, false, true, false, true, true, false, true, true};
bool HVikings []= {false, false, true, true, false, false, true, false, false, true, false, true, false, true, false, true, true, false};
bool HPatriots []= {false, true, false, true, false, false, false, true, true, true, false, true, false, true, false, true, false, false};
bool HSaints []= {false, false, true, false, true, false, true, false, true, true, false, false, false, true, false, true, true, false};
bool HGiants []= {false, false, true, true, false, true, false, true, false, false, true, false, false, true, false, true, false, true};
bool HJets []= {false, true, false, true, false, false, true, false, false, true, true, false, true, false, true, false, true, false};
bool HRaiders []= {false, true, true, false, false, true, false, false, true, false, true, false, false, true, false, true, true, false};
bool HEagles []= {false, false, true, false, false, true, true, false, false, false, true, true, false, false, true, true, true, false};
bool HSteelers []= {false, false, true, false, true, false, true, false, true, true, true, false, false, true, false, true, false, false};
bool HRams []= {false, true, false, true, false, false, false, true, true, false, true, false, false, true, true, true, false, false};
bool HChargers []= {false, true, false, false, true, true, false, true, false, true, false, true, false, true, false, true, false, false};
bool HFortyNiners []= {false, true, false, false, true, false, true, true, false, true, false, false, true, false, false, true, false, true};
bool HSeahawks []= {false, false, false, true, true, false, true, false, false, false, true, true, true, false, false, true, true, false};
bool HBuccaneers []= {false, true, false, false, true, true, false, false, false, true, true, false, false, true, true, false, true, false};
bool HTitans []= {false, false, false, true, false, true, true, true, false, false, true, false, true, true, false, false, true, false};
bool HRedskins []= {false, true, true, false, true, false, false, true, false, false, true, false, true, true, false, true, false, false};

bool homearray [32][19];

//These are the opponent arrays for each team.
int OCardinals []= {0, CSaints, CBears, CFortyNiners, CRams, CLions, CSteelers, CRavens, CBrowns, 0, CSeahawks, CBengals, CFortyNiners, CRams, CVikings, CEagles, CPackers, CSeahawks};
int OFalcons []= {0, CEagles, CGiants, CCowboys, CTexans, CRedskins, CSaints, CTitans, CBuccaneers, CFortyNiners, 0, CColts, CVikings, CBuccaneers, CPanthers, CJaguars, CPanthers, CSaints};
int ORavens []= {0, CBroncos, CRaiders, CBengals, CSteelers, CBrowns, CFortyNiners, CCardinals, CChargers, 0, CJaguars, CRams, CBrowns, CDolphins, CSeahawks, CChiefs, CSteelers, CBengals};
int OBills []= {0, CColts, CPatriots, CDolphins, CGiants, CTitans, CBengals, CJaguars, 0, CDolphins, CJets, CPatriots, CChiefs, CTexans, CEagles, CRedskins, CCowboys, CJets};
int OPanthers []= {0, CJaguars, CTexans, CSaints, CBuccaneers, 0, CSeahawks, CEagles, CColts, CPackers, CTitans, CRedskins, CCowboys, CSaints, CFalcons, CGiants, CFalcons, CBuccaneers};
int OBears []= {0, CPackers, CCardinals, CSeahawks, CRaiders, CChiefs, CLions, 0, CVikings, CChargers, CRams, CBroncos, CPackers, CFortyNiners, CRedskins, CVikings, CBuccaneers, CLions};
int OBengals []= {0, CRaiders, CChargers, CRavens, CChiefs, CSeahawks, CBills, 0, CSteelers, CBrowns, CTexans, CCardinals, CRams, CBrowns, CSteelers, CFortyNiners, CBroncos, CRavens};
int OBrowns []= {0, CJets, CTitans, CRaiders, CChargers, CRavens, CBroncos, CRams, CCardinals, CBengals, CSteelers, 0, CRavens, CBengals, CFortyNiners, CSeahawks, CChiefs, CSteelers};
int OCowboys []= {0, CGiants, CEagles, CFalcons, CSaints, CPatriots, 0, CGiants, CSeahawks, CEagles, CBuccaneers, CDolphins, CPanthers, CRedskins, CPackers, CJets, CBills, CRedskins};
int OBroncos []= {0, CRavens, CChiefs, CLions, CVikings, CRaiders, CBrowns, 0, CPackers, CColts, CChiefs, CBears, CPatriots, CChargers, CRaiders, CSteelers, CBengals, CChargers};
int OLions []= {0, CChargers, CVikings, CBroncos, CSeahawks, CCardinals, CBears, CVikings, CChiefs, 0, CPackers, CRaiders, CEagles, CPackers, CRams, CSaints, CFortyNiners, CBears};
int OPackers []= {0, CBears, CSeahawks, CChiefs, CFortyNiners, CRams, CChargers, 0, CBroncos, CPanthers, CLions, CVikings, CBears, CLions, CCowboys, CRaiders, CCardinals, CVikings};
int OTexans []= {0, CChiefs, CPanthers, CBuccaneers, CFalcons, CColts, CJaguars, CDolphins, CTitans, 0, CBengals, CJets, CSaints, CBills, CPatriots, CColts, CTitans, CJaguars};
int OColts []= {0, CBills, CJets, CTitans, CJaguars, CTexans, CPatriots, CSaints, CPanthers, CBroncos, 0, CFalcons, CBuccaneers, CSteelers, CJaguars, CTexans, CDolphins, CTitans};
int OJaguars []= {0, CPanthers, CDolphins, CPatriots, CColts, CBuccaneers, CTexans, CBills, 0, CJets, CRavens, CTitans, CChargers, CTitans, CColts, CFalcons, CSaints, CTexans};
int OChiefs []= {0, CTexans, CBroncos, CPackers, CBengals, CBears, CVikings, CSteelers, CLions, 0, CBroncos, CChargers, CBills, CRaiders, CChargers, CRavens, CBrowns, CRaiders};
int ODolphins []= {0, CRedskins, CJaguars, CBills, CJets, 0, CTitans, CTexans, CPatriots, CBills, CEagles, CCowboys, CJets, CRavens, CGiants, CChargers, CColts, CPatriots};
int OVikings []= {0, CFortyNiners, CLions, CChargers, CBroncos, 0, CChiefs, CLions, CBears, CRams, CRaiders, CPackers, CFalcons, CSeahawks, CCardinals, CBears, CGiants, CPackers};
int OPatriots []= {0, CSteelers, CBills, CJaguars, 0, CCowboys, CColts, CJets, CDolphins, CRedskins, CGiants, CBills, CBroncos, CEagles, CTexans, CTitans, CJets, CDolphins};
int OSaints []= {0, CCardinals, CBuccaneers, CPanthers, CCowboys, CEagles, CFalcons, CColts, CGiants, CTitans, CRedskins, 0, CTexans, CPanthers, CBuccaneers, CLions, CJaguars, CFalcons};
int OGiants []= {0, CCowboys, CFalcons, CRedskins, CBills, CFortyNiners, CEagles, CCowboys, CSaints, CBuccaneers, CPatriots, 0, CRedskins, CJets, CDolphins, CPanthers, CVikings, CEagles};
int OJets []= {0, CBrowns, CColts, CEagles, CDolphins, 0, CRedskins, CPatriots, CRaiders, CJaguars, CBills, CTexans, CDolphins, CGiants, CTitans, CCowboys, CPatriots, CBills};
int ORaiders []= {0, CBengals, CRavens, CBrowns, CBears, CBroncos, 0, CChargers, CJets, CSteelers, CVikings, CLions, CTitans, CChiefs, CBroncos, CPackers, CChargers, CChiefs};
int OEagles []= {0, CFalcons, CCowboys, CJets, CRedskins, CSaints, CGiants, CPanthers, 0, CCowboys, CDolphins, CBuccaneers, CLions, CPatriots, CBills, CCardinals, CRedskins, CGiants};
int OSteelers []= {0, CPatriots, CFortyNiners, CRams, CRavens, CChargers, CCardinals, CChiefs, CBengals, CRaiders, CBrowns, 0, CSeahawks, CColts, CBengals, CBroncos, CRavens, CBrowns};
int ORams []= {0, CSeahawks, CRedskins, CSteelers, CCardinals, CPackers, 0, CBrowns, CFortyNiners, CVikings, CBears, CRavens, CBengals, CCardinals, CLions, CBuccaneers, CSeahawks, CFortyNiners};
int OChargers []= {0, CLions, CBengals, CVikings, CBrowns, CSteelers, CPackers, CRaiders, CRavens, CBears, 0, CChiefs, CJaguars, CBroncos, CChiefs, CDolphins, CRaiders, CBroncos};
int OFortyNiners []= {0, CVikings, CSteelers, CCardinals, CPackers, CGiants, CRavens, CSeahawks, CRams, CFalcons, 0, CSeahawks, CCardinals, CBears, CBrowns, CBengals, CLions, CRams};
int OSeahawks []= {0, CRams, CPackers, CBears, CLions, CBengals, CPanthers, CFortyNiners, CCowboys, 0, CCardinals, CFortyNiners, CSteelers, CVikings, CRavens, CBrowns, CRams, CCardinals};
int OBuccaneers []= {0, CTitans, CSaints, CTexans, CPanthers, CJaguars, 0, CRedskins, CFalcons, CGiants, CCowboys, CEagles, CColts, CFalcons, CSaints, CRams, CBears, CPanthers};
int OTitans []= {0, CBuccaneers, CBrowns, CColts, 0, CBills, CDolphins, CFalcons, CTexans, CSaints, CPanthers, CJaguars, CRaiders, CJaguars, CJets, CPatriots, CTexans, CColts};
int ORedskins []= {0, CDolphins, CRams, CGiants, CEagles, CFalcons, CJets, CBuccaneers, 0, CPatriots, CSaints, CPanthers, CGiants, CCowboys, CBears, CBills, CEagles, CCowboys};

int opponentarray [32][19];
