/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *loginPage;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *homePix;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernameEdit;
    QLineEdit *passcodeEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *summaryPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *usersPix;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *fullnameLbl;
    QLabel *usernameLbl;
    QFrame *line;
    QLabel *label_4;
    QLabel *combinationLbl;
    QLabel *timeAllocatedLbl;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *quitBtn;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *startBtn;
    QWidget *examPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_17;
    QLabel *candidateNameLbl;
    QSpacerItem *horizontalSpacer_11;
    QLabel *timeLeftLbl;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget_2;
    QTextEdit *questionEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *prevBtn;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *nxtBtn;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *submitBtn;

    void setupUi(QStackedWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(712, 706);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/logo.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QStackedWidget {\n"
"	background-color: \"#FFFFFF\";\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: \"#E7791A\";\n"
"	color: \"#FCFCFC\"\n"
"}"));
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        verticalLayout_7 = new QVBoxLayout(loginPage);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(96, 96));
        label_2->setAutoFillBackground(true);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.jpeg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_10->addWidget(label_2);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(25, 312, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label = new QLabel(loginPage);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette;
        label->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);

        verticalLayout_6->addWidget(label);

        homePix = new QLabel(loginPage);
        homePix->setObjectName(QStringLiteral("homePix"));
        sizePolicy.setHeightForWidth(homePix->sizePolicy().hasHeightForWidth());
        homePix->setSizePolicy(sizePolicy);
        homePix->setMaximumSize(QSize(500, 350));
        homePix->setPixmap(QPixmap(QString::fromUtf8(":/images/exampics")));
        homePix->setScaledContents(true);

        verticalLayout_6->addWidget(homePix);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(25, 312, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(37, 17, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        usernameEdit = new QLineEdit(loginPage);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy1);
        usernameEdit->setMinimumSize(QSize(300, 40));
        usernameEdit->setMaximumSize(QSize(500, 16777215));
        QFont font1;
        font1.setPointSize(14);
        usernameEdit->setFont(font1);
        usernameEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        usernameEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(usernameEdit);

        passcodeEdit = new QLineEdit(loginPage);
        passcodeEdit->setObjectName(QStringLiteral("passcodeEdit"));
        sizePolicy1.setHeightForWidth(passcodeEdit->sizePolicy().hasHeightForWidth());
        passcodeEdit->setSizePolicy(sizePolicy1);
        passcodeEdit->setMinimumSize(QSize(300, 40));
        passcodeEdit->setMaximumSize(QSize(500, 16777215));
        passcodeEdit->setFont(font1);
        passcodeEdit->setEchoMode(QLineEdit::Password);
        passcodeEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        passcodeEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(passcodeEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(34, 14, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        loginBtn = new QPushButton(loginPage);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setMinimumSize(QSize(300, 0));
        loginBtn->setMaximumSize(QSize(299, 16777215));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        loginBtn->setFont(font2);
        loginBtn->setLayoutDirection(Qt::RightToLeft);
        loginBtn->setFlat(false);

        horizontalLayout_3->addWidget(loginBtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);

        MainWindow->addWidget(loginPage);
        summaryPage = new QWidget();
        summaryPage->setObjectName(QStringLiteral("summaryPage"));
        verticalLayout_2 = new QVBoxLayout(summaryPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(summaryPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(96, 96));
        label_3->setAutoFillBackground(true);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.jpeg")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        usersPix = new QLabel(summaryPage);
        usersPix->setObjectName(QStringLiteral("usersPix"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(usersPix->sizePolicy().hasHeightForWidth());
        usersPix->setSizePolicy(sizePolicy2);
        usersPix->setMinimumSize(QSize(180, 180));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        usersPix->setFont(font3);
        usersPix->setAutoFillBackground(false);
        usersPix->setStyleSheet(QLatin1String("QLabel#usersPix {\n"
"	border: 1px solid grey;\n"
"	border-radius: 90px;\n"
"}	"));
        usersPix->setFrameShadow(QFrame::Plain);
        usersPix->setPixmap(QPixmap(QString::fromUtf8(":/images/userspix.png")));
        usersPix->setScaledContents(false);
        usersPix->setAlignment(Qt::AlignCenter);
        usersPix->setWordWrap(false);

        horizontalLayout_5->addWidget(usersPix);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_5);

        groupBox = new QGroupBox(summaryPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font3);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        fullnameLbl = new QLabel(groupBox);
        fullnameLbl->setObjectName(QStringLiteral("fullnameLbl"));
        fullnameLbl->setFont(font1);

        gridLayout_2->addWidget(fullnameLbl, 0, 0, 1, 1);

        usernameLbl = new QLabel(groupBox);
        usernameLbl->setObjectName(QStringLiteral("usernameLbl"));
        usernameLbl->setFont(font1);

        gridLayout_2->addWidget(usernameLbl, 1, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        combinationLbl = new QLabel(groupBox);
        combinationLbl->setObjectName(QStringLiteral("combinationLbl"));
        QPalette palette1;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(115, 131, 191, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        combinationLbl->setPalette(palette1);
        QFont font4;
        font4.setPointSize(12);
        combinationLbl->setFont(font4);
        combinationLbl->setAutoFillBackground(false);
        combinationLbl->setStyleSheet(QLatin1String("QLabel {\n"
"	color: \"#FFFFFF\";\n"
"	background-color: \"#7383BF\";\n"
"}"));
        combinationLbl->setTextFormat(Qt::AutoText);
        combinationLbl->setScaledContents(false);
        combinationLbl->setWordWrap(false);
        combinationLbl->setMargin(10);

        gridLayout_2->addWidget(combinationLbl, 4, 0, 1, 1);

        timeAllocatedLbl = new QLabel(groupBox);
        timeAllocatedLbl->setObjectName(QStringLiteral("timeAllocatedLbl"));
        timeAllocatedLbl->setMinimumSize(QSize(0, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        timeAllocatedLbl->setPalette(palette2);
        QFont font5;
        font5.setPointSize(16);
        timeAllocatedLbl->setFont(font5);
        timeAllocatedLbl->setLayoutDirection(Qt::LeftToRight);
        timeAllocatedLbl->setAutoFillBackground(false);
        timeAllocatedLbl->setStyleSheet(QLatin1String("QLabel {\n"
"	color: \"#FFFFFF\";\n"
"	background-color: \"#7383BF\";\n"
"}"));
        timeAllocatedLbl->setTextFormat(Qt::AutoText);
        timeAllocatedLbl->setScaledContents(false);
        timeAllocatedLbl->setAlignment(Qt::AlignCenter);
        timeAllocatedLbl->setWordWrap(false);
        timeAllocatedLbl->setMargin(6);

        gridLayout_2->addWidget(timeAllocatedLbl, 5, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        quitBtn = new QPushButton(summaryPage);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setMinimumSize(QSize(200, 40));
        quitBtn->setFont(font3);

        horizontalLayout_4->addWidget(quitBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        startBtn = new QPushButton(summaryPage);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setMinimumSize(QSize(200, 40));
        startBtn->setFont(font3);

        horizontalLayout_4->addWidget(startBtn);


        verticalLayout_2->addLayout(horizontalLayout_4);

        MainWindow->addWidget(summaryPage);
        examPage = new QWidget();
        examPage->setObjectName(QStringLiteral("examPage"));
        verticalLayout_3 = new QVBoxLayout(examPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        logo = new QLabel(examPage);
        logo->setObjectName(QStringLiteral("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMaximumSize(QSize(96, 96));
        logo->setAutoFillBackground(true);
        logo->setStyleSheet(QStringLiteral(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.jpeg")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_7->addWidget(logo);

        horizontalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        candidateNameLbl = new QLabel(examPage);
        candidateNameLbl->setObjectName(QStringLiteral("candidateNameLbl"));
        candidateNameLbl->setFont(font2);
        candidateNameLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(candidateNameLbl);

        horizontalSpacer_11 = new QSpacerItem(150, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        timeLeftLbl = new QLabel(examPage);
        timeLeftLbl->setObjectName(QStringLiteral("timeLeftLbl"));
        timeLeftLbl->setFont(font);
        timeLeftLbl->setStyleSheet(QLatin1String("QLabel {\n"
"	color: \"#ff0000\";\n"
"}"));
        timeLeftLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(timeLeftLbl);


        verticalLayout_3->addLayout(horizontalLayout_7);

        frame = new QFrame(examPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        listWidget_2 = new QListWidget(frame);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy3);
        listWidget_2->setMaximumSize(QSize(16777215, 30));
        listWidget_2->setAutoFillBackground(true);
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget_2->setFlow(QListView::LeftToRight);
        listWidget_2->setSpacing(5);
        listWidget_2->setSelectionRectVisible(true);
        listWidget_2->setSortingEnabled(true);

        verticalLayout_4->addWidget(listWidget_2);

        questionEdit = new QTextEdit(frame);
        questionEdit->setObjectName(QStringLiteral("questionEdit"));
        questionEdit->setReadOnly(true);

        verticalLayout_4->addWidget(questionEdit);

        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font6;
        font6.setPointSize(11);
        radioButton->setFont(font6);

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font6);

        verticalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(frame);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font6);

        verticalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(frame);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font6);

        verticalLayout_4->addWidget(radioButton_4);


        verticalLayout_3->addWidget(frame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        prevBtn = new QPushButton(examPage);
        prevBtn->setObjectName(QStringLiteral("prevBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(prevBtn->sizePolicy().hasHeightForWidth());
        prevBtn->setSizePolicy(sizePolicy4);
        prevBtn->setMinimumSize(QSize(200, 40));
        prevBtn->setFont(font3);

        horizontalLayout_6->addWidget(prevBtn);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        nxtBtn = new QPushButton(examPage);
        nxtBtn->setObjectName(QStringLiteral("nxtBtn"));
        sizePolicy4.setHeightForWidth(nxtBtn->sizePolicy().hasHeightForWidth());
        nxtBtn->setSizePolicy(sizePolicy4);
        nxtBtn->setMinimumSize(QSize(200, 40));
        nxtBtn->setFont(font3);

        horizontalLayout_6->addWidget(nxtBtn);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        listWidget = new QListWidget(examPage);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(350, 30));
        listWidget->setMaximumSize(QSize(500, 100));
        listWidget->setAutoFillBackground(false);
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setLineWidth(1);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setAlternatingRowColors(false);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setSpacing(2);
        listWidget->setUniformItemSizes(true);
        listWidget->setWordWrap(true);
        listWidget->setSelectionRectVisible(true);
        listWidget->setSortingEnabled(false);

        horizontalLayout_8->addWidget(listWidget);

        horizontalSpacer_13 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(400, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        submitBtn = new QPushButton(examPage);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        sizePolicy4.setHeightForWidth(submitBtn->sizePolicy().hasHeightForWidth());
        submitBtn->setSizePolicy(sizePolicy4);
        submitBtn->setMinimumSize(QSize(200, 40));
        submitBtn->setMaximumSize(QSize(400, 16777215));
        submitBtn->setFont(font3);

        horizontalLayout_9->addWidget(submitBtn);


        verticalLayout_3->addLayout(horizontalLayout_9);

        MainWindow->addWidget(examPage);

        retranslateUi(MainWindow);
        QObject::connect(passcodeEdit, SIGNAL(returnPressed()), loginBtn, SLOT(click()));
        QObject::connect(usernameEdit, SIGNAL(returnPressed()), passcodeEdit, SLOT(setFocus()));

        MainWindow->setCurrentIndex(2);
        loginBtn->setDefault(true);
        listWidget_2->setCurrentRow(0);
        listWidget->setCurrentRow(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QStackedWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DLCF CBTE APP", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "DEEPER LIFE CAMPUS FELLOWSHIP FUTA", nullptr));
        homePix->setText(QString());
        usernameEdit->setPlaceholderText(QApplication::translate("MainWindow", "Username...", nullptr));
        passcodeEdit->setPlaceholderText(QApplication::translate("MainWindow", "Passcode...", nullptr));
        loginBtn->setText(QApplication::translate("MainWindow", "LOGIN", nullptr));
        label_3->setText(QString());
        usersPix->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Summary", nullptr));
        fullnameLbl->setText(QApplication::translate("MainWindow", "Name: ", nullptr));
        usernameLbl->setText(QApplication::translate("MainWindow", "Username: ", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Subject Combination:", nullptr));
        combinationLbl->setText(QApplication::translate("MainWindow", "<html><head/><body><p>ENGLISH		PHYSICS		MATHS		CHEMISTRY	BIOLOGY</p></body></html>", nullptr));
        timeAllocatedLbl->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Time allocated: 25mins</p></body></html>", nullptr));
        quitBtn->setText(QApplication::translate("MainWindow", "&QUIT", nullptr));
        startBtn->setText(QApplication::translate("MainWindow", "&START", nullptr));
        logo->setText(QString());
        candidateNameLbl->setText(QApplication::translate("MainWindow", "Candidate Name", nullptr));
        timeLeftLbl->setText(QApplication::translate("MainWindow", "TIME LEFT: 06:22 ", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Chemistry", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "English", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Maths", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Physics", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        questionEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H<span style=\" vertical-align:sub;\">2</span>O + H<span style=\" vertical-align:sub;\">2</span>SO<span style=\" vertical-align:sub;\">4</span> </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please read the comprehension passage below and answer the questions appropriately.</p>\n"
"<p align=\"justify\" s"
                        "tyle=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In the town of Ekete, Onitsha, the people of the Ibom culture are often known to perform prerogative rituals which has been believed to forward the culture of the town. </p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Recently, the king of the bladfdj dfdfda</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p al"
                        "ign=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">djfdlfd</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">dfjdf</p>\n"
"<p ali"
                        "gn=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">safd</p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fd</p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fdjlkdjfa</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">What is the suitable topic for this passage?</p></body></html>", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Iwalewa Omolade O.", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "Aladeselu O. M", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "M. K. O Abiola", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "Mike Okorofor", nullptr));
        prevBtn->setText(QApplication::translate("MainWindow", "&PREVIOUS", nullptr));
        nxtBtn->setText(QApplication::translate("MainWindow", "&NEXT", nullptr));

        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "1", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "2", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "3", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(3);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "4", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(4);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "5", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(5);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "6", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(6);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "7", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(7);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "8", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(8);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "9", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(9);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "10", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(10);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "11", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget->item(11);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "12", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget->item(12);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "13", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget->item(13);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "14", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget->item(14);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "15", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget->item(15);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "16", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget->item(16);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "17", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget->item(17);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "18", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget->item(18);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "19", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget->item(19);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "20", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = listWidget->item(20);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "21", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = listWidget->item(21);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "22", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = listWidget->item(22);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "23", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = listWidget->item(23);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "24", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = listWidget->item(24);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "25", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled1);

        submitBtn->setText(QApplication::translate("MainWindow", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
