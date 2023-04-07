#include"search.h"
#include"stdafx.h"
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}
void Search(double arr[],const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}
void Search(int arr[ROWS][COLS], const int[ROWS], const int[COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}
void Search(double arr[ROWS][COLS], const int[ROWS], const int[COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}
void Search(char arr[ROWS][COLS], const int[ROWS], const int[COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before) continue;

		int count = 0;
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << "Повторяется " << count << "раз " << endl;
	}
}