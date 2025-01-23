#include "mainwindow.hpp"

// define Class Method

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Simple Window");
    resize(800, 600);
}

MainWindow::~MainWindow()
{
    
}