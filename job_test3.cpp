
#include <iostream>
#include <conio.h>
#include "func.h"
#include "test.h"
#include "print.h"

using namespace std;


int main() {
	/*************************************/
	// unit test//
	/*************************************/

	float a1[3] ={3,4,3.58};
	int k1 = 10;
	int n1 = 3;
	vector <int> difCheck;
	difCheck.push_back(1);
	TestFunction(a1,n1,k1,difCheck,"Test1");
	//test 3
	float a3[5] ={3.5, 3.1, 3.9, 4, 4.1};
	int k3 = 10;
	int n3 = 5;
	vector <int> difCheck3;
	difCheck3.push_back(2);
	difCheck3.push_back(3);
	difCheck3.push_back(4);
	TestFunction(a3,n3,k3,difCheck3,"Test3");



	/**************************************/
/*
		float a[8]; // source array
		vector<int> dif; //  dif array
		int i=0;
		float k;  // for correct division
		cout<<"enter array and push 'Enter' "<<endl;
		while (cin.peek() != '\n') {
		  cin >> a[i++];
		}
		cout<<endl;
		cout<<"enter coefficient ";
		cin>>k;
        dif = my_func(k,a,i);
        cout<<GetStringAnswer(dif)<<endl;
/**/
	return 0;
}
