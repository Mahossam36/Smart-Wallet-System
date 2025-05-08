#ifndef MAINREAL_H
#define MAINREAL_H

#include <QWidget>

namespace Ui {
class mainReal;
}

class mainReal : public QWidget
{
    Q_OBJECT

public:
    explicit mainReal(QWidget *parent = nullptr);
    ~mainReal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mainReal *ui;
};

#endif // MAINREAL_H
