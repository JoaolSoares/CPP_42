/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:17:57 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:30 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string type;
		
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		virtual ~AAnimal();

		AAnimal &operator = (const AAnimal &obj);

		virtual std::string getType( void ) const;
		
		virtual void makeSound() const = 0;
};

# endif