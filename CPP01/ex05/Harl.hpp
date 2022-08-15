/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:08:12 by younjkim          #+#    #+#             */
/*   Updated: 2022/08/16 02:10:11 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG   0
#define INFO    1
#define WARNING 2
#define ERROR   3

class Harl {
    private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    public:
    void    complain(std::string level);
};

#endif