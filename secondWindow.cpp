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
    layout->addWidget(search, 2, 0, 1, 3);

    setLayout(layout);

    connect(search, SIGNAL(clicked()), this, SLOT(Result()));

}

void secondWindow::Result()
{
    /*if(dbBook.open()) {
        qDebug() << "Ok - ouverture de la base de donnée";

        // Exécution d'une requête
        QSqlQuery requete;
        if(requete.exec("SELECT * FROM Meteo")) {
            qDebug() << "Ok - requete";

            // Boucle qui permet de parcourir les enregistrements renvoyés par la requête
            while(requete.next()) {
                // On accède ici aux différents champs par leurs noms, il est également possible
                // d'y accéder par leur index : requete.value(0)
                qDebug() << requete.value("Date") << " " << requete.value("Temp1") << " "
                << requete.value("Temp2") << " " << requete.value("Pression")
                << requete.value("Humidite ");
            }
        }
        else {
            qDebug() << "Echec de la requête";
            // La méthode lastError permet d'afficher un message
            // plus explicite sur les causes de l'erreur
            qDebug() << requete.lastError();
        }
        dbBook.close(); // Fermeture de la base de données
    }

    else {
        qDebug() << "Echec d'ouverture de la base de donnée";
        qDebug() << dbBook.lastError();
    }*/
}

