#pragma once

#include <iostream>

/*
					#pragma once



This line is referred to as the compiler prompt and is placed inside your library file within the C++ files.

Its primary function is to prevent the calling file from being duplicated more than once within the calling file during compilation.

It is included in the header griuds or include griuds, which is a technique that works to avoid calling the file (repeated definitions) more than once in the calling file.



Conclusion:


The compiler should not include this file more than once in the calling file





بالعربية : 

هذا السطر يٌطلع عليه بإسم الـ موجه المترجم يتم وضعه داخل ملف مكتبة الخاص بك ضمن ملفات الـ لغة سي بلس بلس

وظيفته الأساسية  يعمل علي منع تكرار الملف الإستدعاء اكثر من مرة داخل ملف الاستدعاء اثناء عملية التجميع

و يٌضمن داخل مسمى الـ header griuds  او الـ include griuds  تعتبر هذه تقنيه وظيفتها تعمل على تجنب استدعاء الملف  ( التعريفات المتكررة ) اكثر من مرة في ملف الاستدعاء



الخلاصة :


يعمل علي االمترجم عدم تضمين الملف هذا اكثر من مرة في ملف الاستدعاء




				in same : 




			#ifndef NAME_HEADER_FILE 
			#define NAME_HEADER_FILE 



			// Codes 






			#endif 

*/

namespace ReadNum {

	int readNumberPositive(std::string const message) {

		int number{}; 

		do {

			std::cout << message;
			std::cin >> number;
			while (std::cin.fail()) {

				std::cin.clear();
				std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

				std::cout << "Enter the Number Agine : ";
				std::cin >> number;

			}
		} while (number < 0); 

		return number; 
	}


};


