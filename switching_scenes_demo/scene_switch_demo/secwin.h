#ifndef SECWIN_H
#define SECWIN_H

#include <QWidget>

namespace Ui {
class secWin;
}

class secWin : public QWidget
{
    Q_OBJECT

public:
    explicit secWin(QWidget *parent = nullptr);
    ~secWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::secWin *ui;
};

#endif // SECWIN_H
