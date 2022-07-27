#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFormLayout>
#include <QtSql>


using namespace std;

class Window : public QWidget // On hérite de QWidget (IMPORTANT)
{
    Q_OBJECT

    public:
    Window();

    public slots:
    void selectSearch();
    void selectSave();

    protected:
    QSqlDatabase dbBook;

};

#endif // MAINWINDOW_H
