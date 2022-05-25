//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP06_CONVERSION_H
#define CPP06_CONVERSION_H


# include <iostream>
# include <cstdlib>
# include <cerrno>
# include <limits>
# include <cstring>

class Conversion
{
private:
    bool		_charConvOk;
    bool		_intConvOk;
    bool		_floatConvOk;
    bool		_doubleConvOk;

    char		_charValue;
    int			_intValue;
    float		_floatValue;
    double		_doubleValue;

    int			_isLimitBool;
    std::string	_limit;
    bool		_stringError;
    bool		_outOfRange;

    Conversion(void);
    Conversion(const Conversion &conversion);
    Conversion	&operator=(const Conversion &conversion);

    bool		_isLimit(const char *value);
    int			_getType(const char *value);

    void		_convFromChar(const char *value);
    void		_convFromInt(const char *value);
    void		_convFromFloat(const char *value);
    void		_convFromDouble(const char *value);

public:
    Conversion(const char *value);
    virtual ~Conversion();

    void		printChar(std::ostream &o = std::cout) const;
    void		printInt(std::ostream &o = std::cout) const;
    void		printFloat(std::ostream &o = std::cout) const;
    void		printDouble(std::ostream &o = std::cout) const;
    bool		getOutOfRange(void) const;
    bool		getStringError(void) const;

    static const int	charType = 0;
    static const int	intType = 1;
    static const int	floatType = 2;
    static const int	doubleType = 3;
    static const int	wrongType = 4;
};

std::ostream	&operator<<(std::ostream &o, const Conversion &conversion);

typedef void (Conversion::*convFunction)(const char *);


#endif //CPP06_CONVERSION_H
