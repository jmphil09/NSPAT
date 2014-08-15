#ifndef NSPAT_H
#define NSPAT_H

#include <QMainWindow>

namespace Ui {
class NSPAT;
}

class NSPAT : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NSPAT(QWidget *parent = 0);
    ~NSPAT();
    
private slots:
    void on_pushButton_clicked();

    void on_WeekcomboBox_currentIndexChanged(int index);

private:
    Ui::NSPAT *ui;
};

#endif // NSPAT_H
