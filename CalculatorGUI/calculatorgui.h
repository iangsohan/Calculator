#ifndef CALCULATORGUI_H
#define CALCULATORGUI_H

#include <QMainWindow>

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

private slots:
    void ButtonPressed();

};
#endif // CALCULATORGUI_H
