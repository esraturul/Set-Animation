#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QDebug>
#include <QRect>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Start_Animation_clicked();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *Animation1;
    QPropertyAnimation *Animation2;
    QPropertyAnimation *Animation3;
    QPropertyAnimation *Animation4;
};
#endif // MAINWINDOW_HPP
