#include "Qt5DemosDlg.h"
#include "../QtStdDlgs/QtStdDialogs.h"
#include "../QtProgressBar/ProgressBar.h"
#include "../QtPalette/QtPaletteDlg.h"
#include "../QtGeometryDlg/QtGeometryDlg.h"
#include "../QtExtDlg/QtExtDlg.h"
#include "../QtClock/QtClock.h"
#include "../QtShapeWidget/QtShapeWidget.h"
#include "../QtSplashWindow/QtSplashWindow.h"
#include "../QtImageView/QtImageView.h"
#include "../QtWordProcessor/QtWordProcessor.h"
#include "ui_Qt5DemosDlg.h"
#include <QTreeWidgetItem>

Qt5DemosDlg::Qt5DemosDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Qt5DemosDlg)
{
    ui->setupUi(this);
}

Qt5DemosDlg::~Qt5DemosDlg()
{
    delete ui;
}

void Qt5DemosDlg::on_Qt5DemosWidget_itemPressed(QTreeWidgetItem *item, int column)
{
	QString itemText;
    if (item->childCount() == 0)
    {
        itemText = item->text(column);
        if (itemText == "Qt5标准对话框")
        {
            QtStdDialogs stdDlg(this);
            stdDlg.exec();
        }
		else if (itemText == "进度条")
        {
            ProgressBar proBar(this);
            proBar.exec();
        }
		else if (itemText == "Qt位置函数对话框")
		{
			QtGeometryDlg geoDlg(this);
			geoDlg.exec();
		}
		else if (itemText == "调色板")
		{
			QtPaletteDlg patDlg(this);
			patDlg.exec();
		}
		else if (itemText == "电子钟")
		{
			QtClock *clock = new QtClock(this);
			clock->show();
		}
		else if (itemText == "可扩展对话框")
		{
			QtExtDlg extDlg(this);
			extDlg.exec();
		}
		else if (itemText == "不规则窗体")
		{
			QtShapeWidget *shapeWidget = new QtShapeWidget(this);
			shapeWidget->show();
		}
		else if (itemText == "程序启动画面")
		{
			QtSplashWindow *splWin = new QtSplashWindow(this);
			splWin->show();
		}
    }
	else if (item->childCount() == 1)
	{
		if (itemText == "图片浏览器")
		{
			QtImageView *imgView = new QtImageView(this);
			imgView->show();
		}
		else if (itemText == "文字处理器")
		{
			QtWordProcessor *wordPro = new QtWordProcessor(this);
			wordPro->show();
		}
	}
}
