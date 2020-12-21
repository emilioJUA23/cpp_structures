#include <iostream>

using namespace std;

void while_func(int n){
	int i = n;
	while(i > 0){
		i--;
		cout << "while iteration backwards is: " << i << endl;
	}

}

void for_func(int n){
	for(int i=0; i < n; i++){
		cout << "for iteration is: " << i <<  endl;
	}
}

int main(){
	string name = "Emilio";
	int age = 26;
	cout << "Hellow World!"  << endl;
	cout << "My name is: "<< name << endl;
	cout << "My age is: "<< age << endl;
	for_func(20);
	while_func(20);
	return 0;
}
