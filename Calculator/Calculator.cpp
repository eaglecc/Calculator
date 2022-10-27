#include "Calculator.h"

#include <QString>
#include <QDebug>

//����ģʽʵ�ּ�����
Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    textPanel = "";
    operand1 = 0.0;
    operand2 = 0.0;
    operat_flag = 0;
    ui.resultText->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number0->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number1->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number2->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number3->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number4->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number5->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number6->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number7->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number8->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.number9->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.clearbtn->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.operatorAdd->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.operatorSub->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.operatorMul->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.operatorDiv->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.operatorResult->setFont(QFont("YouYuan", 20, QFont::Bold));
    ui.dot->setFont(QFont("YouYuan", 20, QFont::Bold));
    //�����������ݣ��ӷ��������ؼӷ����
    cal = nullptr;
    operatorfactory = new OperationFactory();
   
}

Calculator::~Calculator()
{
    delete operatorfactory;
    operatorfactory = nullptr;
    cal = nullptr;
}

void Calculator::readNum(int num , int dot)
{
    //����ǵ�һ��������
    if (operat_flag == 0 && dot ==0) {
        operand1 = operand1 * 10 + num;
    }
    //����ǵڶ���������
    else if(operat_flag == 1 && dot == 0) {
        operand2 = operand2 * 10 + num;
    }
    //�����С����
    else if (operat_flag == 0 && dot == 1)
    {
        operand1 = resultPanel.toDouble();
    }
    else if (operat_flag == 1 && dot == 1)
    {
        operand2 = resultPanel.toDouble();
    }
}


void Calculator::on_number0_clicked()
{
    textPanel = textPanel + QString("0");
    ui.resultText->setText(textPanel);
    readNum(0);
}


void Calculator::on_number1_clicked()
{
    textPanel = textPanel + QString("1");
    ui.resultText->setText(textPanel);
    readNum(1);

}

void Calculator::on_number2_clicked()
{
    textPanel = textPanel + QString("2");
    ui.resultText->setText(textPanel);
    readNum(2);
}

void Calculator::on_number3_clicked()
{
    textPanel = textPanel + QString("3");
    ui.resultText->setText(textPanel);
    readNum(3);
}

void Calculator::on_number4_clicked()
{
    textPanel = textPanel + QString("4");
    ui.resultText->setText(textPanel);
    readNum(4);
}

void Calculator::on_number5_clicked()
{
    textPanel = textPanel + QString("5");
    ui.resultText->setText(textPanel);
    readNum(5);
}

void Calculator::on_number6_clicked()
{
    textPanel = textPanel + QString("6");
    ui.resultText->setText(textPanel);
    readNum(6);
}

void Calculator::on_number7_clicked()
{
    textPanel = textPanel + QString("7");
    ui.resultText->setText(textPanel);
    readNum(7);
}

void Calculator::on_number8_clicked()
{
    textPanel = textPanel + QString("8");
    ui.resultText->setText(textPanel);
    readNum(8);
}

void Calculator::on_number9_clicked()
{
    textPanel = textPanel + QString("9");
    ui.resultText->setText(textPanel);
    readNum(9);
}


void Calculator::checkString(QString s)
{
    //���ʽ�����Ƿ�����������Ǵ�����
    if (s.contains("+"))
    {
        //����ģʽ��ȡ�ӷ��������
        cal = operatorfactory->creatCalculation('+');
        setCalNum();

    }
    else if (s.contains("-"))
    {
        //����ģʽ��ȡ�����������
        cal = operatorfactory->creatCalculation('-');
        setCalNum();
    }
    else if (s.contains("*"))
    {
        //����ģʽ��ȡ�˷��������
        cal = operatorfactory->creatCalculation('*');
        setCalNum();
    }
    else if (s.contains("/"))
    {
        //����ģʽ��ȡ�����������
        cal = operatorfactory->creatCalculation('/');
        setCalNum();
    }
    else //������
    {
        operand1 = s.toDouble();
        operand2 = 0.0;
    }

}

void Calculator::setCalNum()
{
    cal->setOperand1(operand1);
    cal->setOperand2(operand2);
    result = cal->getResult();
    textPanel = QString("%1").arg(result);
    //�ѽ���浽num1�У�����num2
    operand1 = result;
    operand2 = 0.0;
}

//�ӷ�
void Calculator::on_operatorAdd_clicked()
{
    //�ȼ������е�ʽ��
    QString s = ui.resultText->toPlainText();
    checkString(s);
    operat_flag = 1;
    textPanel += QString("+");
    ui.resultText->setText(textPanel);

}

//����
void Calculator::on_operatorSub_clicked()
{
    //�ȼ������е�ʽ��
    QString s = ui.resultText->toPlainText();
    checkString(s);
    operat_flag = 1;
    textPanel += QString("-");
    ui.resultText->setText(textPanel);
}

//�˷�
void Calculator::on_operatorMul_clicked()
{
    QString s = ui.resultText->toPlainText();
    checkString(s);
    operat_flag = 1;
    textPanel += QString("*");
    ui.resultText->setText(textPanel);

}

//����
void Calculator::on_operatorDiv_clicked()
{
    QString s = ui.resultText->toPlainText();
    checkString(s);
    operat_flag = 1;
    textPanel += QString("/");
    ui.resultText->setText(textPanel);

}

//����
void Calculator::on_operatorResult_clicked()
{
    QString s = ui.resultText->toPlainText();
    checkString(s);
    ui.resultText->setText(textPanel);
}
//����
void Calculator::on_clearbtn_clicked()
{
    ui.resultText->clear();
    operand1 = 0.0;
    operand2 = 0.0;
    operat_flag = 0;
    textPanel = "";
}
//С����
void Calculator::on_dot_clicked()
{
    QString s = ui.resultText->toPlainText();
    if (s.contains("."))
    {
        qDebug() << "����������С����";
        return;
    }
    else
    {
        textPanel = textPanel + QString(".");
        ui.resultText->setText(textPanel);
        readNum(0 ,1);
    }
    
}

//��ת
void Calculator::on_reverseNum_clicked()
{
    on_operatorResult_clicked();
    double s = textPanel.toDouble();
    if (s > 0)
    {
        s = -s;
        ui.resultText->setText("-"+QString(textPanel));
    }
    else
    {
        ui.resultText->setText("+"+QString(textPanel));
    }
    
}
