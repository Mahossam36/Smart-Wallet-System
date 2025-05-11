#ifndef MYCUSTOMROW1_H
#define MYCUSTOMROW1_H

#include <QWidget>
using namespace std;

namespace Ui {
class MyCustomRow1;
}

class MyCustomRow1 : public QWidget
{
    Q_OBJECT

public:
    explicit MyCustomRow1(const string &uname,const string &phone,double balance,QWidget *parent = nullptr);

    //getters

    QString getUsername() const;
    QString getPhone() const;
    QString getBalance() const;
    void updateFields(const std::string& phone, double balance);

    ~MyCustomRow1();

private:
    Ui::MyCustomRow1 *ui;
};

#endif // MYCUSTOMROW1_H
