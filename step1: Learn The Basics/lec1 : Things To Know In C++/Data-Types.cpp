#include<iostream>
using namespace std;

int dataTypes(string type) {

	cin >> type;
	if(type == "Integer" || type == "Float"){
		return 4;
	}
	else if(type =="Character"){
		return 1;
	}
	else{
		return 8;
	}

	
}