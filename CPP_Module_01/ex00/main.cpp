/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:16:00 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 15:22:03 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap(void)
{
    Pony *p = new Pony();
    std::cout << "** ON HEAP" << std::endl;
    p->setColore("Bianco");
    p->stampa(); 
    delete(p);
}

void ponyOnTheStack(void)
{
    Pony p;
    std::cout << "** ON STACK" << std::endl;
    p.setEta(35);
    p.stampa();
}

int main (void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}
