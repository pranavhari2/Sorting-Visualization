// main.cpp
// Project Title:		Merge Sort
// Project Description:	Merge Sort algorithm using Linked Lists
// Date Created:		May 11, 2019
// Last Modified:		May 13, 2019
// Author:			    Pranav Hari

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void BubbleSort(int[], int);
void Update(int[], int);
void SetColor(int);

// Set console text color

void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void BubbleSort(int _list[], int _size)
{
    int temp;

    for(int j=0;j<_size;j++)
	{
		for(int k=j+1;k<_size;k++)
        {
			if(_list[j]>_list[k])
			{
				temp=_list[k];
				_list[k]=_list[j];
				_list[j]=temp;
				Update(_list, _size);
                Sleep(500);
			}
        }

	}
}

// Update the screen and display the sorted graph10

void Update(int _list[], int _size)
{
    system("CLS");

    for (int i = 0; i < _size; i++)
    {
        for (int j = 0; j < _list[i]; j++)
        {
            cout <<  "-";
        }
        cout << "   " <<  _list[i];
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));

	int temp;
	int size;
	cout << "Enter size of list" << endl;
	cin >> size;

	int list[size];

	for(int i=0;i<size;i++)
	{
        list[i] = rand()%20+1;
	}

    cout << endl;

    BubbleSort(list, size);

	system("CLS");



	return 0;
}
