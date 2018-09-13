#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_movie.h"
#include "del_movie.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Open new window(add_movie)
void MainWindow::on_add_movie_clicked()
{
    add_movie window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_del_movie_clicked()
{
    del_movie window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_exit_clicked()
{

}
