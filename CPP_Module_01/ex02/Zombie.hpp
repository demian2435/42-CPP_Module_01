/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:39:55 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/23 15:49:25 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	private:
		std::string type;
		std::string name;
	public:
		Zombie(std::string type, std::string name);
		void announce(void);
		void setType(std::string type);
		void setName(std::string name);
		std::string getType(void);
		std::string getName(void);
};
