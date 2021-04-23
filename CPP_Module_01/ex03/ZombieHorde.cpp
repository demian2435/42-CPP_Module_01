/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:14 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 18:17:18 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N)
{
    if (N > 1000)
    {
        std::cout << "Max orda 1000 unità" << std::endl;
        this->N = 1000;
    }
    else
        this->N = N;

    for (int i = 0; i < this->N; i++)
    {
        lista[i] = new Zombie("Orda", this->randomName());
    }
}
ZombieHorde::~ZombieHorde(void)
{
    for (int i = 0; i < this->N; i++)
        delete(this->lista[i]);
}
void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->N; i++)
        this->lista[i]->announce();
}
std::string ZombieHorde::randomName(void)
{
	std::string nomi[6] = {"Mario", "Giovanni", "Michele", "Gino", "Pippo", "Giacomo"};
	return nomi[rand() % 4];
}
