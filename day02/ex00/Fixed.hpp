/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:46:54 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/27 17:01:46 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
    int  raw;
    static const int bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& f1);
    Fixed(int r);
    Fixed&    operator=(const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
