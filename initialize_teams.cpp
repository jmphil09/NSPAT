#include "team_cvals.cpp"
//#include "2012Data.cpp"
#include "2013Data.cpp"
#include "2014Data.cpp"

//These are the Rank-Arrays for each team.
int RCardinals [19]= {0, 14, 14, 9, 5, 4, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RFalcons [19]= {0, 17, 9, 17, 9, 17, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RRavens [19]= {0, 12, 20, 13, 13, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBills [19]= {0, 29, 23, 12, 19, 23, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RPanthers [19]= {0, 15, 11, 6, 10, 20, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBears [19]= {0, 10, 18, 11, 8, 15, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBengals [19]= {0, 9, 5, 3, 2, 2, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBrowns [19]= {0, 30, 29, 23, 24, 25, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RCowboys [19]= {0, 23, 27, 22, 18, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBroncos [19]= {0, 2, 2, 1, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RLions [19]= {0, 18, 13, 18, 12, 8, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RPackers [19]= {0, 6, 8, 8, 17, 12, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RTexans [19]= {0, 27, 22, 14, 20, 13, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RColts [19]= {0, 8, 10, 15, 14, 11, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RJaguars [19]= {0, 31, 30, 31, 32, 31, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RChiefs [19]= {0, 16, 25, 27, 22, 14, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RDolphins [19]= {0, 22, 15, 20, 25, 22, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RVikings [19]= {0, 26, 17, 26, 29, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RPatriots [19]= {0, 3, 7, 5, 7, 16, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RSaints [19]= {0, 5, 6, 16, 15, 21, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RGiants [19]= {0, 20, 26, 30, 26, 19, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RJets [19]= {0, 21, 21, 21, 21, 26, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RRaiders [19]= {0, 32, 31, 32, 30, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int REagles [19]= {0, 7, 4, 4, 4, 6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RSteelers [19]= {0, 13, 12, 19, 11, 18, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RRams [19]= {0, 24, 32, 28, 28, 30, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RChargers [19]= {0, 11, 16, 10, 6, 5, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RFortyNiners [19]= {0, 4, 3, 7, 16, 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RSeahawks [19]= {0, 1, 1, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RBuccaneers [19]= {0, 19, 24, 29, 31, 29, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RTitans [19]= {0, 28, 19, 24, 27, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int RRedskins [19]= {0, 25, 28, 25, 23, 27, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int rankarray [32][19];

//These are the home arrays for each team.
bool HCardinals []= {false, true, false, true, false, false, true, false, true, false, true, true, false, false, true, false, true, false};
bool HFalcons []= {false, true, false, true, false, false, true, false, true, false, false, false, true, true, false, true, false, true};
bool HRavens []= {false, true, true, false, true, false, false, true, false, false, true, false, false, true, false, true, false, true};
bool HBills []= {false, false, true, true, false, false, true, true, false, false, true, false, true, true, false, true, false, false};
bool HPanthers []= {false, false, true, true, false, true, false, false, true, true, false, true, false, false, false, true, true, false};
bool HBears []= {false, true, false, false, true, false, false, true, false, false, false, true, true, false, true, true, true, false};
bool HBengals []= {false, false, true, true, false, false, true, false, true, true, true, false, false, false, true, false, true, false};
bool HBrowns []= {false, false, true, true, false, false, true, false, true, true, false, true, false, false, true, true, false, false};
bool HCowboys []= {false, true, false, false, true, true, false, true, true, true, false, false, false, true, false, false, true, false};
bool HBroncos []= {false, true, true, false, false, true, false, true, true, false, false, false, true, false, true, false, false, true};
bool HLions []= {false, true, false, true, false, true, false, true, false, false, true, false, false, true, true, true, false, false};
bool HPackers []= {false, false, true, false, false, true, false, true, false, false, true, true, false, true, true, false, false, true};
bool HTexans []= {false, true, false, false, true, false, true, false, false, true, false, false, true, true, false, false, true, true};
bool HColts []= {false, false, true, false, true, true, false, true, false, false, false, true, true, true, false, true, false, false};
bool HJaguars []= {false, false, false, true, false, true, false, true, true, false, true, false, false, true, true, false, true, false};
bool HChiefs []= {false, true, false, false, true, false, false, false, true, true, false, true, false, true, false, true, false, true};
bool HDolphins []= {false, true, false, true, false, false, true, false, false, true, false, true, false, false, true, false, true, true};
bool HVikings []= {false, false, true, false, true, false, true, false, false, true, false, false, true, true, true, false, false, true};
bool HPatriots []= {false, false, false, true, false, true, false, true, true, true, false, false, true, false, false, true, false, true};
bool HSaints []= {false, false, false, true, false, true, false, false, true, false, true, true, true, false, true, false, true, false};
bool HGiants []= {false, false, true, true, false, true, false, false, false, true, false, true, true, false, false, true, false, true};
bool HJets []= {false, true, false, true, true, false, true, false, true, false, true, false, false, true, false, false, true, false};
bool HRaiders []= {false, false, true, false, true, false, true, true, false, false, true, false, true, false, true, false, true, false};
bool HEagles []= {false, true, false, true, false, true, true, false, false, false, true, false, true, false, true, true, false, false};
bool HSteelers []= {false, true, false, false, true, false, false, true, true, true, false, false, false, true, false, false, true, true};
bool HRams []= {false, true, false, true, false, false, true, true, false, false, false, true, false, true, false, true, true, false};
bool HChargers []= {false, false, true, false, true, true, false, true, false, false, false, true, true, false, true, true, false, false};
bool HFortyNiners []= {false, false, true, false, true, true, false, false, false, true, false, false, true, true, false, false, true, true};
bool HSeahawks []= {false, true, false, true, false, false, true, false, false, true, true, false, true, false, false, true, false, true};
bool HBuccaneers []= {false, true, true, false, false, false, true, false, true, false, true, false, false, true, false, false, true, true};
bool HTitans []= {false, false, true, false, false, true, true, false, true, false, false, true, false, false, true, true, false, true};
bool HRedskins []= {false, false, true, false, true, true, false, true, false, false, false, true, false, false, true, false, true, true};


bool homearray [32][19];

//These are the opponent arrays for each team.
int OCardinals []= {0, CChargers, CGiants, CFortyNiners, 0, CBroncos, CRedskins, CRaiders, CEagles, CCowboys, CRams, CLions, CSeahawks, CFalcons, CChiefs, CRams, CSeahawks, CFortyNiners};
int OFalcons []= {0, CSaints, CBengals, CBuccaneers, CVikings, CGiants, CBears, CRavens, CLions, 0, CBuccaneers, CPanthers, CBrowns, CCardinals, CPackers, CSteelers, CSaints, CPanthers};
int ORavens []= {0, CBengals, CSteelers, CBrowns, CPanthers, CColts, CBuccaneers, CFalcons, CBengals, CSteelers, CTitans, 0, CSaints, CChargers, CDolphins, CJaguars, CTexans, CBrowns};
int OBills []= {0, CBears, CDolphins, CChargers, CTexans, CLions, CPatriots, CVikings, CJets, 0, CChiefs, CDolphins, CJets, CBrowns, CBroncos, CPackers, CRaiders, CPatriots};
int OPanthers []= {0, CBuccaneers, CLions, CSteelers, CRavens, CBears, CBengals, CPackers, CSeahawks, CSaints, CEagles, CFalcons, 0, CVikings, CSaints, CBuccaneers, CBrowns, CFalcons};
int OBears []= {0, CBills, CFortyNiners, CJets, CPackers, CPanthers, CFalcons, CDolphins, CPatriots, 0, CPackers, CVikings, CBuccaneers, CLions, CCowboys, CSaints, CLions, CVikings};
int OBengals []= {0, CRavens, CFalcons, CTitans, 0, CPatriots, CPanthers, CColts, CRavens, CJaguars, CBrowns, CSaints, CTexans, CBuccaneers, CSteelers, CBrowns, CBroncos, CSteelers};
int OBrowns []= {0, CSteelers, CSaints, CRavens, 0, CTitans, CSteelers, CJaguars, CRaiders, CBuccaneers, CBengals, CTexans, CFalcons, CBills, CColts, CBengals, CPanthers, CRavens};
int OCowboys []= {0, CFortyNiners, CTitans, CRams, CSaints, CTexans, CSeahawks, CGiants, CRedskins, CCardinals, CJaguars, 0, CGiants, CEagles, CBears, CEagles, CColts, CRedskins};
int OBroncos []= {0, CColts, CChiefs, CSeahawks, 0, CCardinals, CJets, CFortyNiners, CChargers, CPatriots, CRaiders, CRams, CDolphins, CChiefs, CBills, CChargers, CBengals, CRaiders};
int OLions []= {0, CGiants, CPanthers, CPackers, CJets, CBills, CVikings, CSaints, CFalcons, 0, CDolphins, CCardinals, CPatriots, CBears, CBuccaneers, CVikings, CBears, CPackers};
int OPackers []= {0, CSeahawks, CJets, CLions, CBears, CVikings, CDolphins, CPanthers, CSaints, 0, CBears, CEagles, CVikings, CPatriots, CFalcons, CBills, CBuccaneers, CLions};
int OTexans []= {0, CRedskins, CRaiders, CGiants, CBills, CCowboys, CColts, CSteelers, CTitans, CEagles, 0, CBrowns, CBengals, CTitans, CJaguars, CColts, CRavens, CJaguars};
int OColts []= {0, CBroncos, CEagles, CJaguars, CTitans, CRavens, CTexans, CBengals, CSteelers, CGiants, 0, CPatriots, CJaguars, CRedskins, CBrowns, CTexans, CCowboys, CTitans};
int OJaguars []= {0, CEagles, CRedskins, CColts, CChargers, CSteelers, CTitans, CBrowns, CDolphins, CBengals, CCowboys, 0, CColts, CGiants, CTexans, CRavens, CTitans, CTexans};
int OChiefs []= {0, CTitans, CBroncos, CDolphins, CPatriots, CFortyNiners, 0, CChargers, CRams, CJets, CBills, CSeahawks, CRaiders, CBroncos, CCardinals, CRaiders, CSteelers, CChargers};
int ODolphins []= {0, CPatriots, CBills, CChiefs, CRaiders, 0, CPackers, CBears, CJaguars, CChargers, CLions, CBills, CBroncos, CJets, CRavens, CPatriots, CVikings, CJets};
int OVikings []= {0, CRams, CPatriots, CSaints, CFalcons, CPackers, CLions, CBills, CBuccaneers, CRedskins, 0, CBears, CPackers, CPanthers, CJets, CLions, CDolphins, CBears};
int OPatriots []= {0, CDolphins, CVikings, CRaiders, CChiefs, CBengals, CBills, CJets, CBears, CBroncos, 0, CColts, CLions, CPackers, CChargers, CDolphins, CJets, CBills};
int OSaints []= {0, CFalcons, CBrowns, CVikings, CCowboys, CBuccaneers, 0, CLions, CPackers, CPanthers, CFortyNiners, CBengals, CRavens, CSteelers, CPanthers, CBears, CFalcons, CBuccaneers};
int OGiants []= {0, CLions, CCardinals, CTexans, CRedskins, CFalcons, CEagles, CCowboys, 0, CColts, CSeahawks, CFortyNiners, CCowboys, CJaguars, CTitans, CRedskins, CRams, CEagles};
int OJets []= {0, CRaiders, CPackers, CBears, CLions, CChargers, CBroncos, CPatriots, CBills, CChiefs, CSteelers, 0, CBills, CDolphins, CVikings, CTitans, CPatriots, CDolphins};
int ORaiders []= {0, CJets, CTexans, CPatriots, CDolphins, 0, CChargers, CCardinals, CBrowns, CSeahawks, CBroncos, CChargers, CChiefs, CRams, CFortyNiners, CChiefs, CBills, CBroncos};
int OEagles []= {0, CJaguars, CColts, CRedskins, CFortyNiners, CRams, CGiants, 0, CCardinals, CTexans, CPanthers, CPackers, CTitans, CCowboys, CSeahawks, CCowboys, CRedskins, CGiants};
int OSteelers []= {0, CBrowns, CRavens, CPanthers, CBuccaneers, CJaguars, CBrowns, CTexans, CColts, CRavens, CJets, CTitans, 0, CSaints, CBengals, CFalcons, CChiefs, CBengals};
int ORams []= {0, CVikings, CBuccaneers, CCowboys, 0, CEagles, CFortyNiners, CSeahawks, CChiefs, CFortyNiners, CCardinals, CBroncos, CChargers, CRaiders, CRedskins, CCardinals, CGiants, CSeahawks};
int OChargers []= {0, CCardinals, CSeahawks, CBills, CJaguars, CJets, CRaiders, CChiefs, CBroncos, CDolphins, 0, CRaiders, CRams, CRavens, CPatriots, CBroncos, CFortyNiners, CChiefs};
int OFortyNiners []= {0, CCowboys, CBears, CCardinals, CEagles, CChiefs, CRams, CBroncos, 0, CRams, CSaints, CGiants, CRedskins, CSeahawks, CRaiders, CSeahawks, CChargers, CCardinals};
int OSeahawks []= {0, CPackers, CChargers, CBroncos, 0, CRedskins, CCowboys, CRams, CPanthers, CRaiders, CGiants, CChiefs, CCardinals, CFortyNiners, CEagles, CFortyNiners, CCardinals, CRams};
int OBuccaneers []= {0, CPanthers, CRams, CFalcons, CSteelers, CSaints, CRavens, 0, CVikings, CBrowns, CFalcons, CRedskins, CBears, CBengals, CLions, CPanthers, CPackers, CSaints};
int OTitans []= {0, CChiefs, CCowboys, CBengals, CColts, CBrowns, CJaguars, CRedskins, CTexans, 0, CRavens, CSteelers, CEagles, CTexans, CGiants, CJets, CJaguars, CColts};
int ORedskins []= {0, CTexans, CJaguars, CEagles, CGiants, CSeahawks, CCardinals, CTitans, CCowboys, CVikings, 0, CBuccaneers, CFortyNiners, CColts, CRams, CGiants, CEagles, CCowboys};

int opponentarray [32][19];
