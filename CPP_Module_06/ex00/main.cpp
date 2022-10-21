/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:13:13 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 21:17:44 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv) {
   if (argc == 2) {
		convert	obj(argv[1]);

		obj.convertToChar();
		obj.convertToInt();
		obj.convertToFloat();
		obj.convertToDouble();
	}
	return (0);
}