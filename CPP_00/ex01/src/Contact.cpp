/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:42 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/22 22:32:45 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNum, std::string darkest) {
//     this->firstName     = firstName;
//     this->lastName      = lastName;
//     this->nickname      = nickname;
//     this->phoneNum      = phoneNum;
//     this->darkest       = darkest;
// }

Contact::Contact() {
    this->isEmpty = true;
}

std::string Contact::getFirstName(void) {
    return this->firstName;
}
std::string Contact::getLastName(void) {
    return this->lastName;
}
std::string Contact::getNickname(void) {
    return this->nickname;
}
std::string Contact::getPhoneNum(void) {
    return this->phoneNum;
}
std::string Contact::getDarkest(void) {
    return this->darkest;
}

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}
void Contact::setLastName(std::string lastName) {
    this->lastName  = lastName;
}
void Contact::setNickname(std::string nickname) {
    this->nickname  = nickname;
}
void Contact::setPhoneNum(std::string phoneNum) {
    this->phoneNum  = phoneNum;
}
void Contact::setDarkest(std::string darkest) {
    this->darkest   = darkest;
}