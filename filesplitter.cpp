#include "filesplitter.h"
#include "ui_filesplitter.h"

FileSplitter::FileSplitter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileSplitter)
{
    ui->setupUi(this);
}

FileSplitter::~FileSplitter()
{
    delete ui;
}
