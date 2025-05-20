#ifndef VIEW_ALL_TRANSACTIONS_H
#define VIEW_ALL_TRANSACTIONS_H

#include <QWidget>

namespace Ui {
class view_all_transactions;
}

class view_all_transactions : public QWidget
{
    Q_OBJECT

public:
    explicit view_all_transactions(QWidget *parent = nullptr);
    ~view_all_transactions();
    void get_transactions();
private slots:
    void on_pushButton_clicked();

    void populateRow(int i);

private:
    Ui::view_all_transactions *ui;
};

#endif // VIEW_ALL_TRANSACTIONS_H
