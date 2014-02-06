#include "viewsplit.h"
#include "ui_viewsplit.h"

ViewSplit::ViewSplit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewSplit)
{
    ui->setupUi(this);
}

ViewSplit::~ViewSplit()
{
    delete ui;
}
