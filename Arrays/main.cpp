#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int    arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n);
void FillRand(char   arr[], const int n);
void FillRand(int    arr[ROWS][COLS], const int    ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const double ROWS, const int COLS);
void FillRand(char   arr[ROWS][COLS], const char   ROWS, const int COLS);

void Print(const int    arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char   arr[], const int n);
void Print(int    arr[ROWS][COLS], const int    ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const double ROWS, const int COLS);
void Print(char   arr[ROWS][COLS], const char   ROWS, const int COLS);

int    Sum(const int    arr[], const int n);
double Sum(const double arr[], const int n);
char   Sum(const char   arr[], const int n);
int    Sum(const int    arr[ROWS][COLS], const int    ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const double ROWS, const int COLS);
char   Sum(const char   arr[ROWS][COLS], const char   ROWS, const int COLS);

int    Avg(const int    arr[], const int n);
double Avg(const double arr[], const int n);
char   Avg(const char   arr[], const int n);
int    Avg(const int    arr[ROWS][COLS], const int    ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const double ROWS, const int COLS);
char   Avg(const char   arr[ROWS][COLS], const char   ROWS, const int COLS);

int    minValueIn(const int    arr[], const int n);
double minValueIn(const double arr[], const int n);
char   minValueIn(const char   arr[], const int n);
int    minValueIn(const int    arr[ROWS][COLS], const int    ROWS,const int COLS);
double minValueIn(const double arr[ROWS][COLS], const double ROWS,const int COLS);
char   minValueIn(const char   arr[ROWS][COLS], const char   ROWS,const int COLS);

int    maxValueIn(const int    arr[], const int n);
double maxValueIn(const double arr[], const int n);
char   maxValueIn(const char   arr[], const int n);
int    maxValueIn(const int    arr[ROWS][COLS], const int    ROWS, const int COLS);
double maxValueIn(const double arr[ROWS][COLS], const double ROWS, const int COLS);
char   maxValueIn(const char   arr[ROWS][COLS], const char   ROWS, const int COLS);

void shiftLeft(int    arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char   arr[], const int n, int number_of_shifts);
void shiftLeft(int    arr[ROWS][COLS], const int n, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int n, int number_of_shifts);
void shidtLeft(char   arr[ROWS][COLS], const int n, int number_of_shifts);

void shiftRight(int    arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char   arr[], const int n, int number_of_shifts);
void shiftRight(int    arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char   arr[], const int n, int number_of_shifts);

void Sort(int    arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char   arr[], const int n);
void Sort(int    arr[ROWS][COLS], const int    ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const double ROWS, const int COLS);
void Sort(char   arr[ROWS][COLS], const char   ROWS, const int COLS);

void UniqueRand(int    arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char   arr[], const int n);
void UniqueRand(int    arr[ROWS][COLS], const int    ROWS,const int COLS);
void UniqueRand(double arr[ROWS][COLS], const double ROWS,const int COLS);
void UniqueRand(char   arr[ROWS][COLS], const char   ROWS,const int COLS);

void Search(int    arr[], const int n);
void Search(double arr[], const int n);
void Search(char   arr[], const int n);
void Search(int    arr[ROWS][COLS], const int    ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const double ROWS, const int COLS);
void Search(char   arr[ROWS][COLS], const char   ROWS, const int COLS);

//#define ARRAYS_1
#define ARRAYS_2

void main()
{

#ifdef ARRAYS_1
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 3,5,8 };
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int   arr[ROWS][COLS], const int     ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const double ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const char ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const char arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS],const double ROWS,const int COLS)
{
    for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
}
void Print(char arr[ROWS][COLS], const char ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
}

int Sum(const int arr[], const int n)
{
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(const double arr[], const int n)
{
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(const char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(const double arr[ROWS][COLS], const double ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(const char arr[ROWS][COLS], const char ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const double arr[], const int n)
{
	return (double)Sum(arr, n)/n;
}
char Avg(const char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const double arr[ROWS][COLS], const double ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(const char arr[ROWS][COLS],const char ROWS,const int COLS)
{
    return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(const double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char minValueIn(const char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(const double arr[ROWS][COLS], const double ROWS, const int COLS)
{
	int min = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
}
char minValueIn(const char arr[ROWS][COLS], const char ROWS, const int COLS)
{
	int min = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(const double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

char maxValueIn(const char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] > max)max = arr[i][j];
			}
			return max;
	
		}
}
double maxValueIn(const double arr[ROWS][COLS], const double ROWS, const int COLS)
{
	int max = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
		return max;

	}
}
char maxValueIn(const char arr[ROWS][COLS], const char ROWS, const int COLS)
{
	int max = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
		return max;

	}
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i + 1];
			}
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];

			}
		}
	}
}
void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;

				}
			}
		}
	}
}