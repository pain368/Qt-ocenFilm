#include "add_movie.h"
#include "ui_add_movie.h"
#include <QObject>

add_movie::add_movie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_movie)
{


    ui->setupUi(this);
}

add_movie::~add_movie()
{
    delete ui;
}
void add_movie::exitSlot()
{
   add_movie::close();
}


void add_movie::on_exitBtn_clicked()
{
    connect(ui->exitBtn, SIGNAL(clicked()),this,SLOT(exitSlot()));
}


