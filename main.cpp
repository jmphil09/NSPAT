#include <QtGui/QApplication>

#include "nspat.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NSPAT w;
    w.show();
    
    return a.exec();
}
