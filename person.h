#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QDate>

class Person
{
public:
    QString name;
    QString sex;
    QDate birthDay;

    Person();
    Person(QString name, QString sex, QDate birthDay);
};

#endif // PERSON_H
