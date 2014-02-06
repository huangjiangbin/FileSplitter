#ifndef FILESPLITTER_H
#define FILESPLITTER_H

#include <QMainWindow>

namespace Ui {
class FileSplitter;
}

class FileSplitter : public QMainWindow
{
    Q_OBJECT

public:
    explicit FileSplitter(QWidget *parent = 0);
    ~FileSplitter();

private:
    Ui::FileSplitter *ui;
};

#endif // FILESPLITTER_H
