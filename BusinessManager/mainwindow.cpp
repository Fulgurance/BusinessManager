#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    initialize();
    create_interface();
    create_layouts();
    connect_slots();
}

void MainWindow::initialize()
{
    setWindowTitle("Caisse");
    //setWindowIcon(QIcon(""));
    setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    setWindowModality(Qt::ApplicationModal);
    setStyleSheet("background-color: #ffffff; color: #000000");
    initialize_pointers();
    setLayout(main_layout);
}

void MainWindow::initialize_pointers()
{
    main_layout = new QGridLayout;
    sell_button = new QToolButton;
    stock_button = new QToolButton;
    invoices_button = new QToolButton;
    management_groupbox = new QGroupBox;
    management_layout = new QGridLayout;
    products_button = new QToolButton;
    services_button = new QToolButton;
    schedule_button = new QToolButton;
    employees_button = new QToolButton;
    suppliers_button = new QToolButton;
    customers_button = new QToolButton;
    settings_button = new QToolButton;
    help_button = new QToolButton;
    sell_window = new SellWindow;
    stock_window = new StockWindow;
}

void MainWindow::create_layouts()
{
    create_main_layout();
    create_management_layout();
}

void MainWindow::connect_slots()
{
    connect(sell_button,SIGNAL(clicked()),this,SLOT(open_sell_window()));
    connect(stock_button,SIGNAL(clicked()),this,SLOT(open_stock_window()));
}

void MainWindow::create_main_layout()
{
    main_layout->addWidget(sell_button,0,0,3,3);
    main_layout->addWidget(stock_button,0,3,3,3);
    main_layout->addWidget(invoices_button,0,6,3,3);
    main_layout->addWidget(management_groupbox,3,0,4,9);
    main_layout->addWidget(settings_button,7,5,2,2);
    main_layout->addWidget(help_button,7,7,2,2);
}

void MainWindow::create_management_layout()
{
    management_layout->addWidget(products_button,0,0,1,1);
    management_layout->addWidget(services_button,0,1,1,1);
    management_layout->addWidget(schedule_button,0,2,1,1);
    management_layout->addWidget(employees_button,1,0,1,1);
    management_layout->addWidget(suppliers_button,1,1,1,1);
    management_layout->addWidget(customers_button,1,2,1,1);
}

void MainWindow::create_management_groupbox()
{
    management_groupbox->setTitle("Gestion");
    management_groupbox->setLayout(management_layout);
    management_groupbox->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
}

void MainWindow::create_interface()
{
    create_sell_button();
    create_stock_button();
    create_invoices_button();
    create_products_button();
    create_services_button();
    create_schedule_button();
    create_employees_button();
    create_suppliers_button();
    create_customers_button();
    create_settings_button();
    create_help_button();
    create_management_groupbox();
}

void MainWindow::create_sell_button()
{
    sell_button->setIcon(QIcon("Pictures/Sell.png"));
    sell_button->setIconSize(QSize(96, 96));
    sell_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    sell_button->setText("Vente");
    sell_button->setToolTip("Interface de vente");
    sell_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    sell_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_stock_button()
{
    stock_button->setIcon(QIcon("Pictures/Stock.png"));
    stock_button->setIconSize(QSize(96, 96));
    stock_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    stock_button->setText("Stock");
    stock_button->setToolTip("Gestion des stocks");
    stock_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    stock_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_invoices_button()
{
    invoices_button->setIcon(QIcon("Pictures/Invoices.png"));
    invoices_button->setIconSize(QSize(96, 96));
    invoices_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    invoices_button->setText("Factures");
    invoices_button->setToolTip("Consulter des factures");
    invoices_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    invoices_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_products_button()
{
    products_button->setIcon(QIcon("Pictures/Products.png"));
    products_button->setIconSize(QSize(96, 96));
    products_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    products_button->setText("Articles");
    products_button->setToolTip("Gestions des produits");
    products_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    products_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_services_button()
{
    services_button->setIcon(QIcon("Pictures/Services.png"));
    services_button->setIconSize(QSize(96, 96));
    services_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    services_button->setText("Prestations");
    services_button->setToolTip("Gestion des prestations");
    services_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    services_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_schedule_button()
{
    schedule_button->setIcon(QIcon("Pictures/Schedule.png"));
    schedule_button->setIconSize(QSize(96, 96));
    schedule_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    schedule_button->setText("Planning");
    schedule_button->setToolTip("Gestion du planning");
    schedule_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    schedule_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_employees_button()
{
    employees_button->setIcon(QIcon("Pictures/Employees.png"));
    employees_button->setIconSize(QSize(96, 96));
    employees_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    employees_button->setText("Employés");
    employees_button->setToolTip("Gestion des employés");
    employees_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    employees_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_suppliers_button()
{
    suppliers_button->setIcon(QIcon("Pictures/Suppliers.png"));
    suppliers_button->setIconSize(QSize(96, 96));
    suppliers_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    suppliers_button->setText("Fournisseurs");
    suppliers_button->setToolTip("Gestion des fournisseurs");
    suppliers_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    suppliers_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_customers_button()
{
    customers_button->setIcon(QIcon("Pictures/Customers.png"));
    customers_button->setIconSize(QSize(96, 96));
    customers_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    customers_button->setText("Clients");
    customers_button->setToolTip("Gestion des clients");
    customers_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    customers_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_settings_button()
{
    settings_button->setIcon(QIcon("Pictures/Settings.png"));
    settings_button->setIconSize(QSize(96, 96));
    settings_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    settings_button->setText("Paramètres");
    settings_button->setToolTip("Paramètres du logiciel");
    settings_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    settings_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::create_help_button()
{
    help_button->setIcon(QIcon("Pictures/Help.png"));
    help_button->setIconSize(QSize(96, 96));
    help_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    help_button->setText("Aide");
    help_button->setToolTip("Centre d'aide");
    help_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    help_button->setFocusPolicy(Qt::NoFocus);
}

void MainWindow::open_sell_window()
{
    sell_window->showMaximized();
}

void MainWindow::open_stock_window()
{
    stock_window->showMaximized();
}
