//=====================================================
//File: age.cpp
//Description: Slider Widget to show age range:
//Compilation instructions:
//Step (1): Go to parent directory (age)
//Step (2): qmake -project
//Step (3): make
//Step (4): Run program with ./age
//======================================================

#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

//Age Application:
int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    //Create new Widget:
    QWidget* window = new QWidget;
    window->setWindowTitle("Enter Your Age"); //Set window title

    //Create instance for spinbox and horizontal slider:
    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    //Set ranges for slider and sprinbox from 0 to 130:
    spinBox->setRange(0, 130);
    slider->setRange(0, 130);

    //QObject::Connect:
    //Synchonize both spinbox and slider to display the same value:
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));

    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));

    //Assign default value for spin box at 35:
    spinBox->setValue(35);

    //Arranges layout to be horizontal (from left to right):
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);


    //Call layout manager on window:
    window->setLayout(layout);

    //Display window
    window->show();

    return app.exec();

}
