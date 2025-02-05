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

class array1{
	int total_size;
	int used_size;
	int* ptr;
public:
	array1(int t,int s) {
		total_size = t;
		used_size = s;
		ptr = new int[t];

	}
	void create() {
		for (int i = 0;i < used_size;i++) {
			cout << "Enter the value for" << i + 1 << "element" << endl;
			cin >> ptr[i];
		}
}
	void show() {
		for (int i = 0;i < used_size;i++) {
			cout << "the value of" << i + 1 << "element is" << ptr[i] << endl;
		}

	}
};
int main() {
	array1 arr(20,5);
	arr.create();
	arr.show();
	return 0;



}