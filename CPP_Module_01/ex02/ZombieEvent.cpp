/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:52:56 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 16:38:25 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent(void)
{
    std::srand(0);
	this->type = "Burlone";
}
void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}
Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(this->type, name);
}
void ZombieEvent::randomChump(void)
{
	Zombie(this->type, this->randomName()).announce();
}
std::string ZombieEvent::randomName(void)
{
	std::string nomi[6] = {"Mario", "Giovanni", "Michele", "Gino", "Pippo", "Giacomo"};
	return nomi[std::rand() % 4];
}
