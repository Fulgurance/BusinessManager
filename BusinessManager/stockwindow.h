#ifndef STOCKWINDOW_H
#define STOCKWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QToolButton>
#include <QStandardItemModel>
#include <QTableView>

class StockWindow : public QWidget
{
    Q_OBJECT
public:
    explicit StockWindow(QWidget *parent = nullptr);
private:
    bool alphabetical = true;
    bool ascending_sort = true;
    bool out_of_stock = false;
    QGridLayout *main_layout;
    QLineEdit   *search_panel;
    QToolButton *alphabetical_sort_button;
    QToolButton *ascending_sort_button;
    QToolButton *out_of_stock_button;
    QToolButton *categories_button;
    QTableView  *stock_table;
    void initialize();
    void initialize_pointers();
    void create_layouts();
    void create_interface();
    void connect_slots();
    void create_main_layout();
    void create_search_panel();
    void create_alphabetical_sort_button();
    void create_ascending_sort_button();
    void create_out_of_stock_button();
    void create_categories_button();
    void create_stock_table();
private slots:
    void alphabetical_sort_button_clicked();
    void out_of_stock_button_clicked();
    void ascending_sort_button_clicked();
};

#endif // STOCKWINDOW_H
