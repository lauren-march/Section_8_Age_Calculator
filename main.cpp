#include <QtCore/QCoreApplication>
#include "AgeCalc.h"

void print(AgeCalc &person)
{
    qInfo() << "Your name is: " << person.getName().toUtf8().constData();
    qInfo() << "Here's your age in some animals I guess.";
    qInfo() << "Dog years: " << person.dogYears();
    qInfo() << "Cat years: " << person.catYears();
    qInfo() << "Human years: " << person.humanYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc mac;

    mac.setAge(36);
    mac.setName("Mac");

    print(mac);
    

    return a.exec();
}
