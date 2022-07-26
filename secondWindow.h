#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include <QtSql>

using namespace std;

class secondWindow : public QWidget
{
    Q_OBJECT

    public:
    secondWindow();
    void Result();

    private:


};

#endif // SECONDWINDOW_H
