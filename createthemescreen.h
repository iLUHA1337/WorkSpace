#pragma once
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

#include "theme.h"

class CreateThemeScreen : public QWidget {
    Q_OBJECT
public:
    explicit CreateThemeScreen(QWidget *parent = nullptr);
    QVBoxLayout *vLayout;
    QHBoxLayout *nameLayout, *passwordLayout, *dateLayout;
    QLabel *nameLabel, *passwordLabel, *dateLabel;
    QLineEdit *name, *password, *date;
    QPushButton *createButton;
signals:
    void createTheme(Theme theme);
};
