#ifndef SELLWINDOW_H
#define SELLWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QStringList>
#include <QListView>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QTableView>
#include <QToolButton>

class SellWindow : public QWidget
{
    Q_OBJECT
public:
    explicit SellWindow(QWidget *parent = nullptr);
private:
    QGridLayout *main_layout;
    QListView   *shopping_carts_list;
    QToolButton *add_shopping_cart_button;
    QToolButton *remove_shopping_cart_button;
    QTableView  *shopping_cart;
    QToolButton *barcode_scanner_button;
    QToolButton *add_product_button;
    QToolButton *remove_product_button;
    QToolButton *discount_button;
    QToolButton *validate_button;
    void initialize();
    void initialize_pointers();
    void create_layouts();
    void create_interface();
    void connect_slots();
    void create_main_layout();
    void create_shopping_carts_list();
    void create_add_shopping_cart_button();
    void create_remove_shopping_cart_button();
    void create_shopping_cart();
    void create_barcode_scanner_button();
    void create_add_product_button();
    void create_remove_product_button();
    void create_discount_button();
    void create_validate_button();
private slots:
};

#endif // SELLWINDOW_H
