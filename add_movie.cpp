#include "add_movie.h"
#include "ui_add_movie.h"
#include <QObject>

#include <QTextEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSpinBox>
add_movie::add_movie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_movie)
{
    //UI DETAIL
    ui->setupUi(this);
    ui->movieName->setPlaceholderText("Test");
    ui->rating->setMinimum(1);
    ui->rating->setMaximum(6);

    //SET DATABASE
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\C++ project\\app_db\\ocenFilm_db\\app_dp.db");

    // OPEN CONNECTION
    bool dbg = db.open();

    //ERROR CONTROL
    if (dbg ==true)
    {
        ui->label_4->setText("connected!");
        on_saveBtn_clicked();


    }else
    {
        ui->label_4->setText(" db.lastError()");

    }

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


void add_movie::execQuery()
{
    QString movieName = ui->movieName->text();
    QString rating = ui->rating->text();

    QString comment = ui->lineEdit->text();

    //QString query = "INSERT INTO mainTable(movie_name, rating, comment) VALUES(" + movieName + "," + rating + "," + comment +")";
    QSqlQuery execQuery;
    QString qry =  "INSERT INTO mainTable (movie_name, rating, comment) "
                   "VALUES ('"+movieName+"', '"+rating+"', '"+comment+"')";





}


void add_movie::on_saveBtn_clicked()
{
    connect(ui->saveBtn,SIGNAL(clicked()),this,SLOT(execQuery()));
}
