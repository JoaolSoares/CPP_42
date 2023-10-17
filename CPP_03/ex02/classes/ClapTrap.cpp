/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:04 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/05 22:12:27 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 					: _name("default"),	_hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << "Default contructor called" << std::endl;
};
ClapTrap::ClapTrap(std::string name)	: _name(name),		_hitPoints(10), _energyPoints(10), _attackDamage(0)	{
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << "Name contructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : 
_name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << "All info contructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << "Copy contructor called" << std::endl;
	*this = src;
};

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << this->_name << " Destructor called" << std::endl;
	
};

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "\033[1;33m[ClapTrap] \033[0m";
	std::cout << "Copy assignment operator called" << std::endl;

	this->_name			= obj._name;
	this->_hitPoints	= obj._hitPoints;
	this->_energyPoints	= obj._energyPoints;
	this->_attackDamage	= obj._attackDamage;

	return (*this);
}


void ClapTrap::attack(const std::string& target) {
	std::cout << "\033[1;32m[inherit ] \033[0m";
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "insufficient number of energy points" << std::endl;
	else if ( this->_hitPoints <= 0)
		std::cout << this->_name << " is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "\033[1;32m[inherit ] \033[0m";
	if (this->_hitPoints > 0) {
		std::cout << this->_name << " was attacked, losing " << amount << " hit points!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << this->_name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "\033[1;32m[inherit ] \033[0m";
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " was repaired recovering " << amount << " health points!" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "insufficient number of energy points" << std::endl;
	else if ( this->_hitPoints <= 0)
		std::cout << this->_name << " is dead!" << std::endl;
}
