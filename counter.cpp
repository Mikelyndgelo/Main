#include "counter.h"
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QApplication>

Counter::Counter(QWidget*parent):QWidget(parent)
{
    /*QLabel *label=new QLabel("0");
    label->setFrameStyle(QFrame::Box|QFrame::Raised);
    label->setFixedHeight(40);
    QPushButton *button=new QPushButton("ADD");
    QPushButton *button2=new QPushButton("ADD2");

    QVBoxLayout *VboxLayout=new QVBoxLayout;
    VboxLayout->addWidget(label);
    VboxLayout->addWidget(button2);
    VboxLayout->addWidget(button);

    setLayout(VboxLayout);

    connect(button,SIGNAL(clicked()),SLOT(ChangeValueSLOT()));
    connect(this,SIGNAL(ChangeValue(int)),label,SLOT(setNum(int)));
    connect(this,SIGNAL(goodbay()),qApp,SLOT(quit()));*/
    int size=5;
    QGridLayout *lauout=new QGridLayout;
    lauout->setContentsMargins(1,1,1,1);
    lauout->setSpacing(1);
    int i = 0;
    int j = 0;
   /* for (; i < size; ++i) {
       // for (; j < size; ++j) {
            QPushButton *button=new QPushButton;
            button->setFixedSize(40,40);
            lauout->addWidget(button,j,i);
       // }
    }*/
    QPushButton *button1=new QPushButton();
    lauout->addWidget(button1);
    setLayout(lauout);

    connect(button1,SIGNAL(clicked()),SLOT(Clickbutton()));


}

void Counter::Clickbutton()
{
    QPushButton *button3=new QPushButton;
    button3->show();
}

/*void Counter::ChangeValueSLOT()
{
    QPushButton *button=new QPushButton("ADD");
    button->show();
    if(Value==5)
    {
        emit goodbay();
    }
    else {
        emit ChangeValue(++Value);
    }
}*/

