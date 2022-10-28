/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:22:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/28 15:43:49 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_data {
	std::string	dt;
} Data;
/*It is used to convert a pointer of some data type into a pointer of another 
data type, even if the data types before and after conversion are different. */
uintptr_t serialize(Data* ptr) {
	uintptr_t convrt = reinterpret_cast<uintptr_t>(ptr);
	return convrt; /* unsigned integer type capable of holding a pointer to void */
}

Data* deserialize(uintptr_t raw) {
	Data  *ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int	main(void) {
	Data	*data = new Data();
	Data*	tmp;

	data->dt = "yismaili";
	uintptr_t srlz = serialize(data);
		//std::cout << srlz << std::endl;
	tmp = deserialize(srlz);
			//std::cout << tmp << std::endl;
	//tmp->dt = tmp->dt +"1337";
	std::cout << "original pointer: " <<data->dt << std::endl;
	std::cout << "deserialize: " <<tmp->dt << std::endl;
	if (data->dt != tmp->dt) {
        std::cout << " Original pointer value not equal deserialize return!!!" << std::endl;   
    }
	else {
		std::cout << "Original pointer value equal deserialize return!!! " << std::endl;
    }
	return (0);
}