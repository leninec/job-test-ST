
#include <iostream>
#include <conio.h>
#include "func.h"
#include "test.h"

using namespace std;


void PrintResult(const vector<int>& vect){
	 cout<<"[";
	       	    for (int c = 0 ; c<vect.size() ; ++c){
	       	    				if(c<(vect.size()-1)){

	       	    					cout<<vect[c]<<",";
	       	    				}
	       	    				else{
	       	                    cout<<vect[c];
	       	    				}
	       	    }
	       	    cout<<"],";
	       	    cout<<vect.size()<<endl;
}



int main() {
	/*************************************/
	// unit test//
	float a1[3] ={3,4,3.58};
	int k1 = 10;
	int n1 = 3;
	vector <int> dif1;
	vector <int> difCheck;
	difCheck.push_back(1);
	difCheck.push_back(2);

	dif1 = my_func(k1,a1,n1);
	cout<< "Result        = ";
	PrintResult(dif1);
	cout<< "Right answear = ";
	PrintResult(difCheck);
	if (difCheck == dif1){
		cout<<"test1 pass"<<endl;
	}else
	{
		cout<<"test1 fail"<<endl;
	}
	cout<<endl;

	/**************************************/

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
        PrintResult(dif);


	//getch();
	return 0;
}
