#ifndef COUNTER_H
#define COUNTER_H

#include<QWidget>



class Counter:public QWidget
{Q_OBJECT
private:
public:
    Counter(QWidget *parent=nullptr);


public slots:
   void Clickbutton();
};



#endif // COUNTER_H


