#include <QCoreApplication>
#include "my_osm.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyOSM *myOsm = new MyOSM();

    return a.exec();
}

