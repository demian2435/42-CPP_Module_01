/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:23:12 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 13:37:52 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

Pony::Pony(void) {
	this->peso = 80;
	this->altezza = 2;
	this->eta = 10;
    this->colore = "Nero";
    this->zampe = 4;
    this->velocitaMax = 5;
}

void Pony::setPeso(int peso)
{
	this->peso = peso;
}

void Pony::setAltezza(int altezza)
{
	this->altezza = altezza;
}
void Pony::setEta(int eta)
{
	this->eta = eta;
}
void Pony::setColore(std::string colore)
{
	this->colore = colore;
}
void Pony::setZampe(int zampe)
{
	this->zampe = zampe;
}
void Pony::setVelocita(int velocitaMax)
{
	this->velocitaMax = velocitaMax;
}
int Pony::getPeso(void)
{
	return (this->peso);
}
int Pony::getAltezza(void)
{
	return (this->altezza);
}
int Pony::getEta(void)
{
	return (this->eta);
}
std::string Pony::getColore(void)
{
	return (this->colore);
}
int Pony::getZampe(void)
{
	return (this->zampe);
}
int Pony::getVelocitaMax(void)
{
	return (this->velocitaMax);	
}
void Pony::stampa(void)
{
	std::cout << "** STATISTICHE PONY **" << std::endl;
	std::cout << "Peso: " << this->peso << std::endl;
	std::cout << "Altezza: " << this->altezza << std::endl;
	std::cout << "Eta: " << this->eta << std::endl;
	std::cout << "Colore: " << this->colore << std::endl;
	std::cout << "Zampe: " << this->zampe << std::endl;
	std::cout << "Velocita Max: " << this->velocitaMax << std::endl;
}
