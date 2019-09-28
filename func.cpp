/*
 * func.cpp
 *
 *  Created on: 23 рту. 2019 у.
 *      Author: Vasilii
 */

#include "func.h"
using namespace std;

std::vector<int> my_func(float k,float a[],int n)
{
	//This func return vector  index of input array
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
string GetStringAnswer(const vector<int>& vect){
	 //This func take vector, count his size and retutn answer string
	 stringstream s;
	 s<<"[";
	       	    for (int c = 0 ; c<vect.size() ; ++c){
	       	    		if(c<(vect.size()-1)){
	       	    			s<<vect[c]<<",";
	       	    		}
	       	    		else{
	       	    			s<<vect[c];
	       	    		}
	       	    }
	       	    s<<"],";
	       	    s<<vect.size();
	       	    return s.str();
}


