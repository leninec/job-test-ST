/*
 * test.h
 *
 *  Created on: 28 сент. 2019 г.
 *      Author: Vasilii
 */

#ifndef TEST_H_
#define TEST_H_
#include <iostream>
#include <vector>
#include "func.h"
#include "print.h"


void TestFunction( float m[], int n, int k, const vector<int>& v, string nameTest){
		vector <int> dif1;
		string result;
		string answer;
		dif1 = my_func(k,m,n);
		result = GetStringAnswer(dif1);
		answer = GetStringAnswer(v);
		cout<< "Result        = "<<result<<endl;
		cout<< "Right answear = "<<answer<<endl;
		if (result == answer){
					cout<< nameTest<<" pass"<<endl;
				}else
				{
					cout<< nameTest<<" F A I L !!!"<<endl;
				}
				cout<<endl;
}

#endif /* TEST_H_ */
