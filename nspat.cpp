#include "nspat.h"
#include "ui_nspat.h"

#include "teamObject.h"

#include <QString>
#include <QDebug>

//This function will calculate the number of "+'s" each matchup receives.
QString plusRank(int team1, int team2, int weeknum)
{
    QString plus = "";

    //Initialize the teams
    Team teamA(team1, weeknum);
    Team teamB(team2, weeknum);

    Team highteam;
    Team lowteam;

    if(teamA.getRank() < teamB.getRank()){
        highteam = teamA;
        lowteam = teamB;
    }
    else {
        highteam = teamB;
        lowteam = teamA;
    }

    //Add 1 plus if higher ranked team is at home
    if(highteam.isHome()) plus.append("+");

    //Add 1 plus if lower ranked team is in bottom 8
    if(lowteam.getRank() > 23) plus.append("+");

    //Add 1 plus if higher ranked team is in the top 8
    if(highteam.getRank() < 9) plus.append("+");

    //Add 1 plus if higher ranked team ranking has increased the past 2 weeks (overall delta of > 4)
    if(weeknum > 2){
    int currentHighRank = highteam.getRank();
    Team oneWeek(highteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgoHighRank = oneWeek.getRank();
    Team twoWeek(highteam.getTeamNumber(), weeknum - 2);
    int twoWeekAgoHighRank = twoWeek.getRank();

    if(currentHighRank < oneWeekAgoHighRank && oneWeekAgoHighRank < twoWeekAgoHighRank && (twoWeekAgoHighRank - currentHighRank > 4)) plus.append("+");
    }
    //Add 1 plus if lower ranked team ranking has decreased the past 2 weeks (overall delta of > 4)
    if(weeknum > 2){
    int currentLowRank = lowteam.getRank();
    Team oneWeekL(lowteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgolowRank = oneWeekL.getRank();
    Team twoWeekL(lowteam.getTeamNumber(), weeknum - 2);
    int twoWeekAgolowRank = twoWeekL.getRank();

    if( currentLowRank > oneWeekAgolowRank  &&  oneWeekAgolowRank > twoWeekAgolowRank  && ( twoWeekAgolowRank - currentLowRank > 4)) plus.append("+");

    }

    //Add 1 plus if higher ranked team has increased 5 or more the past week
    if(weeknum > 1){
    int currentHighRank = highteam.getRank();
    Team oneWeek(highteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgoHighRank = oneWeek.getRank();

    if(currentHighRank < oneWeekAgoHighRank && (oneWeekAgoHighRank - currentHighRank > 4)) plus.append("+");

    }

    //Add 2 plusses if higher ranked team has increased 10 or more the past week
    if(weeknum > 1){
    int currentHighRank = highteam.getRank();
    Team oneWeek(highteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgoHighRank = oneWeek.getRank();

    if(currentHighRank < oneWeekAgoHighRank && (oneWeekAgoHighRank - currentHighRank > 9)) plus.append("+");

    }

    //Add 1 plus if lower ranked team has decreased 5 or more the past week
    if(weeknum > 1){
    int currentLowRank = lowteam.getRank();
    Team oneWeek(lowteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgoLowRank = oneWeek.getRank();

    if(currentLowRank > oneWeekAgoLowRank && (currentLowRank - oneWeekAgoLowRank > 4)) plus.append("+");

    }

    //Add 2 plusses if lower ranked team has decreased 10 or more the past week
    if(weeknum > 1){
    int currentLowRank = lowteam.getRank();
    Team oneWeek(lowteam.getTeamNumber(), weeknum - 1);
    int oneWeekAgoLowRank = oneWeek.getRank();

    if(currentLowRank > oneWeekAgoLowRank && (currentLowRank - oneWeekAgoLowRank > 9)) plus.append("+");

    }

    //Add 1 plus if there is a delta > 10 between the two teams
    if(lowteam.getRank() - highteam.getRank() > 9) plus.append("+");

    return plus;
}

//This function returns true if val is an element of array[] of length len, and false otherwise.
bool isIn(int array[], int val, int len)
{
    bool returnvalue = false;

    int i=0;
    while (i < len-1)
    {
        if (array[i]==val)
        {
            returnvalue= true;
            i=len-1;
            break;
        }
        i++;
    }
    return returnvalue;
}

//This function returns false if a team is playing at home and true if a team is playing on the road. NOTE: The function should be called isRoadTeam, but is not because of later functions.
bool isHomeTeam(int teamnum, int week)
{
    Team tempteam(teamnum, week);
    int ret = tempteam.isHome();
    return ret;
}

//This function returns the OpponentNumber for a team given the teamNumber and weekNumber.
int sFind(int num, int week)
{
    Team tempteam(num, week);
    return tempteam.getOpponentNumber();
}

//This function returns the teamRank for a team given the teamNumber and weekNumber.
int findrank(int num, int week)
{
    Team tempteam(num, week);
    int ret = tempteam.getRank();
    return ret;
}

//This funtion will provide the win value of team1 over team2.
int winVal(int team1, int team2, int weeknum)
{
    return findrank(team2, weeknum) - findrank(team1, weeknum);
}

//This function is used to output which in a given matchup is favored to win.
QString teamoutput(QString topteam, QString bottomteam, int toprank, int bottomrank)
{
    if (toprank < bottomrank) return topteam;
    else return bottomteam;
}

NSPAT::NSPAT(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NSPAT)
{
    ui->setupUi(this);
}

NSPAT::~NSPAT()
{
    delete ui;
}

void NSPAT::on_pushButton_clicked()
{
    int weeknumber = ui->WeekcomboBox->currentIndex()-1;

    //Calculate and output the win values for each matchup
    int m1toprank = findrank(ui->M1topcomboBox->currentIndex(), weeknumber);
    int m1botrank = findrank(ui->M1botcomboBox->currentIndex(), weeknumber);
    int m2toprank = findrank(ui->M2topcomboBox->currentIndex(), weeknumber);
    int m2botrank = findrank(ui->M2botcomboBox->currentIndex(), weeknumber);
    int m3toprank = findrank(ui->M3topcomboBox->currentIndex(), weeknumber);
    int m3botrank = findrank(ui->M3botcomboBox->currentIndex(), weeknumber);
    int m4toprank = findrank(ui->M4topcomboBox->currentIndex(), weeknumber);
    int m4botrank = findrank(ui->M4botcomboBox->currentIndex(), weeknumber);
    int m5toprank = findrank(ui->M5topcomboBox->currentIndex(), weeknumber);
    int m5botrank = findrank(ui->M5botcomboBox->currentIndex(), weeknumber);
    int m6toprank = findrank(ui->M6topcomboBox->currentIndex(), weeknumber);
    int m6botrank = findrank(ui->M6botcomboBox->currentIndex(), weeknumber);
    int m7toprank = findrank(ui->M7topcomboBox->currentIndex(), weeknumber);
    int m7botrank = findrank(ui->M7botcomboBox->currentIndex(), weeknumber);
    int m8toprank = findrank(ui->M8topcomboBox->currentIndex(), weeknumber);
    int m8botrank = findrank(ui->M8botcomboBox->currentIndex(), weeknumber);
    int m9toprank = findrank(ui->M9topcomboBox->currentIndex(), weeknumber);
    int m9botrank = findrank(ui->M9botcomboBox->currentIndex(), weeknumber);
    int m10toprank = findrank(ui->M10topcomboBox->currentIndex(), weeknumber);
    int m10botrank = findrank(ui->M10botcomboBox->currentIndex(), weeknumber);
    int m11toprank = findrank(ui->M11topcomboBox->currentIndex(), weeknumber);
    int m11botrank = findrank(ui->M11botcomboBox->currentIndex(), weeknumber);
    int m12toprank = findrank(ui->M12topcomboBox->currentIndex(), weeknumber);
    int m12botrank = findrank(ui->M12botcomboBox->currentIndex(), weeknumber);
    int m13toprank = findrank(ui->M13topcomboBox->currentIndex(), weeknumber);
    int m13botrank = findrank(ui->M13botcomboBox->currentIndex(), weeknumber);
    int m14toprank = findrank(ui->M14topcomboBox->currentIndex(), weeknumber);
    int m14botrank = findrank(ui->M14botcomboBox->currentIndex(), weeknumber);
    int m15toprank = findrank(ui->M15topcomboBox->currentIndex(), weeknumber);
    int m15botrank = findrank(ui->M15botcomboBox->currentIndex(), weeknumber);
    int m16toprank = findrank(ui->M16topcomboBox->currentIndex(), weeknumber);
    int m16botrank = findrank(ui->M16botcomboBox->currentIndex(), weeknumber);

    ui->M1winval->setText(QString::number(abs(m1toprank-m1botrank)));
    ui->M2winval->setText(QString::number(abs(m2toprank-m2botrank)));
    ui->M3winval->setText(QString::number(abs(m3toprank-m3botrank)));
    ui->M4winval->setText(QString::number(abs(m4toprank-m4botrank)));
    ui->M5winval->setText(QString::number(abs(m5toprank-m5botrank)));
    ui->M6winval->setText(QString::number(abs(m6toprank-m6botrank)));
    ui->M7winval->setText(QString::number(abs(m7toprank-m7botrank)));
    ui->M8winval->setText(QString::number(abs(m8toprank-m8botrank)));
    ui->M9winval->setText(QString::number(abs(m9toprank-m9botrank)));
    ui->M10winval->setText(QString::number(abs(m10toprank-m10botrank)));
    ui->M11winval->setText(QString::number(abs(m11toprank-m11botrank)));
    ui->M12winval->setText(QString::number(abs(m12toprank-m12botrank)));
    ui->M13winval->setText(QString::number(abs(m13toprank-m13botrank)));
    ui->M14winval->setText(QString::number(abs(m14toprank-m14botrank)));
    ui->M15winval->setText(QString::number(abs(m15toprank-m15botrank)));
    ui->M16winval->setText(QString::number(abs(m16toprank-m16botrank)));

    //Calculate and output which team the win value belongs to for each matchup
    QString m1topteam = ui->M1topcomboBox->currentText();
    QString m1botteam = ui->M1botcomboBox->currentText();
    QString m2topteam = ui->M2topcomboBox->currentText();
    QString m2botteam = ui->M2botcomboBox->currentText();
    QString m3topteam = ui->M3topcomboBox->currentText();
    QString m3botteam = ui->M3botcomboBox->currentText();
    QString m4topteam = ui->M4topcomboBox->currentText();
    QString m4botteam = ui->M4botcomboBox->currentText();
    QString m5topteam = ui->M5topcomboBox->currentText();
    QString m5botteam = ui->M5botcomboBox->currentText();
    QString m6topteam = ui->M6topcomboBox->currentText();
    QString m6botteam = ui->M6botcomboBox->currentText();
    QString m7topteam = ui->M7topcomboBox->currentText();
    QString m7botteam = ui->M7botcomboBox->currentText();
    QString m8topteam = ui->M8topcomboBox->currentText();
    QString m8botteam = ui->M8botcomboBox->currentText();
    QString m9topteam = ui->M9topcomboBox->currentText();
    QString m9botteam = ui->M9botcomboBox->currentText();
    QString m10topteam = ui->M10topcomboBox->currentText();
    QString m10botteam = ui->M10botcomboBox->currentText();
    QString m11topteam = ui->M11topcomboBox->currentText();
    QString m11botteam = ui->M11botcomboBox->currentText();
    QString m12topteam = ui->M12topcomboBox->currentText();
    QString m12botteam = ui->M12botcomboBox->currentText();
    QString m13topteam = ui->M13topcomboBox->currentText();
    QString m13botteam = ui->M13botcomboBox->currentText();
    QString m14topteam = ui->M14topcomboBox->currentText();
    QString m14botteam = ui->M14botcomboBox->currentText();
    QString m15topteam = ui->M15topcomboBox->currentText();
    QString m15botteam = ui->M15botcomboBox->currentText();
    QString m16topteam = ui->M16topcomboBox->currentText();
    QString m16botteam = ui->M16botcomboBox->currentText();

    ui->M1teamoutput->setText(teamoutput(m1topteam, m1botteam, m1toprank, m1botrank));
    ui->M2teamoutput->setText(teamoutput(m2topteam, m2botteam, m2toprank, m2botrank));
    ui->M3teamoutput->setText(teamoutput(m3topteam, m3botteam, m3toprank, m3botrank));
    ui->M4teamoutput->setText(teamoutput(m4topteam, m4botteam, m4toprank, m4botrank));
    ui->M5teamoutput->setText(teamoutput(m5topteam, m5botteam, m5toprank, m5botrank));
    ui->M6teamoutput->setText(teamoutput(m6topteam, m6botteam, m6toprank, m6botrank));
    ui->M7teamoutput->setText(teamoutput(m7topteam, m7botteam, m7toprank, m7botrank));
    ui->M8teamoutput->setText(teamoutput(m8topteam, m8botteam, m8toprank, m8botrank));
    ui->M9teamoutput->setText(teamoutput(m9topteam, m9botteam, m9toprank, m9botrank));
    ui->M10teamoutput->setText(teamoutput(m10topteam, m10botteam, m10toprank, m10botrank));
    ui->M11teamoutput->setText(teamoutput(m11topteam, m11botteam, m11toprank, m11botrank));
    ui->M12teamoutput->setText(teamoutput(m12topteam, m12botteam, m12toprank, m12botrank));
    ui->M13teamoutput->setText(teamoutput(m13topteam, m13botteam, m13toprank, m13botrank));
    ui->M14teamoutput->setText(teamoutput(m14topteam, m14botteam, m14toprank, m14botrank));
    ui->M15teamoutput->setText(teamoutput(m15topteam, m15botteam, m15toprank, m15botrank));
    ui->M16teamoutput->setText(teamoutput(m16topteam, m16botteam, m16toprank, m16botrank));

    ui->M1plusval->setText(plusRank(ui->M1topcomboBox->currentIndex(), ui->M1botcomboBox->currentIndex() , weeknumber+1));
    ui->M2plusval->setText(plusRank(ui->M2topcomboBox->currentIndex(), ui->M2botcomboBox->currentIndex() , weeknumber+1));
    ui->M3plusval->setText(plusRank(ui->M3topcomboBox->currentIndex(), ui->M3botcomboBox->currentIndex() , weeknumber+1));
    ui->M4plusval->setText(plusRank(ui->M4topcomboBox->currentIndex(), ui->M4botcomboBox->currentIndex() , weeknumber+1));
    ui->M5plusval->setText(plusRank(ui->M5topcomboBox->currentIndex(), ui->M5botcomboBox->currentIndex() , weeknumber+1));
    ui->M6plusval->setText(plusRank(ui->M6topcomboBox->currentIndex(), ui->M6botcomboBox->currentIndex() , weeknumber+1));
    ui->M7plusval->setText(plusRank(ui->M7topcomboBox->currentIndex(), ui->M7botcomboBox->currentIndex() , weeknumber+1));
    ui->M8plusval->setText(plusRank(ui->M8topcomboBox->currentIndex(), ui->M8botcomboBox->currentIndex() , weeknumber+1));
    ui->M9plusval->setText(plusRank(ui->M9topcomboBox->currentIndex(), ui->M9botcomboBox->currentIndex() , weeknumber+1));
    ui->M10plusval->setText(plusRank(ui->M10topcomboBox->currentIndex(), ui->M10botcomboBox->currentIndex() , weeknumber+1));
    ui->M11plusval->setText(plusRank(ui->M11topcomboBox->currentIndex(), ui->M11botcomboBox->currentIndex() , weeknumber+1));
    ui->M12plusval->setText(plusRank(ui->M12topcomboBox->currentIndex(), ui->M12botcomboBox->currentIndex() , weeknumber+1));
    ui->M13plusval->setText(plusRank(ui->M13topcomboBox->currentIndex(), ui->M13botcomboBox->currentIndex() , weeknumber+1));
    ui->M14plusval->setText(plusRank(ui->M14topcomboBox->currentIndex(), ui->M14botcomboBox->currentIndex() , weeknumber+1));
    ui->M15plusval->setText(plusRank(ui->M15topcomboBox->currentIndex(), ui->M15botcomboBox->currentIndex() , weeknumber+1));
    ui->M16plusval->setText(plusRank(ui->M16topcomboBox->currentIndex(), ui->M16botcomboBox->currentIndex() , weeknumber+1));

    qDebug() << weeknumber;

}

void NSPAT::on_WeekcomboBox_currentIndexChanged(int weeknumber)
{
    //Create an array of length 32 to store the 32 teams.
    int teams[32];// = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    //Populate the team array. l is the index of the team array, j is the team number
    int j=1;
    int l=0;
    while (l < 32)
    {
        if (!isIn(teams, j, 32))
        {
            int team = sFind(j, weeknumber);
            if (sFind(j, weeknumber)!=0)
            {
                if (isHomeTeam(j, weeknumber))
                //if (!isHomeTeam(team, weeknumber))
                //if (!isHomeTeam(j, weeknumber))
                {
                    teams[l]=team; //sFind(j, weeknumber);
                    l++;
                    teams[l]=j;
                    l++;
                }
                else
                {
                    teams[l]=j;
                    l++;
                    teams[l]=team; //sFind(j, weeknumber);
                    l++;
                }
            }
        }
        j++;
        if (j > 32) break;
    }

    ui->M1topcomboBox->setCurrentIndex(teams[0]);
    ui->M1botcomboBox->setCurrentIndex(teams[1]);
    ui->M2topcomboBox->setCurrentIndex(teams[2]);
    ui->M2botcomboBox->setCurrentIndex(teams[3]);
    ui->M3topcomboBox->setCurrentIndex(teams[4]);
    ui->M3botcomboBox->setCurrentIndex(teams[5]);
    ui->M4topcomboBox->setCurrentIndex(teams[6]);
    ui->M4botcomboBox->setCurrentIndex(teams[7]);
    ui->M5topcomboBox->setCurrentIndex(teams[8]);
    ui->M5botcomboBox->setCurrentIndex(teams[9]);
    ui->M6topcomboBox->setCurrentIndex(teams[10]);
    ui->M6botcomboBox->setCurrentIndex(teams[11]);
    ui->M7topcomboBox->setCurrentIndex(teams[12]);
    ui->M7botcomboBox->setCurrentIndex(teams[13]);
    ui->M8topcomboBox->setCurrentIndex(teams[14]);
    ui->M8botcomboBox->setCurrentIndex(teams[15]);
    ui->M9topcomboBox->setCurrentIndex(teams[16]);
    ui->M9botcomboBox->setCurrentIndex(teams[17]);
    ui->M10topcomboBox->setCurrentIndex(teams[18]);
    ui->M10botcomboBox->setCurrentIndex(teams[19]);
    ui->M11topcomboBox->setCurrentIndex(teams[20]);
    ui->M11botcomboBox->setCurrentIndex(teams[21]);
    ui->M12topcomboBox->setCurrentIndex(teams[22]);
    ui->M12botcomboBox->setCurrentIndex(teams[23]);
    ui->M13topcomboBox->setCurrentIndex(teams[24]);
    ui->M13botcomboBox->setCurrentIndex(teams[25]);
    ui->M14topcomboBox->setCurrentIndex(teams[26]);
    ui->M14botcomboBox->setCurrentIndex(teams[27]);
    ui->M15topcomboBox->setCurrentIndex(teams[28]);
    ui->M15botcomboBox->setCurrentIndex(teams[29]);
    ui->M16topcomboBox->setCurrentIndex(teams[30]);
    ui->M16botcomboBox->setCurrentIndex(teams[31]);

/*
    int test[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(isHomeTeam(20, 3)){
    qDebug() << plusRank(20,1,3);
    }
    else{
    qDebug() << "false";
    }
*/
}
