#include "del_movie.h"
#include "ui_del_movie.h"

del_movie::del_movie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::del_movie)
{
    ui->setupUi(this);
}

del_movie::~del_movie()
{
    delete ui;
}

void del_movie::exitSlot()
{
    del_movie::close();
}

void del_movie::on_exit_btn_clicked()
{
    connect(ui->exit_btn,SIGNAL(clicked()),this,SLOT(exitSlot()));
}
