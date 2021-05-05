#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opz.h>
#include <steck.h>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

class Variables{
public:
    double value;
    QChar name;
};

static Variables* arra = new Variables[15];
static QString strokaInput;
static int countVariables = 0;
C2Ppn STROKA;
void MainWindow::on_inputExpression_clicked()
{
    strokaInput=ui->lineEdit->displayText();
    STROKA.convert(strokaInput);

    for (int i = 0, j = 0; i < strokaInput.size(); i++)
    {
        QChar currentSymbol = strokaInput[i];
        if ( currentSymbol != '+' && currentSymbol != '-' && currentSymbol != '*' && currentSymbol != '/' && currentSymbol != '(' && currentSymbol != ')')
        {
            arra[j].name = currentSymbol;
            ui->comboBox->addItem(currentSymbol);
            j++;
            countVariables = j;
        }
    }
    ui->listWidget->addItem(STROKA.get_str_out());

}

//QString counting (QChar sign, )
double indexzVariables (QChar Variable)
{
    for (int i = 0; i < countVariables; ++i)
    {
        if (arra[i].name == Variable)
        {
            return arra[i].value;
        }
    }
    return 0;
}

QString answer(QString OPZ)
{
    STACK<QChar> stakn;

    for (int i = 0; i < OPZ.size(); ++i)
    {
        QChar currentSymbol = OPZ[i];
         if (stakn.Head()=='l')
             break;
        double n1 = 0;
        double n2 = 0;
        double res = 0;
        if (currentSymbol != '+' && currentSymbol != '-' && currentSymbol != '*' && currentSymbol != '/' && currentSymbol != '(' && currentSymbol != ')'  )
        {
            stakn.push(currentSymbol);
        }
        else
        {
            n2 = indexzVariables(stakn.pop());
            n1 = indexzVariables(stakn.pop());

            char currSymbolInChar = currentSymbol.unicode();
            switch (currSymbolInChar)
            {
                case '+' : res=n1+n2;break;
            case '-' : res=n1-n2;break;
            case '*' : res=n1*n2;break;
            case '/' : res=n1/n2;break;
         //   default: QMessageBox::warning(QMainWindow, "CURRENTVALUE", "ERROR");
            }
            QChar digit = (QChar) countVariables;
            arra[countVariables].name = digit;
            stakn.push(arra[countVariables].name);
            arra[countVariables].value=res;
            countVariables++;
        }

    }
    return stakn.pop();
}

void MainWindow::on_pushButton_clicked()
{
  // QMessageBox::information(this, "CURRENTINDEX", QString::number(ui->comboBox->currentIndex()));
    arra[ui->comboBox->currentIndex()].value=ui->lineEdit_2->displayText().toDouble();
  //  QMessageBox::information(this, "CURRENTVALUE", QString::number(arra[ui->comboBox->currentIndex()].value));
    ui->listWidget_2->clear();
    QString labl = arra[ui->comboBox->currentIndex()].name;
    labl+=" = ";
    labl+=QString::number(arra[ui->comboBox->currentIndex()].value);
    ui->listWidget_2->addItem(labl);
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit_2->displayText() =QString::number(arra[ui->comboBox->currentIndex()].value);

}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

    //ui->lineEdit_2->displayText() = QString::number(arra[ui->comboBox->currentIndex()].value);
    //QMessageBox::information(this, "s", "CHANGED");
    try{
        ui->listWidget_2->clear();
    QString labl = arra[ui->comboBox->currentIndex()].name;
    labl+=" = ";
    labl+=QString::number(arra[ui->comboBox->currentIndex()].value);
    ui->listWidget_2->addItem(labl);
    }
    catch(QRegularExpression){

    };
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    QString otvet =answer(STROKA.get_str_out());
    otvet = QString::number(arra[countVariables-1].value);
    QMessageBox::warning(this, otvet, otvet);
     ui->listWidget->addItem(otvet);
  //   ui->lcdNumber->display(otvet);
}

static int xz = 20, yz = 20, zz = 118, xyzz = 23;
void MainWindow::on_dial_valueChanged()
{
    ui-> progressBar->setGeometry(QRect(xz,yz, zz++, xyzz++));
   // ui->progressBar->valueChanged(xz);
 //   ui->progressBar->size()
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->listWidget->addItem(answer(ui->lineEdit->displayText()));
}

void MainWindow::on_pushButton_4_clicked()
{

if (!ui->calendarWidget->isVisible())
{
    ui->calendarWidget->show();
}
else
ui->calendarWidget->hide();
}

void MainWindow::on_dial_sliderReleased()
{
 QMessageBox::information(this, "you pashuk...", QString::number(xz));
}
