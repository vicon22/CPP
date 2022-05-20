//
// Created by Evelyn Veiled on 5/17/22.
//

#ifndef CPP01MYNE_HARL_H
#define CPP01MYNE_HARL_H

#include "iostream"

class Harl {
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);

public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

typedef struct s_level {
    void (Harl::*function)(void);
} t_level;


#endif //CPP01MYNE_HARL_H
