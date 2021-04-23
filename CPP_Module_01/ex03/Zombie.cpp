/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:49:17 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 17:09:39 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string type, std::string name)
{
    this->type = type;
    this->name = name;
}
void Zombie::announce(void)
{
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
void Zombie::setType(std::string type)
{
    this->type = type;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}
std::string Zombie::getType(void)
{
    return this->type;
}
std::string Zombie::getName(void)
{
    return this->name;
}
