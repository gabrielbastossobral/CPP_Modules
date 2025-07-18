#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct	Data
{
	int			id;
	std::string	name;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif