#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

#include "supplier.h"

class Product
{
public:
    Product();
private:
    unsigned short int id_m;
    QString name_m;
    unsigned char category_id_m;
    unsigned int sell_price_tax_exclusive_m;
    unsigned int buy_price_tax_exclusive_m;
    unsigned int sell_price_tax_included_m;
    unsigned int buy_price_tax_included_m;
    QString location_number_m;
    unsigned int stock_quantity_m;
    unsigned short int supplier_id_m;
};

#endif // PRODUCT_H
