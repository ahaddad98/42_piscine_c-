/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:13:05 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:16:32 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include "iostream"
class Victim
{
private:
    std::string name;
    Victim();

public:
    Victim(std::string na);
    Victim(const Victim & vic);
    std::string getname() const ;
    Victim & operator=(const  Victim & vic);
    ~Victim();
    virtual void getPolymorphed() const;
};

std::ostream &  operator<<(std::ostream & os, Victim const & vic);

#endif