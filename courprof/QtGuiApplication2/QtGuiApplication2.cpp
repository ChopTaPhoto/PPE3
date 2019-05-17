#include "QtGuiApplication2.h"
#include <QtWidgets>
#include <QMessageBox>		
#include "ImageWidget.h"

QtGuiApplication2::QtGuiApplication2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//loading data
	m_model.loadBornes(); //Can be done when pressing on a button or after other human action

	//create tabs
	ui.tabWidget->clear();
	m_tabWidgetFirstTab = new WidgetFirstTab(m_model);
	ui.tabWidget->addTab(m_tabWidgetFirstTab, "Visualisation");
	m_tabBilling = new BillingTabWidget(m_model);
	ui.tabWidget->addTab(m_tabBilling, "Facturation");
	m_gestionMat = new Gestion_mat_view(m_model);
	ui.tabWidget->addTab(m_gestionMat, "Gestion materiel");
	m_reservation = new Reservation(m_model);
	ui.tabWidget->addTab(m_reservation, "Reservation");

	//New image widget tab
	//ImageWidget* imageWidget = new ImageWidget();
	//ui.tabWidget->addTab(imageWidget, "Image");

	//connect(imageWidget, &ImageWidget::imageVisibilityClicked, this, &QtGuiApplication2::imageVisibilityClickedSlot);

	//display in fullscreen
	showMaximized();
}

void QtGuiApplication2::imageVisibilityClickedSlot(int nbTimes)
{
	ui.tabWidget->setTabText(4, QString("Image changed %1 times").arg(nbTimes));
}

