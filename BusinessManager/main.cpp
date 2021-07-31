#include <QApplication>

#include "mainwindow.h"
#include "loginwindow.h"
#include "sellwindow.h"

int main(int argc, char *argv[])
{
 QApplication application(argc, argv);
 //MainWindow main_window;
 //main_window.showMaximized();
 LoginWindow login_window;
 //login_window.showMaximized();
 login_window.show();
 //SellWindow sell_window;
 //sell_window.showMaximized();
 return application.exec();
}
