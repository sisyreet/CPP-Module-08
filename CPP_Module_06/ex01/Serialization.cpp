#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr)); // трактует байты одного типа как байты другого, не создает копию, интерпретирует тип как другой 
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
