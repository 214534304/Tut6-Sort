#include <iostream>

using namespace std;

template <typename T>
void sort(T Array[], int count){               //buble sorting array in decending order
	
	int i, j;
	for (i = 0; i<count - 1; i++)
	{
		for (j = i + 1; j<count; j++)
		{
			if (Array[i]<Array[j])
			{
				T temp;
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
}


int main(){
	int i;

	// Size of the array
	int Size1 = 4;
	int Size2 = 5;
	int Size3 = 8;

	//Declaring and initialising my arrays of different data type
	int A[] = { 2, 4, 6, 8 };
	double B[] = { 1.20, 3.40, 5.60, 7.80, 4.55 };
	char name[] = "Ntuthuko";

    //calling sorting the array of integer from High to Low
	sort(A, Size1);

	//display the array of integers
	for (i = 0; i < Size1; i++)
		cout << A[i] << " ";
	    cout << endl;



}