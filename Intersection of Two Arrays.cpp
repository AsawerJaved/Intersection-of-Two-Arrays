#include <iostream>
using namespace std;

int main(){
	char arr1[20];
	char arr2[10];
	char arr3[10];
	arr3[0] = '\0';
	int k = 0;
	
	// Sample Input
	// A s @ s @ z P O L M N # @ h j k l q w e
	// A S A @ z ! ! E w E
	
	cout << "Input values in array 1: ";
	cin >> arr1;
	
	cout << "Input values in array 2: ";
	cin >> arr2;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (arr2[i] == arr1[j])
			{
				arr3[k] = arr2[i];
				k++;
			}
		}
	}
	cout << "Array after Intersection: \n";
	for (int i = 0; i < k; i++)
	{
		cout << arr3[i];
	}
	if (k == 0)
	{
		cout << "\nNo values for intersection! \n";
	}
	cout << endl;
	return 0;
}
