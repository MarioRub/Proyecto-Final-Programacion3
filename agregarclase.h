#ifndef AGREGARCLASE_H
#define AGREGARCLASE_H

#include <QMainWindow>
#include "clase.h"
namespace Ui {
class AgregarClase;
}

class AgregarClase : public QMainWindow
{
    Q_OBJECT

public:
    explicit AgregarClase(QWidget *parent = 0);
    ~AgregarClase();

private slots:
    void on_comboBoxEleccion_activated(const QString &arg1);

    void on_comboBoxEleccion_currentIndexChanged(int index);

    void on_comboBoxEleccion_activated(int index);

    void on_pushButton_clicked();

private:
    Ui::AgregarClase *ui;
};

#endif // AGREGARCLASE_H
