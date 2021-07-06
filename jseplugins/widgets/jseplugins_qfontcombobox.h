#ifndef JSEPLUGINS_QFONTCOMBOBOX_H
#define JSEPLUGINS_QFONTCOMBOBOX_H

#include <QObject>
#include <QFontComboBox>

class jseplugins_qfontcombobox : public QFontComboBox
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qfontcombobox(QWidget *parent = nullptr);
    ~jseplugins_qfontcombobox();
};

Q_DECLARE_METATYPE(jseplugins_qfontcombobox*);

#endif // JSEPLUGINS_QFONTCOMBOBOX_H
