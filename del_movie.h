#ifndef DEL_MOVIE_H
#define DEL_MOVIE_H

#include <QDialog>

namespace Ui {
class del_movie;
}

class del_movie : public QDialog
{
    Q_OBJECT

public:
    explicit del_movie(QWidget *parent = nullptr);
    ~del_movie();

private slots:
    void on_exit_btn_clicked();
    void exitSlot();

private:
    Ui::del_movie *ui;
};

#endif // DEL_MOVIE_H
