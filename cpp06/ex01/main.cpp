#include "Serializer.hpp"

int main ()
{
	Data data;
	data.value = 42;

	std::cout << "Original Data value: " << data.value << std::endl;

	uintptr_t serializedData = Serializer::serialize(&data);
	std::cout << "Serialized Data pointer: " << serializedData << std::endl;

	Data* deserializedData = Serializer::deserialize(serializedData);
	std::cout << "Deserialized Data value: " << deserializedData->value << std::endl;

	return 0;
}