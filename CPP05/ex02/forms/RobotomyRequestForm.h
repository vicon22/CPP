//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H


#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:

    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& r);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
    virtual ~RobotomyRequestForm();

    void execute(const Bureaucrat& bureaucrat) const;

private:

    RobotomyRequestForm();

    std::string _target;
};



#endif //CPP05_ROBOTOMYREQUESTFORM_H
