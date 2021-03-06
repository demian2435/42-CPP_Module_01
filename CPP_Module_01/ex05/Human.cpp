/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:03:58 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 18:53:34 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <string>

Human::Human(void) {}

std::string Human::identify(void) const{
	return (this->brain.identify());
}

const Brain& Human::getBrain(void){
	const Brain& ref = this->brain;
	return (ref);
}
