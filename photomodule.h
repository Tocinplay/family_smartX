#ifndef PHOTOMODULE_H
#define PHOTOMODULE_H

#include <QWidget>

namespace Ui {
class PhotoModule;
}

class PhotoModule : public QWidget
{
    Q_OBJECT

public:
    explicit PhotoModule(QWidget *parent = nullptr);
    ~PhotoModule();

private:
    Ui::PhotoModule *ui;
};

#endif // PHOTOMODULE_H
