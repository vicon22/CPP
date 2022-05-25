//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:

    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
    virtual ~ShrubberyCreationForm();

    virtual void execute(const Bureaucrat& bureaucrat) const;

private:

    ShrubberyCreationForm();

    std::string _target;

};


#endif //CPP05_SHRUBBERYCREATIONFORM_H
