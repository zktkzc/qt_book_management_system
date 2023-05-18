#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btn_login_clicked()
{
    setResult(1);
    hide();
}


void Login::on_btn_quit_clicked()
{
    setResult(0);
    hide();
}

