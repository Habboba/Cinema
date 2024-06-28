#include "loginwindow.h"
#include "./ui_loginwindow.h"
# include "welcomewindow.h"
#include "registerwindow.h"
#include "Users.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString user = ui-> lineEdit_username -> text();
    QString pass = ui-> lineEdit_password -> text();
    for(int i=0; i<100; i++){
    if(user != usernamess[i] && pass != passwordss[i])
    {
        ui-> label_error -> text();
        ui->label_error->setVisible(true);
    }
    else{
        hide();
        WelcomeWindow* welcome = new WelcomeWindow(this);
        welcome-> show();

    }
    }

}


void LoginWindow::on_pushButton_register_clicked()
{
    QString user = ui-> lineEdit_username -> text();
    QString pass = ui-> lineEdit_password -> text();
    if(user == ""|| pass == "")
    {
        hide();
        RegisterWindow* regis = new RegisterWindow(this);
        regis->show();
      //  regis-> setvalues
    }
}

