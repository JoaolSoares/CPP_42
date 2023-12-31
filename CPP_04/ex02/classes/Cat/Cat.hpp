/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:02:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:50:24 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	private:
		std::string type;
		Brain		*brain;
	
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		
		Cat &operator = (const Cat &obj);

		std::string getType( void ) const;
		
		void makeSound() const;

};

# endif