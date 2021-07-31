#include "stockwindow.h"

StockWindow::StockWindow(QWidget *parent) : QWidget(parent)
{
    initialize();
    create_interface();
    create_layouts();
    connect_slots();
}

void StockWindow::initialize()
{
    setWindowTitle("Stock");
    setWindowIcon(QIcon("Pictures/Stock.png"));
    setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    setWindowModality(Qt::ApplicationModal);
    setStyleSheet("background-color: #ffffff; color: #000000");
    initialize_pointers();
    setLayout(main_layout);
}

void StockWindow::initialize_pointers()
{
    main_layout = new QGridLayout;
    search_panel = new QLineEdit;
    alphabetical_sort_button = new QToolButton;
    ascending_sort_button = new QToolButton;
    out_of_stock_button = new QToolButton;
    categories_button = new QToolButton;
    stock_table = new QTableView;
}

void StockWindow::create_layouts()
{
    create_main_layout();
}

void StockWindow::create_interface()
{
    create_search_panel();
    create_alphabetical_sort_button();
    create_ascending_sort_button();
    create_out_of_stock_button();
    create_categories_button();
    create_stock_table();
}

void StockWindow::connect_slots()
{
    connect(alphabetical_sort_button,SIGNAL(clicked()),this,SLOT(alphabetical_sort_button_clicked()));
    connect(out_of_stock_button,SIGNAL(clicked()),this,SLOT(out_of_stock_button_clicked()));
    connect(ascending_sort_button,SIGNAL(clicked()),this,SLOT(ascending_sort_button_clicked()));
}

void StockWindow::create_main_layout()
{
    main_layout->addWidget(search_panel,0,0,1,9);
    main_layout->addWidget(alphabetical_sort_button,1,0,1,1);
    main_layout->addWidget(ascending_sort_button,1,1,1,1);
    main_layout->addWidget(out_of_stock_button,1,2,1,1);
    main_layout->addWidget(categories_button,1,3,1,1);
    main_layout->addWidget(stock_table,2,0,9,9);
}

void StockWindow::create_search_panel()
{
    search_panel->setPlaceholderText("Tapez votre recherche ici");
    search_panel->setToolTip("Saisir le nom complet ou partiel d'un produit à rechercher");
}

void StockWindow::create_alphabetical_sort_button()
{
    alphabetical_sort_button->setIcon(QIcon("Pictures/AlphabeticalSort.png"));
    alphabetical_sort_button->setIconSize(QSize(48, 48));
    alphabetical_sort_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    alphabetical_sort_button->setText("Alphabétique");
    alphabetical_sort_button->setToolTip("Trier par ordre alphabétique");
    alphabetical_sort_button->setFixedSize(QSize(96, 96));
    alphabetical_sort_button->setFocusPolicy(Qt::NoFocus);
}

void StockWindow::create_ascending_sort_button()
{
    ascending_sort_button->setIcon(QIcon("Pictures/AscendingSort.png"));
    ascending_sort_button->setIconSize(QSize(48, 48));
    ascending_sort_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ascending_sort_button->setText("Croissant");
    ascending_sort_button->setToolTip("Trier par ordre croissant");
    ascending_sort_button->setFixedSize(QSize(96, 96));
    ascending_sort_button->setFocusPolicy(Qt::NoFocus);
}

void StockWindow::create_out_of_stock_button()
{
    out_of_stock_button->setIcon(QIcon("Pictures/Available.png"));
    out_of_stock_button->setIconSize(QSize(48, 48));
    out_of_stock_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    out_of_stock_button->setText("Disponible");
    out_of_stock_button->setToolTip("Afficher uniquement les produits disponibles");
    out_of_stock_button->setFixedSize(QSize(96, 96));
    out_of_stock_button->setFocusPolicy(Qt::NoFocus);
}

void StockWindow::create_categories_button()
{
    categories_button->setIcon(QIcon("Pictures/Categories.png"));
    categories_button->setIconSize(QSize(48, 48));
    categories_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    categories_button->setText("Catégories");
    categories_button->setToolTip("Afficher uniquement les produits appartenant à une catégorie particulière");
    categories_button->setFixedSize(QSize(96, 96));
    categories_button->setFocusPolicy(Qt::NoFocus);
}

void StockWindow::create_stock_table()
{
    QStandardItemModel model(3,5);
    stock_table->setModel(&model);
}

void StockWindow::alphabetical_sort_button_clicked()
{
    alphabetical = !alphabetical;
    if (alphabetical)
    {
        alphabetical_sort_button->setIcon(QIcon("Pictures/AlphabeticalSort.png"));
        alphabetical_sort_button->setText("Alphabétique");
        alphabetical_sort_button->setToolTip("Trier par ordre alphabétique");
    }
    else
    {
        alphabetical_sort_button->setIcon(QIcon("Pictures/NumericalSort.png"));
        alphabetical_sort_button->setText("Numérique");
        alphabetical_sort_button->setToolTip("Trier par ordre numérique");
    }
}

void StockWindow::out_of_stock_button_clicked()
{
    out_of_stock = !out_of_stock;
    if (out_of_stock)
    {
        out_of_stock_button->setIcon(QIcon("Pictures/OutOfStock.png"));;
        out_of_stock_button->setText("Rupture");
        out_of_stock_button->setToolTip("Afficher uniquement les produits en rupture de stock");
    }
    else
    {
        out_of_stock_button->setIcon(QIcon("Pictures/Available.png"));;
        out_of_stock_button->setText("Disponible");
        out_of_stock_button->setToolTip("Afficher uniquement les produits disponibles");
    }
}

void StockWindow::ascending_sort_button_clicked()
{
    ascending_sort = !ascending_sort;
    if (ascending_sort)
    {
        ascending_sort_button->setIcon(QIcon("Pictures/AscendingSort.png"));
        ascending_sort_button->setText("Croissant");
        ascending_sort_button->setToolTip("Trier par ordre croissant");
    }
    else
    {
        ascending_sort_button->setIcon(QIcon("Pictures/DescendingSort.png"));
        ascending_sort_button->setText("Décroissant");
        ascending_sort_button->setToolTip("Trier par ordre décroissant");
    }
}
