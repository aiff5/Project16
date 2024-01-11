#include<iostream> 
#include<ctime>
#include<string> 
using namespace std;
void merging(int arr1[5], int arr2[7], int arr3[12])
{
	cout << "Merged{";
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 5; i < 12; i++)
	{
		int j = 0;
		arr3[i] = arr2[i - 5];
	}
	for (int i = 0; i < 12; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << "}" << endl;

	for (int i = 0; i < 12; i++)
	{
		int temp;
		for (int j = 0; j < 12; j++)
		{
			if (arr3[j] > arr3[j + 1])
			{
				temp = arr3[j]; arr3[j] = arr3[j + 1]; arr3[j + 1] = temp;

			}
		}
	}

	cout << "In Accending order{"; for (int i = 0; i < 12; i++)
	{
		cout << arr3[i + 1] << " ";
	}
	cout << "}" << endl;

}

void Common(int a[5], int b[7])
{
	cout << "Common{"; for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (a[i] == b[j]) {
				cout << a[i] << " "; break;
			}
			else {
				0;
			}
		}

	}
	cout << "}" << endl;
}
bool isPalindrome(string sentence)
{

	int size = sentence.length(); int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (sentence[j++] != sentence[size--])
		{
			return false;
		}

	}
	return true;

}
int main()
{
	string sentence; srand(time(0)); int A[5];
	int B[7];
	int merged[12]; cout << "A{";
	for (int i = 0; i < 5; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << "}" << endl; cout << "B{";
	for (int i = 0; i < 7; i++)
	{

		B[i] = rand() % 100;
		cout << B[i] << " ";
	}
	cout << "}" << endl;

	//Merged Array

	merging(A, B, merged); Common(A, B);


	cout << "Enter the string :";
	getline(cin, sentence);
	if (isPalindrome(sentence) == 1)
	{

		cout << "YES";
	}
	else
	{
		cout << "NO";
	}



	cout << endl; return 0;
}
