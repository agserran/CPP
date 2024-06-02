#pragma once

#include <iostream>
#include <stdint.h>

struct Data {
	int value;
	Data(int val) : value(val) {}
};

class Serializer {

	public:
		virtual ~Serializer() = 0;
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};