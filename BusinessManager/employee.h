#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

#include "phonenumber.h"

class Employee
{
public:
    Employee();
private:
    unsigned short int id_m;
    QString name_m;
    QVector<PhoneNumber> *phones_number_m;
    QString address_m;
    QString email_m;
};

#endif // EMPLOYEE_H
