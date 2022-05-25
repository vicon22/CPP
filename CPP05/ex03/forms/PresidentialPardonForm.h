//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:

    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& p);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
    virtual ~PresidentialPardonForm();

    void execute(const Bureaucrat& bureaucrat) const;

private:

    PresidentialPardonForm();
    std::string _target;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
