#include <iostream>
#include "func.h"
#include "test.h"

using namespace std;


int main() {
	/*************************************/
	// unit test//
	/*************************************/
/**/
	float a1[3] ={3,4,3.58};
	int k1 = 10;
	int n1 =  3;
	string answer1 = "[1],1";
	TestFunction(a1,n1,k1,answer1,"Test1");
	//test 3
	float a3[5] ={3.5, 3.1, 3.9, 4, 4.1};
	int k3 = 10;
	int n3 =  5;
	string answer3 = "[2,3,4],3";
	TestFunction(a3,n3,k3,answer3,"Test3");
	//test4
	float a4[8] ={1,2,5,10,2,2,1,10};
	int k4 = 10;
	int n4 =  8;
	string answer4 = "[3,7],2";
	TestFunction(a4,n4,k4,answer4,"Test4");
	//test5
	float a5[2] ={1,6};
	int k5 = 10;
	int n5 =  2;
	string answer5 = "[1],1";
	TestFunction(a5,n5,k5,answer5,"Test5");
	//test6
	float a6[5] ={1,5,-5,-2,-10};
	int k6 = 10;
	int n6 =  5;
	string answer6 = "[1],1";
	TestFunction(a6,n6,k6,answer6,"Test6");
	//test7
	float a7[5] ={1,5,5,2,10};
	int k7 = 0;
	int n7 = 5;
	string answer7 = "[4],1";
	TestFunction(a7,n7,k7,answer7,"Test7");
	//test8
	float a8[5] ={5,5,5,5,5};
	int k8 = 0;
	int n8 = 5;
	string answer8 = "[0,1,2,3,4],5";
	TestFunction(a8,n8,k8,answer8,"Test8");
	//test9
	float a9[5] ={1,2,3,4,5};
	int k9 = 100;
	int n9 = 5;
	string answer9 = "[0,1,2,3,4],5";
	TestFunction(a9,n9,k9,answer9,"Test9");
	//test10
	float a10[5] ={100,20,30,40,50};
	int k10 = 50;
	int n10 =  5;
	string answer10 = "[0,4],2";
	TestFunction(a10,n10,k10,answer10,"Test10");
/**/
	/**************************************/
/* */
	// inout data for user
		float a[8]; // source array
		vector<int> dif; //  dif array
		int i=0;
		float k;  // for correct division
		cout<<"Enter array and push 'Enter' "<<endl;
		while (cin.peek() != '\n') {
		  cin >> a[i++];
		}
		cout<<"Enter coefficient "<<endl;
		cin>>k;
        dif = my_func(k,a,i);
        cout<<GetStringAnswer(dif)<<endl;
/**/
	return 0;
}
