﻿#include<iostream>
int main() {
	setlocale(LC_ALL, "RU");
	int n,m;
	//нейтральный адресс
	
	int* pointer;

	//pointer = 0;//рабочий но неудобный способ!
	//pointer = NULL;	//более удобный способ но по факту - костыль!
	pointer = nullptr;// >>>самый эффективный и правильный способ!!<<< 


	if (pointer != nullptr)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован!\n";
		


	//модификации доступа указателей

	n = 7;

	//указатель на константу!. может быть обьявлен не инициализирован и перенаправлятся на другие области памяти 
	//но с его помощью НЕВОЗМОНО поменять значение памяти на которую он направлен!
	const int* pn1;
	pn1 = &n;
	//*pn1 = 5; // ошибка!
	std::cout << *pn1 << std::endl;

	//Константный указатель или указатель константа! 
	//не может быть обьявлен без инициальзации и не может быть перенаправлен на другие области памяти
	// но с его помощью МОЖНО менять память на которую он направлен
	int* const pn2 = &n;
	//pn2 = &m;//ошибка!
	*pn2 = 15;
	std::cout << *pn2 << std::endl;

	//константный указатель на константу!
	//не может быть обьявлен без инициализации и не может быть перенаправлен на другую область памяти 
	//с его помощью так же невозможно менять память на которую он направлен ! 
	//с его помощью можно только получать значение на которое он направлен!!!
	const int* const pn3 = &n;
	//pn3=&m //перенаправить нельзя! ОШибка!
	//*pn3 = 42;// ошибка! 
	std::cout << *pn3 << std::endl;













	return 0;
}