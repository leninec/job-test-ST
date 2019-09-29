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

using namespace std;

void TestFunction(const float* m,int n, int k, string answer, string nameTest) {
		vector <int> dif1;
		string result;
		dif1 = my_func(k,m,n);
		result = GetStringAnswer(dif1);
		cout<<"------"<<nameTest<<"------"<<endl;
		cout<<"Array = [";
		for (int l = 0; l<n; l++){
			if(l<(n-1)){
				cout<<m[l]<<",";
			}else{
				cout<<m[l]<<"],";
			}
		}
		cout<<" k = "<<k<<endl;
		cout<< "Result        = "<<result<<endl;
		cout<< "Right answear = "<<answer<<endl;
		if (result == answer){
			cout<< nameTest<<" pass."<<endl;
		}else{
			cout<< nameTest<<" F A I L!!!"<<endl;
		}
		cout<<endl;
}

#endif /* TEST_H_ */
