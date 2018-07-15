#include "logindatahandler.h"

LoginDataHandler::LoginDataHandler()
{
    QString const INITIAL_EMAIL = "";
    QString const INITIAL_PASSWORD = "";
    setEmail(INITIAL_EMAIL);
    setPassword(INITIAL_PASSWORD);
}


void LoginDataHandler::setEmail(QString new_email){
    email = new_email;
}

QString LoginDataHandler::getEmail(){
    return email;
}


void LoginDataHandler::setPassword(QString new_password){
    password = new_password;

}

QString LoginDataHandler::getPassword(){
    return password;
}

EmailValidator::State LoginDataHandler::ValidateEmail(QString email_to_validate){
    EmailValidator *validator = new EmailValidator;
    int pos = 0;
//    int return_code = 0;
//    if (validator->validate(email_to_validate,pos) == EmailValidator::Invalid) return_code = -1;
//    if (validator->validate(email_to_validate,pos) == EmailValidator::Intermediate) return_code = 1;
//    if (validator->validate(email_to_validate,pos) == EmailValidator::Acceptable) return_code = 0;
    return validator->validate(email_to_validate,pos);
}




