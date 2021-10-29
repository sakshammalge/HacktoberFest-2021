#include <iostream>
using namespace std;

int main(){
	//Conjecture
	//3x+1 
	//divide by 2
	int num;
	cin >> num;
	while (num != 1){
		if (num % 2 != 0){
			cout << num << " ";
			num = (3*num) + 1;
		}
		else if (num % 2 == 0){
			cout << num << " ";
			num = (num / 2);
		}
		if (num == 1){
			cout << num << " ";
		}
	}
	return 0;

}

