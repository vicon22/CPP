//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP06_DATA_H
#define CPP06_DATA_H


class Data
{
private:
    int	_value;

    Data(const Data &data);
    Data	&operator=(const Data &data);

public:
    Data(void);
    virtual ~Data();

    int	getValue(void) const;
};



#endif //CPP06_DATA_H
