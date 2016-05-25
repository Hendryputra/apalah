/********************************************************************************
** Form generated from reading UI file 'tcpipsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPIPSETTINGSWIDGET_H
#define UI_TCPIPSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ipaddressctrl.h"

QT_BEGIN_NAMESPACE

class Ui_TcpIpSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *cbEnabled;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    IPAddressCtrl *edNetworkAddress;
    QLineEdit *edPort;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnApply;

    void setupUi(QWidget *TcpIpSettingsWidget)
    {
        if (TcpIpSettingsWidget->objectName().isEmpty())
            TcpIpSettingsWidget->setObjectName(QString::fromUtf8("TcpIpSettingsWidget"));
        TcpIpSettingsWidget->resize(547, 156);
        verticalLayout = new QVBoxLayout(TcpIpSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        cbEnabled = new QCheckBox(TcpIpSettingsWidget);
        cbEnabled->setObjectName(QString::fromUtf8("cbEnabled"));

        verticalLayout->addWidget(cbEnabled);

        groupBox = new QGroupBox(TcpIpSettingsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        edNetworkAddress = new IPAddressCtrl(groupBox);
        edNetworkAddress->setObjectName(QString::fromUtf8("edNetworkAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edNetworkAddress->sizePolicy().hasHeightForWidth());
        edNetworkAddress->setSizePolicy(sizePolicy);
        edNetworkAddress->setMinimumSize(QSize(260, 0));

        gridLayout->addWidget(edNetworkAddress, 1, 0, 1, 1);

        edPort = new QLineEdit(groupBox);
        edPort->setObjectName(QString::fromUtf8("edPort"));

        gridLayout->addWidget(edPort, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 6, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnApply = new QPushButton(TcpIpSettingsWidget);
        btnApply->setObjectName(QString::fromUtf8("btnApply"));

        horizontalLayout->addWidget(btnApply);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TcpIpSettingsWidget);

        QMetaObject::connectSlotsByName(TcpIpSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TcpIpSettingsWidget)
    {
        TcpIpSettingsWidget->setWindowTitle(QApplication::translate("TcpIpSettingsWidget", "Form", 0, QApplication::UnicodeUTF8));
        cbEnabled->setText(QApplication::translate("TcpIpSettingsWidget", "Active", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TcpIpSettingsWidget", "Modbus Server", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TcpIpSettingsWidget", "Network Address", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TcpIpSettingsWidget", "Port", 0, QApplication::UnicodeUTF8));
        edPort->setText(QApplication::translate("TcpIpSettingsWidget", "502", 0, QApplication::UnicodeUTF8));
        btnApply->setText(QApplication::translate("TcpIpSettingsWidget", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TcpIpSettingsWidget: public Ui_TcpIpSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPIPSETTINGSWIDGET_H
