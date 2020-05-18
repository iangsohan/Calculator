#ifndef CALCULATORGUI_H
#define CALCULATORGUI_H

#include <QtWidgets/QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorGUI; }
QT_END_NAMESPACE

class CalculatorGUI : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorGUI(QWidget *parent = nullptr);
    ~CalculatorGUI();

private:
    Ui::CalculatorGUI *ui;
    QPushButton *buttons[30];

private slots:
    void ButtonPressed();

};
#endif // CALCULATORGUI_H
