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