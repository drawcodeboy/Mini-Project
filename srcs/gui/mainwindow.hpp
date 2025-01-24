#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    
public:
    explicit MainWindow(QWidget *parent = nullptr); // Constructor
    // explicit prevents implicit type conversions for the arguments when a constructor is called.
    ~MainWindow(); // Destructor
};

#endif