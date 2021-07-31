#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <QString>

class PhoneNumber
{
public:
    PhoneNumber();
private:
    QString number_m;
    unsigned char category_id_m;
};

#endif // PHONENUMBER_H
