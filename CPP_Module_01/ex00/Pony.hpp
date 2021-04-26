/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:16:56 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 11:53:40 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class Pony
{
    private:
        int peso;
        int altezza;
        int eta;
        std::string colore;
        int zampe;
        int velocitaMax;
    
    public:
        Pony(void);
        void setPeso(int peso);
        void setAltezza(int altezza);
        void setEta(int eta);
        void setColore(std::string colore);
        void setZampe(int zampe);
        void setVelocita(int velocitaMax);
        int getPeso(void);
        int getAltezza(void);
        int getEta(void);
        std::string getColore(void);
        int getZampe(void);
        int getVelocitaMax(void);
        void stampa(void);
};
