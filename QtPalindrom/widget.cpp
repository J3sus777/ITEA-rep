#include "QtNameP.h"
#include "ui_widget.h"
#include <QApplication>
#include <QTextStream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    button{new QPushButton{"Add File",this}},
    Savebutton{new QPushButton{"SaveFile",this}},
    ListP{new QTextEdit},
    ListNotP{new QTextEdit}

{

    QHBoxLayout* hlayo{new QHBoxLayout};
    hlayo->setMargin(50);
    hlayo->setSpacing(50);
    hlayo->addWidget(ListP);
    hlayo->addWidget(ListNotP);
    this->setLayout(hlayo);
    Savebutton->move(101,0);

    connect(button,&QPushButton::clicked,
            this,&Widget::AddFile);
    connect(Savebutton,&QPushButton::clicked,
           this,&Widget::SaveFile);
}

Widget::~Widget()
{

}

void Widget::AddFile()
{
    QString filename=QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                tr("All File (*.*);;Text File(*.txt)"));
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,tr("Unable to open file"),file.errorString());

        QTextStream in (&file);
        QString line=in.readAll();
        QStringList list=line.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
        CheckPalFile(list);
}

void Widget::CheckPalFile(QStringList list)
{

    QTextCursor prev_cursor = ListP->textCursor();
    QTextCursor prev_curso = ListNotP->textCursor();

    for (auto &i:list)
    if (std::equal(i.begin(), i.begin() + i.size()/2, i.rbegin()))
    {
        ListP->moveCursor (QTextCursor::End);
        ListP->insertPlainText (i+"\n");
        ListP->setTextCursor (prev_cursor);
    }
    else
    {
        ListNotP->moveCursor (QTextCursor::End);
        ListNotP->insertPlainText (i+"\n");
        ListNotP->setTextCursor (prev_curso);
    }
}
void Widget::SaveFile()
{
        QString filename = QFileDialog::getSaveFileName(this, tr("Save Text File"), tr("Text Files (*.txt)"));
        if (filename != "")
           {
               QFile file(filename);
           if (file.open(QIODevice::ReadWrite))
           {
               QTextStream stream(&file);
                     stream << ListP->toPlainText();
                     file.flush();
                     file.close();
           }
           else {
               QMessageBox::critical(this, tr("Errore"), tr("Non posso salvare il file"));
               return;
                }
           }
}
