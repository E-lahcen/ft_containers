/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:46:14 by lelhlami          #+#    #+#             */
/*   Updated: 2023/02/16 15:27:09 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include "vector.hpp"
#include <vector>



int main()
{
    int arr[] = {13, 1, 2, 3};
    std::vector<int> vec (arr, arr + 4); 
    std::for_each(vec.begin(), vec.end(), [](int n)
    {
        std::cout << n << std::endl;
    });
    return (0);
}