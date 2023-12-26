#include "Fixed.hpp"

Fixed::Fixed(){
        std::cout << "Constructor called" << std::endl;
        this->fixed = 0;
}

Fixed:: Fixed(const Fixed& copy){
        std::cout << "Copy Constructor called" << std::endl;
        fixed = copy.getRawBits();
}

Fixed:: Fixed(const int n) : fixed(n << bits)
{
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nb) {
    float scaledValue = float_nb * (1 << bits);
    fixed = roundf(scaledValue);
    std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed(){
        std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void)const{
        std::cout << "getRawBits function called" << std::endl;
        return (this->fixed);
}

void    Fixed::setRawBits(int const raw)
{
        this->fixed = raw;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
        if (this != &copy)
        {
                fixed = copy.getRawBits();
        }
        std::cout << "Asignation operand called." << std::endl;
        return (*this);
}

float	Fixed::toFloat(void)
{
	return ((float)fixed/(1 << bits));
}

int		Fixed::toInt(void)
{
	return (fixed >> bits);
}