#ifndef ADD_H
#define ADD_H

#include <QWidget>
#include "perstl.h"

namespace Ui {
class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

    void setType(bool isAdd, Person p = {});

private slots:
    void on_exit_clicked();

    void on_btn_save_clicked();

    void on_le_id_editingFinished();

private:
    Ui::Add *ui;
    bool m_isAdd;
    Person* m_per;
};

#endif // ADD_H
