#include <iostream> 
using namespace std;

//initlize the value of "null" 
# define null 0  

//global variable 
const int M = 12; // rows
const int N = 12; // columns
int i, j;

//function for printing the grid value 
void print(int arr[M][N])
{
	for (i = 0; i < M; i++)
	{
		cout << "[";
		for (j = 0; j < N; j++) 
		{
			if (j != N - 1) 
				cout << arr[i][j] << " , ";
			else 
				cout << arr[i][j];
		}
		       cout << "]";
				cout << "\n";
	}
}

//function for getting value for grid from user
void input(int arr[M][N])
{
	for (i = 0; i < M; i++) 
	{
		for (j = 0; j < N; j++)
		{
			//skip the predefined value in grid 
			if (arr[i][j] == arr[2][1] || arr[2][7] || arr[3][1] || arr[3][8] || arr[4][11] || arr[5][3] ||
				arr[5][4] || arr[6][11] || arr[8][2] || arr[8][8] || arr[10][5] || arr[10][6] || arr[11][5] || 
				arr[11][6])
			{
				continue;
			}

			cout <<"enter value at "<< "[" << i << "," << j << "]" << ":";
			cin >> arr[i][j];
		}
	}

}



int main()
{
	// name of grid 
	int arr[M][N];


    // give null value to black box in grid 
	arr[2][1] = null;
	arr[2][7] = null;
	arr[3][1] = null;
	arr[3][8] = null;
	arr[4][11] = null;
	arr[5][3] = null;
	arr[5][4] = null;
	arr[6][11] = null;
	arr[8][2] = null;
	arr[8][8] = null;
	arr[10][5] = null;
	arr[10][6] = null;
	arr[11][5] = null;
	arr[11][6] = null;

    // function call
	input(arr);

	// function call
	print(arr);

	return 0;
}
