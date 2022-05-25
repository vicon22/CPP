
//#include <stdint.h>
#include <iostream>
#include "Data.h"

uintptr_t	serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
    Data		*data;
    uintptr_t	serialized;
    Data		*deserialized;

    data = new Data();
    std::cout << std::endl << "data ptr = " << data << std::endl;
    std::cout << "value = " << data->getValue() << std::endl << std::endl;

    serialized = serialize(data);
    std::cout << "serialize(data ptr) = " << serialized << std::endl;

    deserialized = deserialize(serialized);
    std::cout << "deserialize(serialize(data ptr)) = " << deserialized << std::endl;
    std::cout << "value = " << deserialized->getValue() << std::endl << std::endl;

    delete data;
    return (0);
}