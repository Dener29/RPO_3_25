#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //Qt
	srand(time(NULL));





	return 0;
}

/*
	std::cout << "Hello world " << 100 + 10 << std::endl;
	std::cout << "info\n" << "FGHJGHJGJ\n\n\n\n\n";
	std::cout << "Денис\n\t" << 16 << "\nнет\n\t\t" << "есть мясо\n" << one << "руб\n\t" << "не знаю";
	// тип_данных имя_переменной
	int one = 0;
* 
* 
* 
*	чтобы переменную нельзя было изменить - const
	типы данных:
	bool - true/false  0 - false 
	char - 'r' один символ '+' 43  ot - 128 do 127
	unsigned char - 0 - 255

	short - 123 ot -32768 do 32767
	unsigned short - 123 0 -- 65535

	int - 123456 -  -21474836448--21474836447
	unsigned int 123456 0 - 4294967295

	float 123.542 +-3.4e-38...3.4e+38

	double 123123.123123 +- 1.7e-308...1.7e-308
	long double no comment 3.4-4932

	long long int ..............

	auto ??? 



	операторы: 


	математические: + - / * % () ++ -- += -= *= /= = 
	сравнительные: < > <= >= == != <=>
	логические: && - и || - или ! - не 

	ТАБУ: goto   and or not    int номерОдин;


КАЛЬКУЛЯТОР 
double one = 0;
	double two = 0;
	char sym;
	while (true)
	{
		std::cout << "Привет , это калькулятор , вначале ты должен выбрать числа с которыми хочешь выполнить действие , а потом знак для него , удачи:)\n";
		std::cout << "Введи первое число: ";
		std::cin >> one;
		std::cout << "\nВведи второе число :";
		std::cin >> two;
		std::cout << "\nВведи действие(+ , - , * , /):" ;
		std::cin >> sym;




		if (sym == '+')
		{
			std::cout << "твой ответ: " << one + two;
			break;
		}
		else if (sym == '-')
		{
			std::cout << "твой ответ: " << one - two;
			break;
		}
		else if (sym == '*')
		{
			std::cout << "твой ответ: " << one * two;
			break;
		}
		else if (sym == '/')
		{
			if (two != 0)
			{
				std::cout << "твой ответ: " << one / two;
			}
			else
			{
				std::cout << "НА НОЛЬ ДЕЛИТЬ НЕЛЬЗЯ !!!!!!";
			}

			break;
		}
		else if (sym == '/' || or && two != 0 && )
		{
			std::cerr <<
			std::clog <<
			std::cout << "твой ответ: " << one / two;

			break;
		}
	
		else
		{
			std::cout << "Такой знак наш калькулятор не поддерживает...попробуй еще раз\n";

			}
	}
	ДИСКРИМИНАНТ 
	double a = 0, b = 0, c = 0 , d = 0 , x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите A: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << a << "x^2" << b << "x + " << c << "= 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "Дискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "корней нет !\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "один корень: " << x1 << "\n";
	}
	else if (d > 0)
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d))/ (2 * a);
		std::cout << "x1:" << x1 << "\n";
		std::cout << "x2:" << x2 << "\n";

	ЦИКЛЫ

	int schet = 0;
	int prov = 0;
	while (true)
	{
		std::cout << "Ввведите любое число: ";
		std::cin >> prov;
		schet += prov;
		if (prov == 0)
		{
			std::cout << "Все числа в сумме: " << schet;
			break;
		}
	}

		int a = 0;
	do
	{
		std::cout << "Выберите пункт меню \n 1) Ларионов \n 2) Александр \n 3) Дмитриевич : ";
		std::cin >> a;

	} while (a < 1 || a > 3);

	if (a == 3)
	{
		std::cout << " Дмитриевич";
	}
	else if (a == 2)
	{
		std::cout << " Александр\n";
	}
	else
	{
		std::cout << " Ларионов\n";
	}



		const int ogr = 10;
	int massiv[10]{};
	double summplus = 0, summminus = 0 , arif = 0;


	for (size_t i = 0; i < ogr; i++)
	{
		massiv[i] = rand() % 21 - 10;
		std::cout << massiv[i] << "\n\n";
	}
	for (size_t i = 0; i << ogr; i++)
	{
		std::cout << massiv[i];
	}

	for (size_t i = 0; i < ogr; i++)
	{
		if (massiv[i] > 0)
		{
			summplus += massiv[i];
		}
		else if (massiv[i] < 0)
		{
			summminus += massiv[i];
		}
	}

	arif = (summplus + summminus) / ogr;
	std::cout << "сумма положительных чисел: " << summplus << "\n\n";
	std::cout << "сумма отрицательных чисел: " << summminus << "\n\n";
	std::cout << "среднее арифметическое:  " << arif ;






	//std::foreach
	//const int row = 3, col = 4;
	//int arr[row][col]{ {1,2,3,4} , {3,2,1,0}, {5,,4,1} };

	const int row = 3, col = 4;
	int arr[row][col]{};
	for (size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 11;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

*/