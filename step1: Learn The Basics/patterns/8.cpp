#include<iostream>
using namespace std;

void nStarTriangle(int n) {
     for(int j = n ; j >0 ; j--){
		for (int i = n-1; i >= j; i --){
				cout << " " ;
					
			}

	 for(int k = 0; k< 2*j - 1 ; k ++){
             cout << "*";
     }
     cout << " " << endl;
	}
}