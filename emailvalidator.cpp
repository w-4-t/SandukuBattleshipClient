#include "emailvalidator.h"

EmailValidator::EmailValidator() :
    QRegularExpressionValidator()
{
    //Setting pattern for email
    email_regexp.setPattern("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
    this->setRegularExpression(email_regexp);
}
