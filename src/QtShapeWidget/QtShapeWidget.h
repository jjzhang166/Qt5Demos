/*************************************************************************
    > File Name: QtShapeWidget.h
    > Author: 关山月朦胧
    > Mail: 1036014410@qq.com
    > Created Time: 2016年06月18日 星期六 13时13分30秒
 ************************************************************************/

#include <QWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>

class QtShapeWidget:public QWidget
{
	Q_OBJECT
	public:
		QtShapeWidget(QWidget * parent = 0);
		~QtShapeWidget();
	protected:
		void mousePressEvent(QMouseEvent *);
		void mouseMoveEvent(QMouseEvent *);
		void paintEvent(QPaintEvent *);
	private:
		QPoint dragPositon;
};
