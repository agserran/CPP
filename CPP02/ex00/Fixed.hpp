#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int					fixed;
		static const int	bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		
};

#endif