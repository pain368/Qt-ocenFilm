#ifndef ADD_MOVIE_H
#define ADD_MOVIE_H

#include <QDialog>

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


    void on_exitBtn_clicked();
    void exitSlot();

private:
    Ui::add_movie *ui;
};

#endif // ADD_MOVIE_H
