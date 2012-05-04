#ifndef USERSTUDY_H
#define USERSTUDY_H

#include <QtGui/QMainWindow>
#include "ui_userstudyMainWindow.h"

enum SCREENS{ WELCOME_SCREEN, TUTORIAL_SCREEN, 
	DESIGN_SCREEN, EVALUATE_SCREEN, FINISH_SCREEN };

#include "ui_DesignWidget.h"
#include "ui_EvaluateWidget.h"

class UserStudyApp : public QMainWindow
{
	Q_OBJECT

public:
	UserStudyApp(QWidget *parent = 0, Qt::WFlags flags = 0);
	~UserStudyApp();

	Ui::DesignWidget * designWidget;
	Ui::EvaluateWidget * evalWidget;

public slots:
	void nextButtonWelcome();
	void nextButtonTutorial();
	void nextButtonDesign();
	void nextButtonEvaluate();

	void sendResultButton();
	void saveResultButton();

	QWidget * getScreen(SCREENS screenIndex);
	void setScreen( SCREENS screenIndex );

private:
	Ui::UserStudyAppClass ui;

};


#endif // USERSTUDY_H
