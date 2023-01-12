#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Botaki2.h"

class Botaki2 : public QMainWindow
{
    Q_OBJECT

public:
    Botaki2(QWidget *parent = nullptr);
    ~Botaki2();

private:
    Ui::Botaki2Class ui;
};
