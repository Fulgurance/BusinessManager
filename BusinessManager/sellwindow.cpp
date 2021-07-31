#include "sellwindow.h"

SellWindow::SellWindow(QWidget *parent) : QWidget(parent)
{
    initialize();
    create_interface();
    create_layouts();
}

void SellWindow::initialize()
{
    setWindowTitle("Vente");
    setWindowIcon(QIcon("Pictures/Sell.png"));
    setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    setWindowModality(Qt::ApplicationModal);
    setStyleSheet("background-color: #ffffff; color: #000000");
    initialize_pointers();
    setLayout(main_layout);
}

void SellWindow::initialize_pointers()
{
    main_layout = new QGridLayout;
    shopping_carts_list = new QListView;
    add_shopping_cart_button = new QToolButton;
    remove_shopping_cart_button = new QToolButton;
    shopping_cart = new QTableView;
    barcode_scanner_button = new QToolButton;
    add_product_button = new QToolButton;
    remove_product_button = new QToolButton;
    discount_button = new QToolButton;
    validate_button = new QToolButton;
}

void SellWindow::create_layouts()
{
    create_main_layout();
}

void SellWindow::create_interface()
{
    create_shopping_carts_list();
    create_add_shopping_cart_button();
    create_remove_shopping_cart_button();
    create_shopping_cart();
    create_barcode_scanner_button();
    create_add_product_button();
    create_remove_product_button();
    create_discount_button();
    create_validate_button();
}

void SellWindow::connect_slots()
{

}

void SellWindow::create_main_layout()
{
    main_layout->addWidget(shopping_carts_list,0,0,5,2);
    main_layout->addWidget(add_shopping_cart_button,5,0,1,1);
    main_layout->addWidget(remove_shopping_cart_button,5,1,1,1);
    main_layout->addWidget(shopping_cart,0,2,5,5);
    main_layout->addWidget(barcode_scanner_button,0,7,1,1);
    main_layout->addWidget(add_product_button,1,7,1,1);
    main_layout->addWidget(remove_product_button,2,7,1,1);
    main_layout->addWidget(discount_button,3,7,1,1);
    main_layout->addWidget(validate_button,5,3,1,3);
}

void SellWindow::create_shopping_carts_list()
{
    QStringList list;
    list << "1 - Panier principal";
    QStringListModel model(list);
    shopping_carts_list->setModel(&model);
}

void SellWindow::create_add_shopping_cart_button()
{
    add_shopping_cart_button->setIcon(QIcon("Pictures/Plus.png"));
    add_shopping_cart_button->setIconSize(QSize(48, 48));
    add_shopping_cart_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    add_shopping_cart_button->setText("Ajouter");
    add_shopping_cart_button->setToolTip("Ajouter un panier à la file d'attente");
    add_shopping_cart_button->setFixedSize(QSize(96, 96));
    add_shopping_cart_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_remove_shopping_cart_button()
{
    remove_shopping_cart_button->setIcon(QIcon("Pictures/Minus.png"));
    remove_shopping_cart_button->setIconSize(QSize(48, 48));
    remove_shopping_cart_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    remove_shopping_cart_button->setText("Supprimer");
    remove_shopping_cart_button->setToolTip("Supprimer un panier de la file d'attente");
    remove_shopping_cart_button->setFixedSize(QSize(96, 96));
    remove_shopping_cart_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_shopping_cart()
{
    QStandardItemModel model(3,5);
    shopping_cart->setModel(&model);
}

void SellWindow::create_barcode_scanner_button()
{
    barcode_scanner_button->setIcon(QIcon("Pictures/BarcodeScanner.png"));
    barcode_scanner_button->setIconSize(QSize(48, 48));
    barcode_scanner_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    barcode_scanner_button->setText("Code-Barre");
    barcode_scanner_button->setToolTip("Scanner le code barre d'un article et l'ajouter au panier");
    barcode_scanner_button->setFixedSize(QSize(96, 96));
    barcode_scanner_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_add_product_button()
{
    add_product_button->setIcon(QIcon("Pictures/Plus.png"));
    add_product_button->setIconSize(QSize(48, 48));
    add_product_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    add_product_button->setText("Ajouter");
    add_product_button->setToolTip("Ajouter un article au panier");
    add_product_button->setFixedSize(QSize(96, 96));
    add_product_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_remove_product_button()
{
    remove_product_button->setIcon(QIcon("Pictures/Minus.png"));
    remove_product_button->setIconSize(QSize(48, 48));
    remove_product_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    remove_product_button->setText("Supprimer");
    remove_product_button->setToolTip("Supprimer un article du panier");
    remove_product_button->setFixedSize(QSize(96, 96));
    remove_product_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_discount_button()
{
    discount_button->setIcon(QIcon("Pictures/Discount.png"));
    discount_button->setIconSize(QSize(48, 48));
    discount_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    discount_button->setText("Remises");
    discount_button->setToolTip("Appliquer une remise sur un article ou l'ensemble du panier");
    discount_button->setFixedSize(QSize(96, 96));
    discount_button->setFocusPolicy(Qt::NoFocus);
}

void SellWindow::create_validate_button()
{
    validate_button->setStyleSheet("background-color: #2de349; color: #ffffff; font-weight: bold;");
    validate_button->setText("Valider et Payer");
    validate_button->setToolTip("Valider le panier courant et procéder au paiment");
    validate_button->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Fixed);
    validate_button->setFixedHeight(96);
}
