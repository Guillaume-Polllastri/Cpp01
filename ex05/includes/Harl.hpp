/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:09:11 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/12 15:25:36 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl {
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
    void	(Harl::*ptr_complain[4])(void);
    
public:
    Harl();
    void complain( std::string level );
};