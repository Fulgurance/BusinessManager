#ifndef PHONENUMBERCATEGORY_H
#define PHONENUMBERCATEGORY_H

#include <QString>

class PhoneNumberCategory
{
public:
    PhoneNumberCategory();
private:
    unsigned char id_m;
    QString name_m;
};

#endif // PHONENUMBERCATEGORY_H
