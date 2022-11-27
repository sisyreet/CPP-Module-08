#include "Serialization.hpp"

int main(void)
{
	Data *data = new Data;

	data->value1 = "value1";
	data->value2 = "value2";

	std::cout << "data->value1 = " << data->value1 << " and data->value2= " << data->value2 << std::endl;
	std::cout << std::endl;
	std::cout << "Address data: " << data << std::endl;
	std::cout << "Ptr : " << serialize(data) << std::endl;
	std::cout << "Address data: " << deserialize(serialize(data)) << std::endl;
	std::cout << std::endl;
	std::cout << "data->value1 = " << data->value1 << " and data->value2= " << data->value2 << std::endl;
	
	/*
	числовое значение указателя
	статик каст меняет данные
	реинт меняет тип данных
	*/

	delete data;
}