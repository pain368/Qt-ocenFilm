#include "edit_movie.h"
#include "ui_edit_movie.h"

edit_movie::edit_movie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_movie)
{
    ui->setupUi(this);
}

edit_movie::~edit_movie()
{
    delete ui;
}
