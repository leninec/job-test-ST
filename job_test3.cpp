#include <iostream>
#include "func.h"
#include "test.h"

using namespace std;

int main() {
	/*************************************/
	// unit test//
	/*************************************/
/*float a1[3] ={3,4,3.58};
	int kT = 10;
	int nT =  3;
	string answer = "[1],1";
	TestFunction(a1, nT, kT, answer, "Test1");
	//test 3
	float a3[5] ={3.5, 3.1, 3.9, 4, 4.1};
	kT = 10;
	nT =  5;
	answer = "[2,3,4],3";
	TestFunction(a3, nT, kT, answer, "Test3");
	//test4
	float a4[8] ={1,2,5,10,2,2,1,10};
	kT = 10;
	nT =  8;
	answer = "[3,7],2";
	TestFunction(a4, nT, kT, answer, "Test4");
	//test5
	float a5[2] ={1,6};
	kT = 10;
	nT =  2;
	answer = "[1],1";
	TestFunction(a5, nT, kT, answer, "Test5");
	//test6
	float a6[5] ={1,5,-5,-2,-10};
	kT = 10;
	nT =  5;
	answer = "[1],1";
	TestFunction(a6, nT, kT, answer, "Test6");
	//test7
	float a7[5] ={1,5,5,2,10};
	kT = 0;
	nT = 5;
	answer = "[4],1";
	TestFunction(a7, nT, kT, answer, "Test7");
	//test8
	float a8[5] ={5,5,5,5,5};
	kT = 0;
	nT = 5;
	answer = "[0,1,2,3,4],5";
	TestFunction(a8, nT, kT, answer, "Test8");
	//test9
	float a9[5] ={1,2,3,4,5};
	kT = 100;
	nT = 5;
	answer = "[0,1,2,3,4],5";
	TestFunction(a9, nT, kT, answer, "Test9");
	//test10
	float a10[5] ={100,20,30,40,50};
	kT = 50;
	nT =  5;
	answer = "[0,4],2";
	TestFunction(a10, nT, kT, answer, "Test10");
/**/
	/**************************************/

/**/	// input data for user
		float a[8]; // source array
		vector<int> dif; // vector for write index
		int n = 0;
		float k;  // float for correct division
		cout<<"Enter array and push 'Enter' "<<endl;
		while (cin.peek() != '\n') {
		  cin >> a[n++];
		}
		cout<<"Enter coefficient "<<endl;
		cin>>k;
        dif = my_func(k,a,n);
        cout<<GetStringAnswer(dif)<<endl;
/**/
	return 0;
}
