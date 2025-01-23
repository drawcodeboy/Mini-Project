#include <QCoreApplication>
#include <QDebug>
#include <QApplication>
#include <QWidget>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    QWidget window;

    window.resize(400, 300);

    window.setWindowTitle("Qt Window");

    window.show();

    qDebug() << "Qt library is working!";
    return app.exec();
}