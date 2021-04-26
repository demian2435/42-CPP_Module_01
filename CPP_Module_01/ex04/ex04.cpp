/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:53:29 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 11:48:08 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
    std::string stringa = "HI THIS IS BRAIN";
    std::string *puntatore = &stringa;
    std::string &riferimento = stringa;
    std::string copia = stringa;

    std::cout << "Stringa: " << stringa << std::endl;
    std::cout << "Puntatore: " << puntatore << std::endl;
    std::cout << "Riferimento: " << riferimento << std::endl;
    std::cout << "Copia: " << copia << std::endl;

    stringa = "NUOVO TESTO";
    std::cout << "*** Modifico la stringa" << std::endl;  

    std::cout << "Stringa: " << stringa << std::endl;
    std::cout << "Puntatore: " << puntatore << std::endl;
    std::cout << "Riferimento: " << riferimento << std::endl;
    std::cout << "Copia: " << copia << std::endl;  

    return (0);
}
