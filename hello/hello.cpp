//===================================================
//Project: hello
//File Name: hello.cpp
//Description: Basic Qt demo app
//Compile Steps to compile and run from terminal:
//Step (1): Go to parent directory (eg. "hello")
//Step (2): qmake hello.pro
//Step (3): make
//Step (4): ./hello
//====================================================


#include <QApplication> //Includes Application Lib
#include <QLabel> //Includes QLabel Lib


//Application
int main(int argc, char *argv[]){
    //Create QApplication object to manage app resources:
    QApplication app(argc, argv);
    //Create QLabel widget that displays Hello Qt!
    QLabel *label = new QLabel("<h2><i>Hello</i>"
                               "<font color=red> Qt!</font></h2>");
    //show() allows the label to be visible:
    label->show();
    //passes control of the app on to qt:
    return app.exec();
}
