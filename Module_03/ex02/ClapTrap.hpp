#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap&	operator=(const ClapTrap& rhs);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	protected:
	std::string _name;
	int	_Hit;
	int	_Energy;
	int	_Attack;

};

#endif
