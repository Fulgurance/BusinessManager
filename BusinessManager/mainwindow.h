#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QToolButton>
#include <QGroupBox>

#include "sellwindow.h"
#include "stockwindow.h"

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QGridLayout *main_layout;
    QToolButton *sell_button;
    QToolButton *stock_button;
    QToolButton *invoices_button;
    QGroupBox   *management_groupbox;
    QGridLayout *management_layout;
    QToolButton *products_button;
    QToolButton *services_button;
    QToolButton *schedule_button;
    QToolButton *employees_button;
    QToolButton *suppliers_button;
    QToolButton *customers_button;
    QToolButton *settings_button;
    QToolButton *help_button;
    SellWindow  *sell_window;
    StockWindow *stock_window;
    void initialize();
    void initialize_pointers();
    void create_layouts();
    void create_interface();
    void connect_slots();
    void create_main_layout();
    void create_management_layout();
    void create_management_groupbox();
    void create_sell_button();
    void create_stock_button();
    void create_invoices_button();
    void create_products_button();
    void create_services_button();
    void create_schedule_button();
    void create_employees_button();
    void create_suppliers_button();
    void create_customers_button();
    void create_settings_button();
    void create_help_button();
private slots:
    void open_sell_window();
    void open_stock_window();
};

#endif // MAINWINDOW_H
