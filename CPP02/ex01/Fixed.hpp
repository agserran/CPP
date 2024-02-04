#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
        private:
                int                                             fixed;
                static const int                                bits = 8;
        public:
                Fixed();
                ~Fixed();
                Fixed(Fixed const &copy);
		Fixed(const int n);
		Fixed(const float nb);
                Fixed& operator=(const Fixed& copy);
                int	getRawBits(void)const;
                void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif