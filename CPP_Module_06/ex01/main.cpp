/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:22:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/27 19:39:40 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_data {
	std::string	msg;
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr); /* unsigned integer type capable of holding a pointer to void */
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void) {
	Data*	data = new Data;
	Data*	tmp;

	data->msg = "yismaili";
	tmp = deserialize(serialize(data));

	if (data->msg != tmp->msg) {
        std::cout << " was not successful!!!!" << std::endl;   
    }
	else {
		std::cout << "successful!!!!" << std::endl;
    }
	delete data;
	return (0);
}