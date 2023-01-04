#include "ste.h"
#include "../ui/ui_ste.h"

STE::STE(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::STE)
{
    ui->setupUi(this);
}

STE::~STE()
{
    delete ui;
}

