#ifndef EDIT_MOVIE_H
#define EDIT_MOVIE_H

#include <QDialog>

namespace Ui {
class edit_movie;
}

class edit_movie : public QDialog
{
    Q_OBJECT

public:
    explicit edit_movie(QWidget *parent = nullptr);
    ~edit_movie();

private:
    Ui::edit_movie *ui;
};

#endif // EDIT_MOVIE_H
