/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Mon Mar 2 09:58:09 2020
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tb_about;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(334, 380);
        verticalLayout = new QVBoxLayout(about);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tb_about = new QTextBrowser(about);
        tb_about->setObjectName(QString::fromUtf8("tb_about"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(7);
        tb_about->setFont(font);

        verticalLayout->addWidget(tb_about);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0, QApplication::UnicodeUTF8));
        tb_about->setHtml(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:7pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\302\267\346\225\260\346\215\256\346\235\245\346\272\220</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  </span><a href=\"https://news.qq.com/zt2020/page/feiyan.htm\"><span style=\" font-size:11pt; text-decoration: underline; color:#0055ff;\">\350\205\276\350\256\257\346\226\260\351\227\273\357\274\232\346\226\260\345\206\240\350\202\272\347\202\216\347\226\253\346\203\205\346\234"
                        "\200\346\226\260\345\212\250\346\200\201</span></a></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\302\267\345\246\202\344\275\225\345\256\236\347\216\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  </span><a href=\"http://www.wangchaochao.top/2020/02/14/qt-ncov/\"><span style=\" font-size:11pt; text-decoration: underline; color:#0055ff;\">\345\237\272\344\272\216Qt\347\232\204\346\226\260\345\206\240\350\202\272\347\202\216\347\226\253\346\203\205\346\225\260\346\215\256\345\256\236\346\227\266\347\233\221\346\216\247\345\271\263\345\217\260</span></a></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\302"
                        "\267\345\205\263\344\272\216\344\275\234\350\200\205</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.wangchaochao.top/2020/02/14/qt-ncov/\"><span style=\" font-size:11pt; text-decoration: underline; color:#0055ff;\">Home</span></a><span style=\" font-size:14pt; color:#000000;\"> \302\267 </span><a href=\"https://github.com/qtexe/qt_2019_ncov\"><span style=\" font-size:11pt; text-decoration: underline; color:#0055ff;\">Github</span></a><span style=\" font-size:11pt; color:#000000;\"> \302\267 </span><a href=\"https://wcc-blog.oss-cn-beijing.aliyuncs.com/payQR.jpg\"><span style=\" font-size:11pt; text-decoration: underline; color:#0055ff;\">Support</span></a></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\302\267\345\205\254\344\274\227\345\217\267"
                        "</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/my_sub.jpg\" width=\"100\" height=\"100\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
