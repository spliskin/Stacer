#include "helpers_page.h"
#include "ui_helpers_page.h"

HelpersPage::~HelpersPage()
{
    delete ui;
}

HelpersPage::HelpersPage(QWidget *parent) :
    QWidget(parent),    
    ui(new Ui::HelpersPage),
    widgetHostManage(new HostManage)
{
    ui->setupUi(this);

    init();
}

void HelpersPage::init()
{
    ui->stackedWidget->addWidget(widgetHostManage);
    //ui->stackedWidget->addWidget();

    Utilities::addDropShadow(
        ui->btnHostManage
    , 40);
}

void HelpersPage::on_btnHostManage_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
