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
    void choixRep1();
    void choixRep2();

    private:
    QPushButton *m_boutonDialogue;
    QString *main_repertoire;
    QString *sort_repertoire;
    QLabel *m_rep1;
    QLabel *m_rep2;
    int nbProgressBar;
    QSqlDatabase dbBook;

};

#endif // MAINWINDOW_H
