/********************************************************************************
** Form generated from reading UI file 'listavehiculos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAVEHICULOS_H
#define UI_LISTAVEHICULOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaVehiculos
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textVehiculosGuardados;
    QLabel *labelNuestraBase;
    QLabel *labelContadorVehiculosCreados;
    QLabel *labelIndicadorContador;

    void setupUi(QFrame *listaVehiculos)
    {
        if (listaVehiculos->objectName().isEmpty())
            listaVehiculos->setObjectName(QStringLiteral("listaVehiculos"));
        listaVehiculos->resize(400, 331);
        listaVehiculos->setFrameShape(QFrame::StyledPanel);
        listaVehiculos->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(listaVehiculos);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 50, 361, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 229));
        textVehiculosGuardados = new QTextEdit(scrollAreaWidgetContents);
        textVehiculosGuardados->setObjectName(QStringLiteral("textVehiculosGuardados"));
        textVehiculosGuardados->setGeometry(QRect(0, 0, 361, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        labelNuestraBase = new QLabel(listaVehiculos);
        labelNuestraBase->setObjectName(QStringLiteral("labelNuestraBase"));
        labelNuestraBase->setGeometry(QRect(30, 30, 191, 16));
        labelContadorVehiculosCreados = new QLabel(listaVehiculos);
        labelContadorVehiculosCreados->setObjectName(QStringLiteral("labelContadorVehiculosCreados"));
        labelContadorVehiculosCreados->setGeometry(QRect(110, 300, 61, 16));
        labelIndicadorContador = new QLabel(listaVehiculos);
        labelIndicadorContador->setObjectName(QStringLiteral("labelIndicadorContador"));
        labelIndicadorContador->setGeometry(QRect(20, 300, 101, 16));

        retranslateUi(listaVehiculos);

        QMetaObject::connectSlotsByName(listaVehiculos);
    } // setupUi

    void retranslateUi(QFrame *listaVehiculos)
    {
        listaVehiculos->setWindowTitle(QApplication::translate("listaVehiculos", "Frame", 0));
        labelNuestraBase->setText(QApplication::translate("listaVehiculos", "Vehiculos en nuestra base de datos:", 0));
        labelContadorVehiculosCreados->setText(QString());
        labelIndicadorContador->setText(QApplication::translate("listaVehiculos", "Vehiculos creados:", 0));
    } // retranslateUi

};

namespace Ui {
    class listaVehiculos: public Ui_listaVehiculos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAVEHICULOS_H
