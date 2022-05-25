//
// Created by Evelyn Veiled on 5/25/22.
//

#include "Data.h"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

Data::Data(void) : _value(42){}

Data::Data(const Data &data)
{
    *this = data;
}

Data::~Data(){}

Data	&Data::operator=(const Data &data)
{
    if (this != &data)
        this->_value = data._value;
    return (*this);
}

int	Data::getValue(void) const
{
    return _value;
}