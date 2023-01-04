#ifndef STE_H
#define STE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class STE; }
QT_END_NAMESPACE

class STE : public QMainWindow
{
    Q_OBJECT

public:
    STE(QWidget *parent = nullptr);
    ~STE();

private:
    Ui::STE *ui;
};
#endif // STE_H
