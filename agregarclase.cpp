#include "agregarclase.h"
#include "ui_agregarclase.h"
#include"curso.h"
#include"laboratorio.h"
#include"clase.h"
#include<cstring>
#include<iostream>
using namespace std;

AgregarClase::AgregarClase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AgregarClase)
{
    ui->setupUi(this);
}

AgregarClase::~AgregarClase()
{
    delete ui;
}




void AgregarClase::on_comboBoxEleccion_activated(int index)
{
    //index=ui->comboBoxEleccion->currentIndex();
}

void AgregarClase::on_pushButton_clicked()
{
    QString Cod = ui->codigo->text();
    //QString Mat = ui->;
   // QString Hor = ui->h->text();
    bool ok;

    int codigo = Cod.toInt(&ok,16);
    char * nombre = "Luis";
    int matriculados = 10;
    int hora = 1;
    char * instructor="Pedro";
    int no_Laboratorio = 1;
    int aulas= 1;
    int dias=1;
    char * catedratico;

    //laboratorio lab = new laboratorio(codigo,nombre,matriculados,hora,instructor,no_Laboratorio);
    clase * clase1 = new clase(codigo,nombre,matriculados,hora,aulas,dias,catedratico);
    //clase1->imprimir();

   cout<<"Guardado"<<endl;




}
