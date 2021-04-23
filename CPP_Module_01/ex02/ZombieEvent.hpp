/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:49:57 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 16:44:43 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <string>

class ZombieEvent
{
    private:
        std::string type;
    public:
        ZombieEvent(void);
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void randomChump(void);
        std::string randomName(void);
};
