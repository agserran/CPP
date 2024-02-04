#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
        private:
                int						fixed;
                static const int        bits = 8;
        public:
                Fixed();
                ~Fixed();
                Fixed(const Fixed& copy);
				Fixed(const int n);
				Fixed(const float nb);
                Fixed& operator=(const Fixed& copy);
                int		getRawBits(void) const;
                void	setRawBits(int const raw);
				float	toFloat(void) const;
				int		toInt(void) const;

				bool operator>(const Fixed &other) const;
				bool operator<(const Fixed &other) const;
				bool operator>=(const Fixed &other) const;
				bool operator<=(const Fixed &other) const;
				bool operator==(const Fixed &other) const;
				bool operator!=(const Fixed &other) const;

				Fixed operator+(Fixed const &other);
				Fixed operator-(Fixed const &other);
				Fixed operator*(Fixed const &other);
				Fixed operator/(Fixed const &other);

				Fixed operator++();
				Fixed operator--();
				Fixed operator++(int);
				Fixed operator--(int);

				static const Fixed& min(const Fixed& a, const Fixed& b);
				static const Fixed& max(const Fixed& a, const Fixed& b);
				static Fixed& min(Fixed& a, Fixed& b);
				static Fixed& max(Fixed& a, Fixed& b);

};

std::ostream& operator<<(std::ostream &out, Fixed const &f);

#endif