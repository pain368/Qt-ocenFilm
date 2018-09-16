#ifndef ADD_MOVIE_H
#define ADD_MOVIE_H

#include <QDialog>
#include <QSqlDatabase>
namespace Ui {
class add_movie;
}

class add_movie : public QDialog
{
    Q_OBJECT

public:
    explicit add_movie(QWidget *parent = nullptr);

    ~add_movie();

private slots:

    void execQuery();
    void on_exitBtn_clicked();
    void exitSlot();


    void on_saveBtn_clicked();

private:
    Ui::add_movie *ui;
    QSqlDatabase * db;
};

#endif // ADD_MOVIE_H
