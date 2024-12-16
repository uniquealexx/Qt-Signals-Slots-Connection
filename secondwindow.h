#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QWidget>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private:
    Ui::SecondWindow *ui;

public slots:
    void secondSlot(QString str);

signals:
    void secondSignal(QString);
private slots:
    void on_pushButton_clicked();
};

#endif // SECONDWINDOW_H
