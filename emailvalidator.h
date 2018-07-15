#ifndef EMAILVALIDATOR_H
#define EMAILVALIDATOR_H
#include<QRegularExpressionValidator>
#include<QValidator>

class EmailValidator : public QRegularExpressionValidator
{
public:
    EmailValidator();
private:
    QRegularExpression email_regexp; // QRegExp to validate email
};

#endif // EMAILVALIDATOR_H
