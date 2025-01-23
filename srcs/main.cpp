#include <QCoreApplication>
#include <QDebug>

int main(int argc, char* argv[]){
    QCoreApplication app(argc, argv);

    qDebug() << "Qt library is working!";
    return app.exec();
}