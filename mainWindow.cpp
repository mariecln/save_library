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

    QPushButton *boutonSearch = new QPushButton("Recherche dans la librairie", this);
    QPushButton *boutonSave = new QPushButton("Sauvegarde de la librairie", this);

    // Création du layout principal
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(boutonSearch, 0, 1, 1, 1);
    layout->addWidget(boutonSave, 1, 1, 1, 1);;

    setLayout(layout);

    connect(boutonSearch, SIGNAL(clicked()), this, SLOT(selectSearch()));
    connect(boutonSave, SIGNAL(clicked()), this, SLOT(selectSave()));

}

void Window::selectSearch()
{
    secondWindow *second_window = new secondWindow;
    second_window->show();
}

void Window::selectSave()
{

}
