#include "team_cvals.cpp"
//#include "2012Data.cpp"
#include "2013Data.cpp"
#include "2014Data.cpp"

//These are the Rank-Arrays for each team.
int RCardinals [19]= {0, 4, 5, 3, 5, 17, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
int RFalcons [19]= {0, 22, 21, 17, 18, 8, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
int RRavens [19]= {0, 15, 13, 13, 10, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
int RBills [19]= {0, 16, 27, 30, 22, 20, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16};
int RPanthers [19]= {0, 5, 6, 4, 8, 15, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
int RBears [19]= {0, 29, 29, 26, 31, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28};
int RBengals [19]= {0, 7, 9, 8, 13, 10, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
int RBrowns [19]= {0, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
int RCowboys [19]= {0, 23, 18, 18, 11, 11, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
int RBroncos [19]= {0, 8, 8, 5, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
int RLions [19]= {0, 20, 22, 20, 17, 25, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
int RPackers [19]= {0, 6, 1, 9, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
int RTexans [19]= {0, 13, 7, 6, 16, 13, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
int RColts [19]= {0, 18, 19, 23, 23, 26, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
int RJaguars [19]= {0, 19, 23, 27, 29, 23, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
int RChiefs [19]= {0, 9, 11, 11, 12, 18, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
int RDolphins [19]= {0, 21, 28, 29, 25, 30, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
int RVikings [19]= {0, 12, 12, 7, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int RPatriots [19]= {0, 3, 2, 1, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
int RSaints [19]= {0, 27, 24, 24, 27, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
int RGiants [19]= {0, 17, 16, 12, 15, 12, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
int RJets [19]= {0, 10, 15, 14, 19, 21, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27};
int RRaiders [19]= {0, 11, 10, 16, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
int REagles [19]= {0, 25, 20, 15, 7, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
int RSteelers [19]= {0, 2, 4, 2, 9, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
int RRams [19]= {0, 28, 31, 28, 24, 16, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
int RChargers [19]= {0, 26, 25, 19, 21, 22, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
int RFortyNiners [19]= {0, 32, 30, 31, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};
int RSeahawks [19]= {0, 1, 3, 10, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
int RBuccaneers [19]= {0, 24, 14, 22, 28, 29, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
int RTitans [19]= {0, 30, 26, 21, 26, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
int RRedskins [19]= {0, 14, 17, 25, 20, 19, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};

int rankarray [32][19];

//These are the home arrays for each team.
bool HCardinals []= {false, true, true, false, true, false, true, true, false, false, true, false, false, true, false, true, false, false};
bool HFalcons []= {false, true, false, false, true, false, false, true, true, false, false, false, true, true, false, true, false, true};
bool HRavens []= {false, true, false, false, true, true, false, false, false, true, true, false, true, true, false, true, false, false};
bool HBills []= {false, false, true, true, false, false, true, false, true, false, false, false, true, false, true, true, true, false};
bool HPanthers []= {false, false, true, true, false, true, false, false, true, false, true, true, false, false, true, false, true, false};
bool HBears []= {false, false, true, false, true, false, true, false, true, false, false, false, true, true, false, true, true, false};
bool HBengals []= {false, false, false, true, true, false, false, true, true, false, false, true, false, true, false, true, false, true};
bool HBrowns []= {false, false, true, false, false, true, false, false, true, true, false, true, true, false, true, false, true, false};
bool HCowboys []= {false, true, false, true, false, true, false, false, true, false, false, true, true, false, false, true, true, false};
bool HBroncos []= {false, true, true, false, false, true, false, true, true, false, false, false, true, false, false, true, false, true};
bool HLions []= {false, false, true, false, false, true, true, true, false, false, false, true, true, false, true, false, false, true};
bool HPackers []= {false, false, false, true, false, true, true, true, false, true, false, false, false, true, true, false, true, false};
bool HTexans []= {false, true, true, false, true, false, true, false, true, false, false, false, true, false, false, true, true, false};
bool HColts []= {false, true, false, true, false, true, false, false, true, false, false, true, true, false, true, false, false, true};
bool HJaguars []= {false, true, false, true, true, false, false, true, false, false, true, false, false, true, true, false, true, false};
bool HChiefs []= {false, true, false, true, false, false, false, true, false, true, false, true, false, false, true, true, true, false};
bool HDolphins []= {false, false, false, true, false, true, true, true, false, true, false, false, true, false, true, false, false, true};
bool HVikings []= {false, false, true, false, true, true, false, false, false, true, false, true, false, true, false, true, false, true};
bool HPatriots []= {false, false, true, true, true, false, true, false, false, false, true, false, false, true, true, false, true, false};
bool HSaints []= {false, true, false, true, false, false, true, false, true, false, true, false, true, true, false, false, true, false};
bool HGiants []= {false, false, true, true, false, false, true, false, false, true, true, true, false, false, true, true, false, false};
bool HJets []= {false, true, false, false, true, false, false, true, false, false, true, false, true, true, false, true, false, true};
bool HRaiders []= {false, false, true, false, false, true, true, false, false, true, false, true, true, true, false, false, true, false};
bool HEagles []= {false, true, false, true, false, false, false, true, false, false, true, false, true, false, true, false, true, true};
bool HSteelers []= {false, false, true, false, true, true, false, true, false, false, true, false, false, true, false, false, true, true};
bool HRams []= {false, false, true, false, false, true, false, true, false, true, false, true, false, false, true, false, true, true};
bool HChargers []= {false, false, true, false, true, false, true, false, false, true, true, false, false, true, false, true, false, true};
bool HFortyNiners []= {false, true, false, false, true, true, false, true, false, true, false, true, false, false, true, false, false, true};
bool HSeahawks []= {false, true, false, true, false, false, true, false, false, true, false, true, false, true, false, true, true, false};
bool HBuccaneers []= {false, false, false, true, true, false, false, false, true, true, true, false, true, false, true, false, false, true};
bool HTitans []= {false, true, false, true, false, false, true, true, true, false, true, false, false, false, true, false, false, true};
bool HRedskins []= {false, true, true, false, true, false, true, false, false, false, true, true, false, false, false, true, false, true};


bool homearray [32][19];

//These are the opponent arrays for each team.
int OCardinals []= {0, CPatriots, CBuccaneers, CBills, CRams, CFortyNiners, CJets, CSeahawks, CPanthers, 0, CFortyNiners, CVikings, CFalcons, CRedskins, CDolphins, CSaints, CSeahawks, CRams};
int OFalcons []= {0, CBuccaneers, CRaiders, CSaints, CPanthers, CBroncos, CSeahawks, CChargers, CPackers, CBuccaneers, CEagles, 0, CCardinals, CChiefs, CRams, CFortyNiners, CPanthers, CSaints};
int ORavens []= {0, CBills, CBrowns, CJaguars, CRaiders, CRedskins, CGiants, CJets, 0, CSteelers, CBrowns, CCowboys, CBengals, CDolphins, CPatriots, CEagles, CSteelers, CBengals};
int OBills []= {0, CRavens, CJets, CCardinals, CPatriots, CRams, CFortyNiners, CDolphins, CPatriots, CSeahawks, 0, CBengals, CJaguars, CRaiders, CSteelers, CBrowns, CDolphins, CJets};
int OPanthers []= {0, CBroncos, CFortyNiners, CVikings, CFalcons, CBuccaneers, CSaints, 0, CCardinals, CRams, CChiefs, CSaints, CRaiders, CSeahawks, CChargers, CRedskins, CFalcons, CBuccaneers};
int OBears []= {0, CTexans, CEagles, CCowboys, CLions, CColts, CJaguars, CPackers, CVikings, 0, CBuccaneers, CGiants, CTitans, CFortyNiners, CLions, CPackers, CRedskins, CVikings};
int OBengals []= {0, CJets, CSteelers, CBroncos, CDolphins, CCowboys, CPatriots, CBrowns, CRedskins, 0, CGiants, CBills, CRavens, CEagles, CBrowns, CSteelers, CTexans, CRavens};
int OBrowns []= {0, CEagles, CRavens, CDolphins, CRedskins, CPatriots, CTitans, CBengals, CJets, CCowboys, CRavens, CSteelers, CGiants, 0, CBengals, CBills, CChargers, CSteelers};
int OCowboys []= {0, CGiants, CRedskins, CBears, CFortyNiners, CBengals, CPackers, 0, CEagles, CBrowns, CSteelers, CRavens, CRedskins, CVikings, CGiants, CBuccaneers, CLions, CEagles};
int OBroncos []= {0, CPanthers, CColts, CBengals, CBuccaneers, CFalcons, CChargers, CTexans, CChargers, CRaiders, CSaints, 0, CChiefs, CJaguars, CTitans, CPatriots, CChiefs, CRaiders};
int OLions []= {0, CColts, CTitans, CPackers, CBears, CEagles, CRams, CRedskins, CTexans, CVikings, 0, CJaguars, CVikings, CSaints, CBears, CGiants, CCowboys, CPackers};
int OPackers []= {0, CJaguars, CVikings, CLions, 0, CGiants, CCowboys, CBears, CFalcons, CColts, CTitans, CRedskins, CEagles, CTexans, CSeahawks, CBears, CVikings, CLions};
int OTexans []= {0, CBears, CChiefs, CPatriots, CTitans, CVikings, CColts, CBroncos, CLions, 0, CJaguars, CRaiders, CChargers, CPackers, CColts, CJaguars, CBengals, CTitans};
int OColts []= {0, CLions, CBroncos, CChargers, CJaguars, CBears, CTexans, CTitans, CChiefs, CPackers, 0, CTitans, CSteelers, CJets, CTexans, CVikings, CRaiders, CJaguars};
int OJaguars []= {0, CPackers, CChargers, CRavens, CColts, 0, CBears, CRaiders, CTitans, CChiefs, CTexans, CLions, CBills, CBroncos, CVikings, CTexans, CTitans, CColts};
int OChiefs []= {0, CChargers, CTexans, CJets, CSteelers, 0, CRaiders, CSaints, CColts, CJaguars, CPanthers, CBuccaneers, CBroncos, CFalcons, CRaiders, CTitans, CBroncos, CChargers};
int ODolphins []= {0, CSeahawks, CPatriots, CBrowns, CBengals, CTitans, CSteelers, CBills, 0, CJets, CChargers, CRams, CFortyNiners, CRavens, CCardinals, CJets, CBills, CPatriots};
int OVikings []= {0, CTitans, CPackers, CPanthers, CGiants, CTexans, 0, CEagles, CBears, CLions, CRedskins, CCardinals, CLions, CCowboys, CJaguars, CColts, CPackers, CBears};
int OPatriots []= {0, CCardinals, CDolphins, CTexans, CBills, CBrowns, CBengals, CSteelers, CBills, 0, CSeahawks, CFortyNiners, CJets, CRams, CRavens, CBroncos, CJets, CDolphins};
int OSaints []= {0, CRaiders, CGiants, CFalcons, CChargers, 0, CPanthers, CChiefs, CSeahawks, CFortyNiners, CBroncos, CPanthers, CRams, CLions, CBuccaneers, CCardinals, CBuccaneers, CFalcons};
int OGiants []= {0, CCowboys, CSaints, CRedskins, CVikings, CPackers, CRavens, CRams, 0, CEagles, CBengals, CBears, CBrowns, CSteelers, CCowboys, CLions, CEagles, CRedskins};
int OJets []= {0, CBengals, CBills, CChiefs, CSeahawks, CSteelers, CCardinals, CRavens, CBrowns, CDolphins, CRams, 0, CPatriots, CColts, CFortyNiners, CDolphins, CPatriots, CBills};
int ORaiders []= {0, CSaints, CFalcons, CTitans, CRavens, CChargers, CChiefs, CJaguars, CBuccaneers, CBroncos, 0, CTexans, CPanthers, CBills, CChiefs, CChargers, CColts, CBroncos};
int OEagles []= {0, CBrowns, CBears, CSteelers, 0, CLions, CRedskins, CVikings, CCowboys, CGiants, CFalcons, CSeahawks, CPackers, CBengals, CRedskins, CRavens, CGiants, CCowboys};
int OSteelers []= {0, CRedskins, CBengals, CEagles, CChiefs, CJets, CDolphins, CPatriots, 0, CRavens, CCowboys, CBrowns, CColts, CGiants, CBills, CBengals, CRavens, CBrowns};
int ORams []= {0, CFortyNiners, CSeahawks, CBuccaneers, CCardinals, CBills, CLions, CGiants, 0, CPanthers, CJets, CDolphins, CSaints, CPatriots, CFalcons, CSeahawks, CFortyNiners, CCardinals};
int OChargers []= {0, CChiefs, CJaguars, CColts, CSaints, CRaiders, CBroncos, CFalcons, CBroncos, CTitans, CDolphins, 0, CTexans, CBuccaneers, CPanthers, CRaiders, CBrowns, CChiefs};
int OFortyNiners []= {0, CRams, CPanthers, CSeahawks, CCowboys, CCardinals, CBills, CBuccaneers, 0, CSaints, CCardinals, CPatriots, CDolphins, CBears, CJets, CFalcons, CRams, CSeahawks};
int OSeahawks []= {0, CDolphins, CRams, CFortyNiners, CJets, 0, CFalcons, CCardinals, CSaints, CBills, CPatriots, CEagles, CBuccaneers, CPanthers, CPackers, CRams, CCardinals, CFortyNiners};
int OBuccaneers []= {0, CFalcons, CCardinals, CRams, CBroncos, CPanthers, 0, CFortyNiners, CRaiders, CFalcons, CBears, CChiefs, CSeahawks, CChargers, CSaints, CCowboys, CSaints, CPanthers};
int OTitans []= {0, CVikings, CLions, CRaiders, CTexans, CDolphins, CBrowns, CColts, CJaguars, CChargers, CPackers, CColts, CBears, 0, CBroncos, CChiefs, CJaguars, CTexans};
int ORedskins []= {0, CSteelers, CCowboys, CGiants, CBrowns, CRavens, CEagles, CLions, CBengals, 0, CVikings, CPackers, CCowboys, CCardinals, CEagles, CPanthers, CBears, CGiants};

int opponentarray [32][19];
