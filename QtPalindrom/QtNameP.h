#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void AddFile();
    void CheckPalFile(QStringList list);
    void SaveFile();
protected:
    QPushButton* button;
    QPushButton* Savebutton;
    QTextEdit* ListP;
    QTextEdit* ListNotP;
};

#endif // WIDGET_H
