#include "Serializer.hpp"

int	main()
{
	Data* originalPtr = new Data(42);
	uintptr_t serializedPtr = Serializer::serialize(originalPtr);
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);

	std::cout << "Valor original: " << originalPtr->value << std::endl;
	std::cout << "Puntero original: " << originalPtr << std::endl;
	std::cout << "Valor deserializado: " << deserializedPtr->value << std::endl;
	std::cout << "Puntero deserializado: " << deserializedPtr << std::endl;

	delete originalPtr;

	return 0;
}