#include "filesplitter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileSplitter w;
    w.show();

    return a.exec();
}
