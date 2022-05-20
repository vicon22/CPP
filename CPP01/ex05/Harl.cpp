//
// Created by Evelyn Veiled on 5/17/22.
//

#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
    std::string arrayMessage[4] = {"debug", "error", "info", "warning"};
    t_level arrayFunctions[4] = {&Harl::_debug, &Harl::_error, &Harl::_info, &Harl::_warning};

    for (int i = 0; i < 4; ++i)
    {
        if (arrayMessage[i] == level)
        {
            (this->*(arrayFunctions[i].function))();
            return;
        }

    }

}

void Harl::_debug() {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_error() {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_info() {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_warning() {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
