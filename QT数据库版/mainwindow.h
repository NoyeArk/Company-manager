#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "add.h"
#include "perstl.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static Person get_per(int id);

private slots:
    void on_pushButton_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_DelButton_clicked();

    void on_AddButton_clicked();

    void change_label();

    void refresh();

    void on_btn_refresh_clicked();

    void on_EditButton_clicked();

    void on_selectButton();

    void on_search_clicked();

    void on_cb_job_currentIndexChanged(int index);

    void on_cb_sex_currentIndexChanged(int index);

    void on_cb_grade_currentIndexChanged(int index);

    void on_checkBox_stateChanged(int arg1);

    void on_btn_return_clicked();

private:
    static int click_row;
    static QString ID;
    Ui::MainWindow *ui;
    PerStl* m_pSql;
    Add* ui_add;
};

#endif // MAINWINDOW_H
