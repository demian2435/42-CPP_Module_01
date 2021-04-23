/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:53:29 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 18:00:44 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
    std::string text = "HI THIS IS BRAIN";
    std::string *p = &text;

    std::cout << text << std::endl;
    std::cout << p << std::endl;

    return (0);
}