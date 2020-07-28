#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "prechoosedialog.h"
#include "ui_prechoosedialog.h"
#include <QTreeWidget>
PreChooseDialog::PreChooseDialog(QString title,QString currentpre,int position,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreChooseDialog)
{
    ui->setupUi(this);
	this->setModal(true);
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
	this->setAttribute(Qt::WA_TranslucentBackground, true);
	this->setAttribute(Qt::WA_DeleteOnClose);
	Position_Pre = position;

	ui->label_2->setText(title);


	ui->treeWidget->setFrameStyle(QFrame::NoFrame); 
	for (int i = 0; i < 9; i++)
	{
		QTreeWidgetItem *topitem = new QTreeWidgetItem();
		int pre = 25 * (10 - i);
		topitem->setText(0, QString::number(pre));
		ui->treeWidget->addTopLevelItem(topitem);
		topitem->setCheckState(0, Qt::Unchecked);
	}
	if (currentpre != "")
	{
		QStringList prelist = currentpre.split(",");
		for (int i = 0; i < prelist.size(); i++)
		{

			QTreeWidgetItemIterator it(ui->treeWidget);
			while (*it) {
				if ((*it)->text(0) == prelist.at(i)){
					(*it)->setCheckState(0, Qt::Checked);
				}
				++it;
			}
		}

	}
}

PreChooseDialog::~PreChooseDialog()
{
    delete ui;
}

void PreChooseDialog::on_pushButton_close_clicked()
{
	this->close();
}

void PreChooseDialog::on_pushButton_sure_clicked()
{
	QString pressure="";
	QTreeWidgetItemIterator it(ui->treeWidget);
	while (*it) {
		if ((*it)->checkState(0) == Qt::Checked){
			pressure += ((*it)->text(0)+",");
		}
		++it;
	}
	emit Sendpre(Position_Pre, pressure.left(pressure.length() - 1));
	this->close();
}
