#include "addobjectdialog.h"
#include "ui_addobjectdialog.h"

AddObjectDialog::AddObjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddObjectDialog)
{
    ui->setupUi(this);
}

AddObjectDialog::~AddObjectDialog()
{
    delete ui;
}
