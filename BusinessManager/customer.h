#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QString>

#include "phonenumber.h"

class Customer
{
public:
    Customer();
private:
    unsigned short int id_m;
    QString name_m;
    QVector<PhoneNumber> *phones_number_m;
    QString address_m;
    QString email_m;
};

#endif // CUSTOMER_H
