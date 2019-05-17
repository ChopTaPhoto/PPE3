#pragma once

#include <QWidget>
#include "ui_gestion_mat_view.h"
#include "Model.h"
#include <QWebEngineView>


class Gestion_mat_view : public QWidget
{
	Q_OBJECT

public:
	Gestion_mat_view(QWidget *parent = Q_NULLPTR);
	~Gestion_mat_view();

	void Gestion_mat_view::updateStock() {
		// recuperer le stock
		// prendre la value dans input
	}

private:
	Ui::gestion_mat_view m_ui;
	Model& m_model;
	QWebEngineView* m_webview;

};
