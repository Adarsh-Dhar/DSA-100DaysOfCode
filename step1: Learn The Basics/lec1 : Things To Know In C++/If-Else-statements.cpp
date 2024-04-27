#include <string>
#include<iostream>
using namespace std;


string compareIfElse(int a, int b) {
	cin >> a;
	cin >> b;
	if(a < b){
		return "smaller" ;
	}
	else if(a > b){
		return"greater" ;
	}
	else {
		return "equal";
	}
}
