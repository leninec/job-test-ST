/*
 * func.cpp
 *
 *  Created on: 23 рту. 2019 у.
 *      Author: Vasilii
 */

#include "func.h"


std::vector<int> my_func(float k,float a[],int n)
{
	std::vector<int> dif;
	// Search max
		float max = a[0];
		    for (int c = 0; c < n; ++c) {
		        if (a[c] > max) {
		            max = a[c];
		        }
		    }
	 // test coefficient
		   	for (int c = 0; c < n; ++c) {
		   	if ((std::abs(a[c]-max))<=(max*(k/100))) {
		   	   	     dif.push_back(c);
		   	   	      }
		   	}
	return dif;
}


