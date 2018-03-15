#include "selectconfig.h"
#include "ui_selectconfig.h"
#include "qdebug.h"
#include "build.h"

SelectConfig::SelectConfig(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SelectConfig)
{
    ui->setupUi(this);
}

SelectConfig::~SelectConfig()
{
    delete ui;
}

void SelectConfig::doDefConfig()
{

}

void SelectConfig::on_next_b_clicked()
{
    ui->next_b->setDisabled(true);

    if (ui->default_config_radioButton->isChecked()) {
        doDefConfig();
        qDebug() << "Going with default configuration";
        build = new Build(this);
        build->show();
        this->destroy();
    } else {
        qDebug() << "Custom configuration";
    }

}
