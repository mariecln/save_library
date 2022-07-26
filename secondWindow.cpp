#include "secondWindow.h"

secondWindow::secondWindow() : QWidget()
{
    setFixedSize(500, 120);
    setWindowTitle("Chargement");

     QGridLayout *layout = new QGridLayout;

    QLabel *label_title = new QLabel("Quel est le titre : ",this);
     QLineEdit *m_lineEdit_title = new QLineEdit("Le journal d'Anne Frank");
    QLabel *label_author = new QLabel("Quel est l'auteur : ",this);
    QLineEdit *m_lineEdit_author = new QLineEdit("Anne Frank");
    QPushButton *search = new QPushButton("Recherche", this);

    layout->addWidget(label_title, 0, 0, 1, 2);
    layout->addWidget(m_lineEdit_title, 0, 2, 1, 1);
    layout->addWidget(label_author, 1, 0, 1, 2);
    layout->addWidget(m_lineEdit_author, 1, 2, 1, 1);
    layout->addWidget(search, 1, 0, 1, 2);

    setLayout(layout);

}
