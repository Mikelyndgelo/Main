#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<QWidget>

class QPushButton;
class QLCDNumber;

class Calculator:public QWidget
{Q_OBJECT
private:

public:
    Calculator();
    void calculator();

};

#endif // CALCULATOR_H
