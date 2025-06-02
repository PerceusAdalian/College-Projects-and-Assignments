///**
// * Created: 4/20/2025
// * Student: Perceus Willy
// * Class: CSC 131-A
// * Homework 5 : Pointer operations.
// **/
//
//#include <iostream>
//#include <memory>
//
//using namespace std;
//
////Pretty prints an array.
//void displayArray(const int *nums, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << *(nums + i) << " ";
//		if (i % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//}
//
////Copies a given array into a new array, reversing the elements.
//int* reverseArray(const int *oArr, int size)
//{
//	cout << "Reversed array: " << endl;
//	int* nArr = new int[size];
//	for (int i = 0; i < size; ++i)
//	{
//		*(nArr + i) = *(oArr + (size - 1 - i));
//	}
//	return nArr;
//}
//
////Takes the average of a given array.
//double average(const int *nums, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		sum += *(nums + i);
//	}
//	double average = sum / size;
//	return average;
//}
//
////Gets an array's multiples of 7 using a modulus expression to find the nearest multiple of 7.
//unique_ptr<int []> getMultiplesOf7(const int *oArr, int size, int &newArraySize)
//{
//	int count = 0;
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (*(oArr + i) % 7 == 0)
//		{
//			++count;
//		}
//	}
//
//	newArraySize = count;
//	unique_ptr<int[]> nArr(new int[count]);
//	int j = 0;
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (*(oArr + i) % 7 == 0)
//		{
//			nArr[j] = *(oArr + i);
//			++j;
//		}
//	}
//
//	return nArr;
//}
//
//int main()
//{
//	int arr[99];
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int* ptr = arr;
//
//	for (int i = 0; i < size; ++i)
//	{
//		*(ptr + i) = i + 1;
//	}
//
//	displayArray(ptr, size);
//	cout << endl;
//
//	int* rArr = reverseArray(arr, size);
//	displayArray(rArr, size);
//	cout << endl;
//
//	double arrAvg = average(arr, size);
//	cout << "Average of the values is " << arrAvg << endl;
//	cout << endl;
//
//	int newArraySize = 0;
//	unique_ptr<int[]> multiplesOfArr = getMultiplesOf7(arr, size, newArraySize);
//
//	cout << "Multiples of 7 in the array are: ";
//	for (int i = 0; i < newArraySize; ++i)
//	{
//		cout << multiplesOfArr[i] << " ";
//	}
//	cout << endl;
//
//	delete[] rArr;
//	return 0;
//}
