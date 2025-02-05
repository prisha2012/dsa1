//#include <iostream>
//using namespace std;
//
//void foo(int array[], int length) {
//	int sum = 0;
//	int product = 3;
//	for (int i = 0;i < length;i++) {
//		sum += array[i];
//
//	}
//	for (int i = 0;i < length;i++) {
//		product *= array[i];
//	}
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	foo(arr, 3);
//	return 0;
//}
/* time complexity of teh above program is O(n) as first part of function is k1 second k2n and third k3n therefire after solving the time complexity comes out to be O(n)*/

#include<iostream>
using namespace std;

class array {
	int total_size;
	int used_size;
public:
	array(int t,int s) {
		total_size = t;
		used_size = s;

	}
};
int main() {

}