#include <iostream>

using namespace std;

// bool isPerfect(int); 
// You could include the declaration of this function if you want

bool isPerfect(int num){
	int sum = 0;
	for(int i = 1; i < num; i++){
		if(num%i == 0)
			sum += i;
	}
	
	return sum == num;
}

//int main(){
//	// Remember to test your function properly
//	int x, y; cin >> x >> y;
//	for(int i = x; i <= y; i++){
//		if(isPerfect(i))
//			cout << i << endl;
//	}
//	
//	return 0;
//}
