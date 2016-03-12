/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelNombre;
    QTextEdit *textEditNombre;
    QLabel *labelRuedas;
    QComboBox *comboBoxRuedas;
    QLabel *labelPotencia;
    QLabel *labelCombustible;
    QLabel *labelColor;
    QComboBox *comboBoxColor;
    QLabel *labelAccesorio;
    QCheckBox *checkBurbuja;
    QCheckBox *checkVocinas;
    QCheckBox *checkPosavasos;
    QPushButton *buttonCrear;
    QComboBox *comboBoxPotencia;
    QComboBox *comboBoxCombustible;
    QComboBox *comboBoxAccesorio;
    QLabel *labelMatricula;
    QLabel *labelTipo;
    QLabel *labelMatriculaGenerada;
    QLabel *labelTipoGenerado;
    QPushButton *buttonMatrcula;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(734, 287);
        MainWindow->setMouseTracking(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelNombre = new QLabel(centralWidget);
        labelNombre->setObjectName(QStringLiteral("labelNombre"));
        labelNombre->setGeometry(QRect(20, 20, 141, 21));
        QFont font;
        font.setPointSize(11);
        labelNombre->setFont(font);
        textEditNombre = new QTextEdit(centralWidget);
        textEditNombre->setObjectName(QStringLiteral("textEditNombre"));
        textEditNombre->setGeometry(QRect(173, 10, 471, 31));
        textEditNombre->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        labelRuedas = new QLabel(centralWidget);
        labelRuedas->setObjectName(QStringLiteral("labelRuedas"));
        labelRuedas->setGeometry(QRect(20, 50, 141, 21));
        labelRuedas->setFont(font);
        comboBoxRuedas = new QComboBox(centralWidget);
        comboBoxRuedas->setObjectName(QStringLiteral("comboBoxRuedas"));
        comboBoxRuedas->setGeometry(QRect(170, 50, 171, 22));
        labelPotencia = new QLabel(centralWidget);
        labelPotencia->setObjectName(QStringLiteral("labelPotencia"));
        labelPotencia->setGeometry(QRect(20, 80, 141, 21));
        labelPotencia->setFont(font);
        labelCombustible = new QLabel(centralWidget);
        labelCombustible->setObjectName(QStringLiteral("labelCombustible"));
        labelCombustible->setGeometry(QRect(380, 80, 141, 21));
        labelCombustible->setFont(font);
        labelColor = new QLabel(centralWidget);
        labelColor->setObjectName(QStringLiteral("labelColor"));
        labelColor->setGeometry(QRect(380, 50, 51, 21));
        labelColor->setFont(font);
        comboBoxColor = new QComboBox(centralWidget);
        comboBoxColor->setObjectName(QStringLiteral("comboBoxColor"));
        comboBoxColor->setGeometry(QRect(450, 50, 201, 22));
        labelAccesorio = new QLabel(centralWidget);
        labelAccesorio->setObjectName(QStringLiteral("labelAccesorio"));
        labelAccesorio->setGeometry(QRect(20, 110, 91, 21));
        labelAccesorio->setFont(font);
        checkBurbuja = new QCheckBox(centralWidget);
        checkBurbuja->setObjectName(QStringLiteral("checkBurbuja"));
        checkBurbuja->setGeometry(QRect(20, 140, 151, 17));
        checkBurbuja->setFont(font);
        checkVocinas = new QCheckBox(centralWidget);
        checkVocinas->setObjectName(QStringLiteral("checkVocinas"));
        checkVocinas->setGeometry(QRect(200, 140, 151, 17));
        checkVocinas->setFont(font);
        checkPosavasos = new QCheckBox(centralWidget);
        checkPosavasos->setObjectName(QStringLiteral("checkPosavasos"));
        checkPosavasos->setGeometry(QRect(380, 140, 151, 21));
        checkPosavasos->setFont(font);
        buttonCrear = new QPushButton(centralWidget);
        buttonCrear->setObjectName(QStringLiteral("buttonCrear"));
        buttonCrear->setGeometry(QRect(530, 200, 181, 31));
        comboBoxPotencia = new QComboBox(centralWidget);
        comboBoxPotencia->setObjectName(QStringLiteral("comboBoxPotencia"));
        comboBoxPotencia->setGeometry(QRect(170, 80, 171, 22));
        comboBoxCombustible = new QComboBox(centralWidget);
        comboBoxCombustible->setObjectName(QStringLiteral("comboBoxCombustible"));
        comboBoxCombustible->setGeometry(QRect(530, 80, 121, 22));
        comboBoxAccesorio = new QComboBox(centralWidget);
        comboBoxAccesorio->setObjectName(QStringLiteral("comboBoxAccesorio"));
        comboBoxAccesorio->setGeometry(QRect(110, 110, 271, 22));
        labelMatricula = new QLabel(centralWidget);
        labelMatricula->setObjectName(QStringLiteral("labelMatricula"));
        labelMatricula->setGeometry(QRect(20, 170, 141, 21));
        labelMatricula->setFont(font);
        labelTipo = new QLabel(centralWidget);
        labelTipo->setObjectName(QStringLiteral("labelTipo"));
        labelTipo->setGeometry(QRect(20, 200, 141, 21));
        labelTipo->setFont(font);
        labelMatriculaGenerada = new QLabel(centralWidget);
        labelMatriculaGenerada->setObjectName(QStringLiteral("labelMatriculaGenerada"));
        labelMatriculaGenerada->setGeometry(QRect(220, 170, 241, 21));
        labelMatriculaGenerada->setFont(font);
        labelTipoGenerado = new QLabel(centralWidget);
        labelTipoGenerado->setObjectName(QStringLiteral("labelTipoGenerado"));
        labelTipoGenerado->setGeometry(QRect(220, 200, 141, 21));
        labelTipoGenerado->setFont(font);
        buttonMatrcula = new QPushButton(centralWidget);
        buttonMatrcula->setObjectName(QStringLiteral("buttonMatrcula"));
        buttonMatrcula->setGeometry(QRect(530, 160, 181, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "El coche de Homer", 0));
        labelNombre->setText(QApplication::translate("MainWindow", "Nombre del veh\303\255culo:", 0));
        labelRuedas->setText(QApplication::translate("MainWindow", "N\303\272mero de ruedas:", 0));
        comboBoxRuedas->clear();
        comboBoxRuedas->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "6", 0)
        );
        labelPotencia->setText(QApplication::translate("MainWindow", "Potencia del motor:", 0));
        labelCombustible->setText(QApplication::translate("MainWindow", "Tipo de combustible:", 0));
        labelColor->setText(QApplication::translate("MainWindow", "Color:", 0));
        comboBoxColor->clear();
        comboBoxColor->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rojo", 0)
         << QApplication::translate("MainWindow", "Verde", 0)
         << QApplication::translate("MainWindow", "Amarillo", 0)
         << QApplication::translate("MainWindow", "Azul", 0)
        );
        labelAccesorio->setText(QApplication::translate("MainWindow", "Accesorio:", 0));
        checkBurbuja->setText(QApplication::translate("MainWindow", "Burbuja para ni\303\261os", 0));
        checkVocinas->setText(QApplication::translate("MainWindow", "M\303\272ltiples vocinas", 0));
        checkPosavasos->setText(QApplication::translate("MainWindow", "Portavasos gigante", 0));
        buttonCrear->setText(QApplication::translate("MainWindow", "Crear veh\303\255culo", 0));
        comboBoxPotencia->clear();
        comboBoxPotencia->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "75CV", 0)
         << QApplication::translate("MainWindow", "110CV", 0)
         << QApplication::translate("MainWindow", "150CV", 0)
         << QApplication::translate("MainWindow", "170CV", 0)
         << QApplication::translate("MainWindow", "200CV", 0)
        );
        comboBoxCombustible->clear();
        comboBoxCombustible->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Diesel", 0)
         << QApplication::translate("MainWindow", "Gasolina 98", 0)
         << QApplication::translate("MainWindow", "Gasolina 95", 0)
         << QApplication::translate("MainWindow", "El\303\251ctrico", 0)
         << QApplication::translate("MainWindow", "H\303\255brido", 0)
         << QApplication::translate("MainWindow", "Solar", 0)
         << QApplication::translate("MainWindow", "A pedales", 0)
        );
        comboBoxAccesorio->clear();
        comboBoxAccesorio->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rueda de repuesto", 0)
         << QApplication::translate("MainWindow", "Kit de reparaci\303\263n de pinchazos", 0)
        );
        labelMatricula->setText(QApplication::translate("MainWindow", " Matricula generada: ", 0));
        labelTipo->setText(QApplication::translate("MainWindow", "Tipo de veh\303\255culo: ", 0));
        labelMatriculaGenerada->setText(QString());
        labelTipoGenerado->setText(QString());
        buttonMatrcula->setText(QApplication::translate("MainWindow", "Generar matr\303\255cula", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
