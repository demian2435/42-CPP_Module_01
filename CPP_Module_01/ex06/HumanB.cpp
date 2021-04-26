/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:31:00 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 11:31:05 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his PUGGGGGNI!!!!" << std::endl;	
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
