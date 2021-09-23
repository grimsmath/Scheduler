#include <QApplication>
#include <QTranslator>
#include <QStyleFactory>

#include "mainwindow.h"
#include "configloader.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ConfigLoader* config = new ConfigLoader;
    app.setStyle(QStyleFactory::create("fusion"));

    MainWindow mainWindow(config);
    mainWindow.show();

    return app.exec();
}
