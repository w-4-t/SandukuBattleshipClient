#ifndef LOGINDATAHANDLER_H
#define LOGINDATAHANDLER_H
#include <QObject>
#include "emailvalidator.h"

class LoginDataHandler
{
public:
    LoginDataHandler();
    void setEmail(QString new_email);
    QString getEmail();

    void setPassword(QString new_password);
    QString getPassword();

    EmailValidator::State ValidateEmail(QString email);


private:
    QString email;
    QString password;
};

#endif // LOGINDATAHANDLER_H
