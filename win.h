#ifndef WIN_H
#define WIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class win; }
QT_END_NAMESPACE

class win : public QWidget
{
    Q_OBJECT

public:
    win(QWidget *parent = nullptr);
    ~win();

private:
    Ui::win *ui;
};
#endif // WIN_H
