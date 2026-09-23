// ## Boiler Plate Code
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello world";
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     const int n = 25;

//     return 0;
// }

// #include <iostream>
// // symbollic constants
// #define X 25
// using namespace std;
// int main(){
//     const int n = 25;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float pi = 3.14;
//     cout<<(char)('A'+1)<<endl;
//     cout<<(int)(pi);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<((bool)3+ 2)<<endl;
//     return 0;
// }

// //Arithematic Operator
// #include <iostream>
// using namespace std;
// int main(){
//     //Arithematic Operator
//     int a = 5;
//     int b = 3;
//     cout<<"+"<<a+b<<endl;
//     cout<<"-"<<a-b<<endl;
//     cout<<"*"<<a*b<<endl;
//     cout<<"/"<<a/b<<endl;
//     cout<<"%"<<a%b<<endl;
//     return 0;

// }

// //Unary Operator
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 3;
//     a++;
//     cout<<"a = " << a << endl;
//     a--;
//     cout <<"a =    " << a << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     // int a= 3;
//     // int b = a++;
//     // cout<<b<<endl;
//     // b = ++a;
//     // cout<<b;
//     int a = 3;
//     int b = a--;
//     cout<<b<<endl;
//     b = --a;
//     cout<<b<<endl;

//     return 0;
// }

// //Assignment Operator
// #include <iostream>
// using namespace std;
// int main(){
//     int a  = 5;
//     a += 5;
//     cout<<a<<endl;
//     a -=5;
//     cout<<a<<endl;
//     a *= 5;
//     cout<<a<<endl;
//     a /=5;
//     cout<<a<<endl;

//     return 0;

// }



// // Relational Operator
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 3;
//     int b = 5;
//     cout<< (a > b)<<endl;
//     cout<<(a < b)<<endl;
//     cout<<( a >= b )<<endl;
//     cout<< (a <= b)<< endl;
//     cout<<(a == b)<<endl;
//     cout<<(a != b)<<endl;


//     return 0;
// }


// //Logical Operator
// #include <iostream>
// using namespace std;
// int main(){
//     // cout << ((3 < 5) && ( 10 > 5)); // 1
//     cout << ((3 < 5) && ( 10 == 5)); // 0 
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<((2<4) || (2>5))<<endl; // 1
//     cout<<((2 == 3) || (2 == 4))<<endl; // 0
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout << ( ! 3 == 5) << endl ;
//     return 0;
// }

// Conditional Statement
// #include <iostream>
// using namespace std;
// int main(){
//     int age ;
//     cout << "Enter your age:";
//     cin >> age;
    
//     if (age >= 18){
//         cout << "Can Vote"<<endl;
//     }else {
//         cout <<"Can't Vote"<<endl;
//     }
//     if( age >= 45){
//         cout << "Contest for Election";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     float marks ;
//     cout << "Enter your marks:";
//     cin >> marks;
    
//     if (marks >= 33){
//         cout << "Pass" << endl ;

//     }else {
//         cout << "Fail" ;
//     }
//     return 0;
// }


// Ternary Operator
// #include <iostream>
// using namespace std;
// int main(){
//     // bool isAdult;// 1, 0
//     // int age;
//     // cout << "Enter your age:";
//     // cin >> age;

//     // isAdult = age >= 18 ? true : false;
//     // cout << isAdult;
//     //largest using ternery operator
//     int a = 10 ;
//     int b = 15;
    
//     int largest;
    
//     largest  = a >= b ? a: b;
//     cout << largest;
//     return 0;
// }

// Switch Case
// #include <iostream>
// using namespace std;
// int main(){
//     int day ;
//     cout << "Enter day (1-7):";
//     cin >> day;
//     switch (day)
//     {
//     case  1:
//         cout << "Monday"<< endl;
//         break;
//     case 2:
//         cout << "Tuesday"<< endl;
//         break;
//     case 3:
//         cout << "Wednesday"<<endl;
//         break;
//     case 4:
//         cout << "Thursday"<<endl;
//         break;
//     case 5:
//         cout << "Friday"<<endl;
//         break;
//     case 6:
//         cout <<"Saturday"<<endl;
//         break;
//     case 7:
//         cout << "Sunday"<<endl;
//         break;

//     default:
//         cout << "Invalid day";
//         break;
//     }
//     return 0;
// }

// For Loop

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     for ( num = 1; num <= 10; num++){
//         cout << num<<" ";
//     }
        
    
//     cout << num;
    
//     return 0;
// }


//print apna collage 5 times
// #include <iostream>
// using namespace std ;
// int main(){
//     for(int i = 1;i <= 5; i++){
//         cout <<"Apna college"<< endl;
//     }
// }


// print number 1 to n
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter number:";
//     cin >> n;
//     for(int i = 1; i <= n ; i++){
//         cout << i << endl;
//     }
//     return 0;
// }


// Sum of n natural number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter number:";
//     cin >> n;
//     int sum = 0;
//     for(int i = 1 ; i <= n; i++){
//         sum += i;
        
//     }
//     cout << sum;
//     return 0;
// }

// While Loop
// #include <iostream>
// using namespace std;
// int main(){
//     int count = 1;
//     while(count < 3){
//         cout << count << " ";
//         count ++;
//     }
//     return 0;

//     cout << endl;

//     return 0;
// }

// Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 4; i++){
//         cout << "****"<<endl;
//     }
//     return 0;
// }



// n to 1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number:";
//     cin >> n ;
//     for(int i = 1; n >= i; n--){
//         cout << n << " ";

//     }

// }

// Do while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     do {
//         cout << i << " ";
//         i++;
//     }while(i <= 5);
//     cout << endl;
//     return 0;;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int  val = 1;
//     do{
//         cout << "Apna collage in do-while loop"<< endl;

//     }while(val > 5);

//     while(val > 5){
//         cout << "apna collage in while loop";
//     }
//     return 0;
// }

// Break 

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     while(i <= 10){
//         if (i == 3){
//             break;
//         }
//         cout << i << " ";
//         i ++;
        
//     }
   
//     return 0;
// }



// multiple of 10 break
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     do{
//         cout << "Enter number:";
//         cin >> n;
//         if(n % 10 == 0){
//             break;
//         }
//         cout << "You entered "<< n<< endl;

//     }while(true);
//      return 0;
// }

// Continue Statement
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i = 1;i <= 10; i++){
//         if(i == 3){
//             continue;
//         }
//         cout << i << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     do{
//         cout << "Enter number:";
//         cin >> n;
//         if (n % 10== 0){
//             continue;
//         }
//         cout << "You enter :" << n << endl;

//     }while(true);
    
//     return 0;
// }

// Nested loop

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    for( i = 1; i <= 4; i++){
        for(int j = 1; j <= 4 ; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << i;
}