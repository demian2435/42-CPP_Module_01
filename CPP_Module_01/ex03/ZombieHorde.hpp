/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:05 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 17:15:39 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
    private:
        int N;
        Zombie **lista;

    public:
        ZombieHorde(int N);
        ~ZombieHorde(void);
        void announce(void);
        std::string randomName(void);
};
