/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:03:55 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 18:03:56 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain(void) {}

std::string Brain::identify(void) const{
	std::stringstream s;
	s << this;
	return (s.str());
}
