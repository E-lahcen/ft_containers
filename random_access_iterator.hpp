/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:01:34 by lelhlami          #+#    #+#             */
/*   Updated: 2023/02/20 23:14:15 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class Category, class T, class Distance = std::ptrdiff_t,
          class Pointer = T*, class Reference = T&>
  class iterator {
    typedef T         value_type;
    typedef Distance  difference_type;
    typedef Pointer   pointer;
    typedef Reference reference;
    typedef Category  iterator_category;
  };

template <class T>
class random_access_iterator : public iterator<std::random_access_iterator_tag, T>
{
    public:
        random_access_iterator( void );
};  