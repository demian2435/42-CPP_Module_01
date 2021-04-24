/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:04:01 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 18:54:11 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"
#include <string>

class Human
{
    private:
        Brain const brain;

    public:
        Human(void);
        std::string identify(void) const;
        const Brain& getBrain(void);
};
