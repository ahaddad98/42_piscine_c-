/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 14:23:18 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{   
    if (grade < 1 || grade > 150) 
        throw (GradeTooHighException());
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
    if (grade > 150) 
        throw (GradeTooLowException());
    if (grade < 1) 
        throw (GradeTooHighException());   
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
    if (grade < 1 || grade > 150) 
        throw (GradeTooHighException());
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
        return "GRADE TOO HIGH";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return "GRADE TOO LOW";
}

std::string Bureaucrat::getname() const
{
    return name;
}

int Bureaucrat::getgrade()const
{
    return grade;
}

void  Bureaucrat::decr()
{
    grade+=1;
    if (grade > 150) 
        throw (GradeTooLowException());
}
void  Bureaucrat::incr()
{
    grade-=1;
    if (grade < 1) 
        throw (GradeTooHighException());
}

std::ostream &		operator << ( std::ostream& out, const Bureaucrat & in )
{
    out << in.getname() << ", bureaucrat grade " << in.getgrade() << "." << std::endl;
    return out;
}
