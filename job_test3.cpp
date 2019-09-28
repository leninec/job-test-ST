
#include <iostream>
#include <conio.h>
#include "func.h"

using namespace std;

int main() {

		float a[8]; // source array
		vector<int> dif; //  dif array
		int i=0;
		float k;  // for correct division
		cout<<"enter array and push 'Enter' "<<endl;
		while (cin.peek() != '\n') {
		  cin >> a[i++];
		}
		cout<<"enter coefficient ";
		cin>>k;
        dif = my_func(k,a,i);
        cout<<"[";
       	    for (int c = 0 ; c<dif.size() ; ++c){
       	    				if(c<(dif.size()-1)){

       	    					cout<<dif[c]<<",";
       	    				}
       	    				else{
       	                    cout<<dif[c];
       	    				}
       	    }
       	    cout<<"],";
       	    cout<<dif.size()<<endl;

	getch();
	return 0;
}
