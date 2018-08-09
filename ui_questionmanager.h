/********************************************************************************
** Form generated from reading UI file 'questionmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONMANAGER_H
#define UI_QUESTIONMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionManager
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer;
    QLabel *adminNameLbl;
    QPushButton *adminPopBtn;
    QTabWidget *adminTabWidget;
    QWidget *subjectsPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *subjectList;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *selectFileBtn;
    QSpacerItem *horizontalSpacer_9;
    QLabel *fileChoiceLbl;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_13;
    QSpinBox *nQuestions;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QTimeEdit *nTime;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *commitBtn;
    QSpacerItem *horizontalSpacer_7;
    QWidget *questionsPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *currentSubject;
    QSpacerItem *horizontalSpacer_3;
    QLabel *questionNoLbl;
    QTextEdit *questionEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *prevBtn;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *nxtBtn;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpinBox *noChoice;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGroupBox *optionsGroup;
    QPushButton *nxtBtn_2;
    QWidget *candidatespage;
    QVBoxLayout *verticalLayout_2;
    QTableView *candidatesView;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addCandidateBtn;
    QPushButton *rmvCandidateBtn;

    void setupUi(QMainWindow *QuestionManager)
    {
        if (QuestionManager->objectName().isEmpty())
            QuestionManager->setObjectName(QStringLiteral("QuestionManager"));
        QuestionManager->resize(709, 674);
        QuestionManager->setStyleSheet(QLatin1String("QMainWindow {\n"
"	background-color: \"#FFFFFF\";\n"
"}"));
        centralwidget = new QWidget(QuestionManager);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMaximumSize(QSize(96, 96));
        logo->setAutoFillBackground(true);
        logo->setStyleSheet(QStringLiteral(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.jpeg")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        adminNameLbl = new QLabel(centralwidget);
        adminNameLbl->setObjectName(QStringLiteral("adminNameLbl"));
        QFont font;
        font.setPointSize(18);
        adminNameLbl->setFont(font);

        horizontalLayout->addWidget(adminNameLbl);

        adminPopBtn = new QPushButton(centralwidget);
        adminPopBtn->setObjectName(QStringLiteral("adminPopBtn"));
        adminPopBtn->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminPopBtn->setIcon(icon);
        adminPopBtn->setIconSize(QSize(48, 48));
        adminPopBtn->setFlat(true);

        horizontalLayout->addWidget(adminPopBtn);


        verticalLayout->addLayout(horizontalLayout);

        adminTabWidget = new QTabWidget(centralwidget);
        adminTabWidget->setObjectName(QStringLiteral("adminTabWidget"));
        subjectsPage = new QWidget();
        subjectsPage->setObjectName(QStringLiteral("subjectsPage"));
        verticalLayout_4 = new QVBoxLayout(subjectsPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(subjectsPage);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        verticalLayout_4->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_15);

        subjectList = new QComboBox(subjectsPage);
        subjectList->setObjectName(QStringLiteral("subjectList"));
        subjectList->setMinimumSize(QSize(300, 0));
        QFont font2;
        font2.setPointSize(14);
        subjectList->setFont(font2);
        subjectList->setEditable(true);

        horizontalLayout_5->addWidget(subjectList);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);

        selectFileBtn = new QPushButton(subjectsPage);
        selectFileBtn->setObjectName(QStringLiteral("selectFileBtn"));
        selectFileBtn->setMinimumSize(QSize(200, 0));
        selectFileBtn->setMaximumSize(QSize(300, 16777215));
        selectFileBtn->setFont(font1);

        horizontalLayout_10->addWidget(selectFileBtn);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        fileChoiceLbl = new QLabel(subjectsPage);
        fileChoiceLbl->setObjectName(QStringLiteral("fileChoiceLbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileChoiceLbl->sizePolicy().hasHeightForWidth());
        fileChoiceLbl->setSizePolicy(sizePolicy1);
        fileChoiceLbl->setMinimumSize(QSize(200, 0));
        QPalette palette;
        QBrush brush(QColor(252, 252, 252, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(234, 241, 216, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        fileChoiceLbl->setPalette(palette);
        QFont font3;
        font3.setItalic(true);
        fileChoiceLbl->setFont(font3);
        fileChoiceLbl->setAutoFillBackground(true);
        fileChoiceLbl->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(fileChoiceLbl);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_2 = new QLabel(subjectsPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        nQuestions = new QSpinBox(subjectsPage);
        nQuestions->setObjectName(QStringLiteral("nQuestions"));
        nQuestions->setFont(font2);
        nQuestions->setMaximum(100);

        horizontalLayout_8->addWidget(nQuestions);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        label_3 = new QLabel(subjectsPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_4->addWidget(label_3, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        nTime = new QTimeEdit(subjectsPage);
        nTime->setObjectName(QStringLiteral("nTime"));
        nTime->setFont(font2);
        nTime->setCurrentSection(QDateTimeEdit::HourSection);

        horizontalLayout_2->addWidget(nTime);

        horizontalSpacer_6 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(34, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        commitBtn = new QPushButton(subjectsPage);
        commitBtn->setObjectName(QStringLiteral("commitBtn"));
        commitBtn->setMinimumSize(QSize(200, 40));
        commitBtn->setMaximumSize(QSize(500, 16777215));
        commitBtn->setFont(font1);

        horizontalLayout_9->addWidget(commitBtn);

        horizontalSpacer_7 = new QSpacerItem(34, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_9);

        adminTabWidget->addTab(subjectsPage, QString());
        questionsPage = new QWidget();
        questionsPage->setObjectName(QStringLiteral("questionsPage"));
        verticalLayout_3 = new QVBoxLayout(questionsPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(questionsPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        currentSubject = new QComboBox(questionsPage);
        currentSubject->setObjectName(QStringLiteral("currentSubject"));
        currentSubject->setMinimumSize(QSize(200, 0));
        currentSubject->setFont(font2);
        currentSubject->setEditable(false);

        horizontalLayout_3->addWidget(currentSubject);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        questionNoLbl = new QLabel(questionsPage);
        questionNoLbl->setObjectName(QStringLiteral("questionNoLbl"));
        questionNoLbl->setFont(font1);

        verticalLayout_3->addWidget(questionNoLbl);

        questionEdit = new QTextEdit(questionsPage);
        questionEdit->setObjectName(QStringLiteral("questionEdit"));

        verticalLayout_3->addWidget(questionEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);

        prevBtn = new QPushButton(questionsPage);
        prevBtn->setObjectName(QStringLiteral("prevBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(prevBtn->sizePolicy().hasHeightForWidth());
        prevBtn->setSizePolicy(sizePolicy2);
        prevBtn->setMinimumSize(QSize(200, 40));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        prevBtn->setFont(font4);

        horizontalLayout_6->addWidget(prevBtn);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        nxtBtn = new QPushButton(questionsPage);
        nxtBtn->setObjectName(QStringLiteral("nxtBtn"));
        sizePolicy2.setHeightForWidth(nxtBtn->sizePolicy().hasHeightForWidth());
        nxtBtn->setSizePolicy(sizePolicy2);
        nxtBtn->setMinimumSize(QSize(200, 40));
        nxtBtn->setFont(font4);

        horizontalLayout_6->addWidget(nxtBtn);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(questionsPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_4->addWidget(label_7);

        noChoice = new QSpinBox(questionsPage);
        noChoice->setObjectName(QStringLiteral("noChoice"));
        noChoice->setMinimumSize(QSize(50, 30));
        noChoice->setFont(font1);
        noChoice->setMinimum(1);
        noChoice->setMaximum(5);

        horizontalLayout_4->addWidget(noChoice);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line = new QFrame(questionsPage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        optionsGroup = new QGroupBox(questionsPage);
        optionsGroup->setObjectName(QStringLiteral("optionsGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(optionsGroup->sizePolicy().hasHeightForWidth());
        optionsGroup->setSizePolicy(sizePolicy3);
        optionsGroup->setMinimumSize(QSize(0, 100));
        optionsGroup->setMaximumSize(QSize(16777215, 200));
        optionsGroup->setFlat(false);

        verticalLayout_3->addWidget(optionsGroup);

        nxtBtn_2 = new QPushButton(questionsPage);
        nxtBtn_2->setObjectName(QStringLiteral("nxtBtn_2"));
        sizePolicy2.setHeightForWidth(nxtBtn_2->sizePolicy().hasHeightForWidth());
        nxtBtn_2->setSizePolicy(sizePolicy2);
        nxtBtn_2->setMinimumSize(QSize(200, 40));
        nxtBtn_2->setFont(font4);

        verticalLayout_3->addWidget(nxtBtn_2);

        adminTabWidget->addTab(questionsPage, QString());
        candidatespage = new QWidget();
        candidatespage->setObjectName(QStringLiteral("candidatespage"));
        verticalLayout_2 = new QVBoxLayout(candidatespage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        candidatesView = new QTableView(candidatespage);
        candidatesView->setObjectName(QStringLiteral("candidatesView"));
        candidatesView->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(candidatesView);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addCandidateBtn = new QPushButton(candidatespage);
        addCandidateBtn->setObjectName(QStringLiteral("addCandidateBtn"));
        addCandidateBtn->setFont(font1);

        horizontalLayout_7->addWidget(addCandidateBtn);

        rmvCandidateBtn = new QPushButton(candidatespage);
        rmvCandidateBtn->setObjectName(QStringLiteral("rmvCandidateBtn"));
        rmvCandidateBtn->setFont(font1);

        horizontalLayout_7->addWidget(rmvCandidateBtn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        adminTabWidget->addTab(candidatespage, QString());

        verticalLayout->addWidget(adminTabWidget);

        QuestionManager->setCentralWidget(centralwidget);

        retranslateUi(QuestionManager);
        QObject::connect(noChoice, SIGNAL(valueChanged(int)), optionsGroup, SLOT(show()));

        adminPopBtn->setDefault(true);
        adminTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QuestionManager);
    } // setupUi

    void retranslateUi(QMainWindow *QuestionManager)
    {
        QuestionManager->setWindowTitle(QApplication::translate("QuestionManager", "Admin - CBTE APP Manager", nullptr));
        logo->setText(QString());
        adminNameLbl->setText(QApplication::translate("QuestionManager", "Welcome, Admin", nullptr));
        adminPopBtn->setText(QString());
        label->setText(QApplication::translate("QuestionManager", "Add Subject:", nullptr));
        subjectList->setCurrentText(QString());
        selectFileBtn->setText(QApplication::translate("QuestionManager", "Select Question file...", nullptr));
        fileChoiceLbl->setText(QString());
        label_2->setText(QApplication::translate("QuestionManager", "No. of Questions:", nullptr));
        label_3->setText(QApplication::translate("QuestionManager", "Time Allocated:", nullptr));
        nTime->setDisplayFormat(QApplication::translate("QuestionManager", "h'h':mm'm':ss's'", nullptr));
        commitBtn->setText(QApplication::translate("QuestionManager", "Commit", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(subjectsPage), QApplication::translate("QuestionManager", "Subjects", nullptr));
        label_4->setText(QApplication::translate("QuestionManager", "Subject:", nullptr));
        currentSubject->setCurrentText(QString());
        questionNoLbl->setText(QApplication::translate("QuestionManager", "Question number", nullptr));
        prevBtn->setText(QApplication::translate("QuestionManager", "&PREVIOUS", nullptr));
        nxtBtn->setText(QApplication::translate("QuestionManager", "&NEXT", nullptr));
        label_7->setText(QApplication::translate("QuestionManager", "Number of Choice", nullptr));
        optionsGroup->setTitle(QApplication::translate("QuestionManager", "Options", nullptr));
        nxtBtn_2->setText(QApplication::translate("QuestionManager", "&SAVE", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(questionsPage), QApplication::translate("QuestionManager", "Questions", nullptr));
        addCandidateBtn->setText(QApplication::translate("QuestionManager", "ADD", nullptr));
        rmvCandidateBtn->setText(QApplication::translate("QuestionManager", "REMOVE", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(candidatespage), QApplication::translate("QuestionManager", "Candidates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionManager: public Ui_QuestionManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONMANAGER_H
