/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:31:36 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 11:31:36 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string const & Weapon::getType (void)
{
	std::string const & ref = this->type;
	return (ref);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
