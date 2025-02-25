#include <iostream>
using namespace std;

template <typename T>
T* max_element(T arr[], int size) {
    if (size == 0) return nullptr;

    T* maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	
	int *pa = max_element(a,5); 
	cout << "Address of the highest value in array A is " << pa << "\n";
	cout << "The highest value in array A is "<< *pa << "\n";
	
	double *pb = max_element(b,9); 
	cout << "Address of the highest value in array B is " << pb << "\n";
	cout << "The highest value in array B is "<< *pb << "\n";

	return 0;
}
