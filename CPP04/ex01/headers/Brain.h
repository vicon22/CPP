//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

# include <iostream>
# include <ctime>
# include <cstdlib>

class Brain
{
protected:
    std::string	_ideas[100];

public:
    Brain(void);
    Brain(const Brain &brain);
    virtual ~Brain();

    Brain	&operator=(const Brain &brain);

    void	printFirstIdeas(void) const;
};



#endif //CPP04_BRAIN_H
