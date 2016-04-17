#ifndef CLIENTINPUT_H
#define CLIENTINPUT_H

#include <QWidget>
//#include <string>
#include <QString>
#include <vector>
#include <QLineEdit>
#include <QComboBox>
namespace Ui {
class ClientInput;
}

class ClientInput : public QWidget
{
    Q_OBJECT

public:
    explicit ClientInput(QWidget *parent = 0);
    ~ClientInput();
//    int clientNum();
    QString getClient(int idx){
        if(idx<4) return prefixs[idx]->currentText()+names[idx]->text();
    }
private:
    Ui::ClientInput *ui;
    std::vector<QLineEdit*> names;
    std::vector<QComboBox*> prefixs;
};

#endif // CLIENTINPUT_H
