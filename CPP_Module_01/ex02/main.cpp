/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:48:58 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 16:44:27 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main (void)
{
	Zombie *z;
	ZombieEvent factory = ZombieEvent();
	
	z = factory.newZombie("Goffredo");
	z->announce();
	delete(z);
	z = new Zombie("Simpatico", "Peppino");
	z->announce();
	delete(z);
	factory.setZombieType("Gommoso");
	factory.randomChump();

	return (0);
}
