#ifndef APPROVEREQUESTWIN_H
#define APPROVEREQUESTWIN_H

#include <QWidget>
#include <unordered_map>
#include "QListWidgetItem"
using namespace std;

namespace Ui {
class approveRequestWin;
}

class approveRequestWin : public QWidget
{
    Q_OBJECT

public:
    explicit approveRequestWin(QWidget *parent = nullptr);
    ~approveRequestWin();
    void showListOfRequests();


private slots :
    void handleAccept(int transactionId);
    void handleReject(int transactionId);




    void on_backButton_clicked();

private:
    Ui::approveRequestWin *ui;
    unordered_map<int, QListWidgetItem*> itemMap;

};

#endif // APPROVEREQUESTWIN_H
