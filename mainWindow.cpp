#include "mainWindow.h"
#include "secondWindow.h"

Window::Window() : QWidget()
{
    setFixedSize(500, 120);
    setWindowTitle("Librairie");

    // Instanciation de la variable membre dbMeteo
    dbBook = QSqlDatabase::addDatabase("QMYSQL");

    // Définition des paramètres de connexion à la base de données
    dbBook.setHostName("192.168.8.19"); // @ip serveur MySQL
    dbBook.setDatabaseName("Livre"); // Nom de la base
    dbBook.setUserName("sd"); // Nom utilisateur
    dbBook.setPassword("12345"); // Mot de passe

    // Création du layout de formulaire et de ses widgets

    QPushButton *boutonRep1 = new QPushButton("Recherche dans la librairie", this);
    QPushButton *boutonRep2 = new QPushButton("Sauvegarde de la librairie", this);

    // Création du layout principal
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(boutonRep1, 0, 1, 1, 1);
    layout->addWidget(boutonRep2, 1, 1, 1, 1);;

    setLayout(layout);

    connect(boutonRep1, SIGNAL(clicked()), this, SLOT(choixRep1()));
    connect(boutonRep2, SIGNAL(clicked()), this, SLOT(choixRep2()));

}

void Window::choixRep1()
{
    secondWindow *second_window = new secondWindow;
    second_window->show();

    if(dbBook.open()) {
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
    }

}

void Window::choixRep2()
{

}
