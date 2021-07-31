#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <QString>

#include "phonenumber.h"

class Supplier
{
public:
    Supplier();
private:
    unsigned short int id_m;
    QString name_m;
    QVector<PhoneNumber> *phones_number_m;
    QString address_m;
    QString email_m;
};

#endif // SUPPLIER_H
