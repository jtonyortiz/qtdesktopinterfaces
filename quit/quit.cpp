//============================================================
//File: quit.cpp
//Description: Example of PushButton class
//Compile Instructions:
//Step (1): qmake quit.pro
//Step (2): make
//Step (3): run with ./quit
//=============================================================


#include <QApplication> //Add QApplication Lib
#include <QPushButton>  //Add QPushButton Lib


//Application program:
int main(int argc, char *argv[]){
    //Initiate Application
    QApplication app(argc, argv);
    //Create button with PushButton class:
    QPushButton *button = new QPushButton("Quit");
    //Emit Qt Signal, when signal is emitted the slot is executed
    //in this example quit is executed
    QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));
    //Display the button
    button->show();
    //Conclude execution, return memeory back to operating system:
    return app.exec();
}
