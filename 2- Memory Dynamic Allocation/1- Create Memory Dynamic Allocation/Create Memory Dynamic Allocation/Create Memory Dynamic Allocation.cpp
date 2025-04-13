// Create Memory Dynamic Allocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main()
{
    int* pointerX; 
    int* pointerY; 

    // Create Dynmicaly Memory 
    /*
    
    new : using to create memory dynmic allocate to creation run-time not compile time 

    int : is the data type of memory 

    new int return is memory address dynamicly 



    // -------------------------------------

    *More detailed explanation*

     ( new int ) : 

    *This Expression means in the spirit of telling the interpreter
    to reserve a memory location or memory space to store the address 
    of this variable of a type you know well.


    *more comprehensive information

    *This line tells the operating system, “Operating system,
    reserve memory space to store only one value 
    of the type of pointer you define.


    //--------------------------------------------------

    ( int* pointerX ) 
    pointerX = new int  ;

    *The main function of this line is to let the cursor point to the address that has been allocated


    باللغة العربية : 


      *شرح أكثر تفصيلاً*


  *هذا التعبير يعني في روح إخبار المترجم الفوري
  بحجز موقع ذاكرة أو مساحة ذاكرة لتخزين عنوان
  لهذا المتغير من النوع الذي تعرفه جيدًا.


  *مزيد من المعلومات الشاملة

  *هذا السطر يخبر نظام التشغيل ”نظام التشغيل,
  حجز مساحة ذاكرة لتخزين قيمة واحدة فقط
  من نوع المؤشر الذي تحدده.


  //--------------------------------------------------



  *الوظيفة الرئيسية لهذا السطر هي السماح للمؤشر بالإشارة إلى العنوان الذي تم تخصيصه

    */


   //  pointerX , pointerY = new int;  // errorr 
    
    cout << "The Address Pointer X : " << pointerX << endl; 
    cout << "The Address Pointer Y : " << pointerY << endl; 

}

