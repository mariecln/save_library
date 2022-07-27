#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include "mainWindow.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include <QtSql>
#include <QMessageBox>

using namespace std;

class secondWindow : public Window
{
    Q_OBJECT

    public:
    secondWindow();
    void Result();

    private slots :
    void on_pushButton_clicked();

    private:
    QLineEdit *m_lineEdit_title;
    QLineEdit *m_lineEdit_author;


};

#endif // SECONDWINDOW_H
