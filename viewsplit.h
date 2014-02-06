#ifndef VIEWSPLIT_H
#define VIEWSPLIT_H

#include <QWidget>

namespace Ui {
class ViewSplit;
}

class ViewSplit : public QWidget
{
    Q_OBJECT

public:
    explicit ViewSplit(QWidget *parent = 0);
    ~ViewSplit();

private:
    Ui::ViewSplit *ui;
};

#endif // VIEWSPLIT_H
