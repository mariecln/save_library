#include <QApplication>
#include "mainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Window first_window;
    first_window.show();

    return app.exec();
}
