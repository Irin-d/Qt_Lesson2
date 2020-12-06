#include "person.h"

Person::Person() {}

Person::Person(QString name, QString sex, QDate birthDay)
{
    this->name = name;
    this->sex = sex;
    this->birthDay = birthDay;
}
