#include <iostream>
#include <iomanip>  
using namespace std;

int main() {

     // printf = print formated 
     //  syntax printf function = (const char  * format , .... ) 

    /*
    
        format = (string including the format spicifier ) 
        Syntax of format inside the printf --+ 

            % [ flags ] [ width ] [ .presion ] [ length ] spifier 

        .... = dynamic number or list of variable 

    */

    /* format spicifier usiing the printf 
    * 
    * %i , %d = intger 
    * %F , %f = floating point ( double , float ) 
    * %G ,%g = include the %F,%f and %E , %e 
    * %e , %E = scific notation  
    * %p = print pointer (address ) 
    * %s = string ( array of character ) 
    * %c= character 
    * %% = print % 
    * 
    */


        /*      [ flag ] ( - , zero , space , + ) 
        * 
        * 
        *  ( - ) --> جعل النص او الرقم ينطبع في المحاذاة جهة اليشار لانو بشكل افتراضي الرقم او النص بيجي في الجهة اليمين 
        *  ( + ) --> هاد العلم بمجرد ااضافته بطبع الـ اشارة الععدد سواء موجبة او سالبة لانو سالبة بنطبع عادي لكن الاشارة الموجبة ما بنطبع هاد العلم بطبعها 
        *  ( space ) -->  هاد العلم بحط فراغ بدل الـ اشارة الموجبة في العدد الموجب 
        *  ( zero ) --> هذا العلم بمجرد اضافته يعمل علي اضافة العدد صفر بجانب نص او عدد ويتم التحكم في الاتجاه لو ضفت - او بدون 
     
    */


    // examples if Flages //

    printf("|%-10s|\n", "Ahmed");
    // Aligment if the right 
    printf("|%10s|\n", "Ahmed");

    printf("|%-5s|\n", "AhmedJeh"); 
    cout << endl << endl;

    // ------------------------ // 

    int number1 = 10; 
    int number2 = -10; 

    printf("The Number is sign Positive = %+d\n", number1);
    printf("The Number is sign Negative = %+d\n", number2);

    cout << endl << endl;

    // ------------------------ // 
    printf("|% d|\n", 5);
    printf("|% d|\n", -5); 
    cout << endl << endl;

    // ------------------------ // 
    printf("|%-010i|\n", 5);
    printf("|%010d|\n", 5);

    cout << endl << endl;

    // ------------------------ // 

    printf("|% 5d|\n", 9);
    printf("|%-5d|\n", 9);
    cout << endl << endl;
    printf("|% d|\n", 10);
    printf("|% d|\n", -10);


    cout << endl << endl; 

    int array[5]{100 , -4 , 150 , -80, -100};

    for (int i : array) {
        printf("|%-4d|\n", i); 
    }
    
    cout << endl << endl;

    int array2[5]{ 10 , -4 , 9 , -80, -3 };

    for (int i : array2) {
        printf("|%3d|\n", i);
    }

    cout << endl << endl;

    printf("|%.0d|", 5); 


    return 0;
}
