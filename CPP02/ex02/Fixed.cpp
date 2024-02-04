#include "Fixed.hpp"

Fixed::Fixed(){
        this->fixed = 0;
}

Fixed:: Fixed(const Fixed& copy){
        fixed = copy.getRawBits();
}

Fixed:: Fixed(const int n) : fixed(n << bits)
{
}

Fixed::Fixed(const float float_nb) {
    float scaledValue = float_nb * (1 << bits);
    fixed = roundf(scaledValue);
}

Fixed::~Fixed(){
}

int     Fixed::getRawBits(void)const{
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
        return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)fixed/(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (fixed >> bits);
}

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
    out << f.toFloat();
    return (out);
}

bool Fixed:: operator>(const Fixed &other) const{
	return (this->toFloat() > other.toFloat());
}

bool Fixed:: operator<(const Fixed &other) const{
	return (this->toFloat() < other.toFloat());
}

bool Fixed:: operator<=(const Fixed &other) const{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed:: operator>=(const Fixed &other) const{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed:: operator==(const Fixed &other) const{
	return (this->toFloat() == other.toFloat());
}

bool Fixed:: operator!=(const Fixed &other) const{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed:: operator+(const Fixed &other){
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed:: operator-(const Fixed &other){
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed:: operator*(const Fixed &other){
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed:: operator/(const Fixed &other){
	if (other.toFloat() != 0)
		return (this->toFloat() / other.toFloat());
	else 
		std::cout << "CANNOT DIVIDE BY 0" << std::endl;
	return (0);
}

Fixed Fixed:: operator++(){
	fixed += 1;
	return (*this);
}

Fixed Fixed:: operator--(){
	fixed -= 1;
	return (*this);
}

Fixed Fixed:: operator--(int){
	Fixed ret = (*this);
	--(*this);
	return (ret);
}

Fixed Fixed:: operator++(int){
	Fixed ret = (*this);
	++(*this);
	return (ret);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}