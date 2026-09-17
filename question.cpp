// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     int sum = a + b;
//     cout << "Sum = " << sum;

//     return 0;
// }

//Question - 3  avg marks
// #include <iostream>
// using namespace std;
// int main(){
//     int math;
//     int sci;
//     int eng;
//     cout<<"Enter math marks:";
//     cin>>math;
//     cout<<"Enter sci marks:";
//     cin>>sci;
//     cout<<"Enter eng marks:";
//     cin>>eng;
//     int avg = (math + sci + eng) / 3;
//     cout<<  "avg of marks is :"<<avg<<endl;
//     return 0;
// }

//Question - 4 Area of Square
// #include <iostream>
// using namespace std;
// int main(){
//     int side;
//     cout<<"Enter side of square:";
//     cin>> side;
//     cout<<"Area of square is :"<<side*side<<endl;
//     return 0;
// }

//Question - 5 Total cost of three item
// #include <iostream>
// using namespace std;
// int main(){
//     float pencost,pencilcost,erasercost;
//     cout<<"Enter Pencil Cost:";
//     cin>>pencilcost;
//     cout<<"Enter Pen Cost:";
//     cin>>pencost;
//     cout<<"Enter Eraser Cost:";
//     cin>>erasercost;
//     int totalcost = (pencost + pencilcost + erasercost);
//     cout<<"Total cost:"<<totalcost<<endl;
//     cout<<"Total cost with gst:"<<(totalcost + (0.18 * totalcost));

//     return 0;
// }

//Question - 6 Simple interest calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int p,r,t;
//     cout<<"Enter Principal:";
//     cin>>p;
//     cout<<"Enter rate:";
//     cin>>r;
//     cout<<"Enter time:";
//     cin>>t;
//     cout<<"Simple interest = "<<(p*r*t)/100 << endl;
//     return 0;
// }


//Question - 7 area of circle
// #include <iostream>
// using namespace std;
// int main(){
//     int radius;
//     cout<<"Enter radius of circle:";
//     cin>>radius;
//     cout<<"Area of circle:"<<(3.14 * radius * radius)<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     if (a > b)
//         cout << "Largest number = " << a;
//     else
//         cout << "Largest number = " << b;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"****\n***\n**\n*\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"****\n";
//     cout<<"***\n";
//     cout<<"**\n";
//     cout<<"*\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout<<a + b;
//     return 0;

// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     if (a > b)
//         cout << a << " is largest";
//     else
//         cout << b << " is largest";
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100; i++) {
//         if (i % 2 == 0)
//             cout << i << " ";
//     }
//    return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     long long fact = 1;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     cout << "Factorial = " << fact;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     if (n > 0)
//         cout << "Positive";
//     else if (n < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";
//     return 0;
// }

// Question - 9 Leap year yes or not
// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cout << "Enter year:";
//     cin >> year;

//     if (year % 4 == 0){
//         cout <<" Year is leap year.\n";
//     }else if (year % 100 == 0){
//         cout << "Is not a leap year.\n";
//     }else if (year % 400 == 0){
//         cout << "Leap year.\n";
//     }else {
//         cout << "Is not a leep year.\n";
//     }
//     return 0;
// }


// Question -10 Armstrong number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter 3 - digit number:";
//     cin>>n;
//     int num = n;
    
//     int digit1 = num % 10;
//     num /= 10;
//     int digit2 = num % 10;
//     num /= 10;
//     int digit3 = num % 10;
//     num /= 10;

//     int cubesum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

//     if (cubesum == n){
//         cout << n <<" is armstrong number.";
//     }else {
//         cout << "not a armstrong number";
//     }

//     return 0;
// }

//Income tax calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int income ;
//     float tax;
//     cout << "Enter your income(In lakhs):";
//     cin >> income;

//     if (income  <= 5){
//         tax = 0; 
//     }else if(income <= 10){
//         // 20%
//         tax = 0.2 * income;
//     }
//     else {
//         // 30%
//         tax = 0.3 * income;    
//     }
//     cout << "Tax  = "<< (tax * 100000) << endl;
//     return 0;
// }

// largest og three number
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout <<"Enter a:";
//     cin >>a;
//     cout <<"Enter b:";
//     cin >> b;
//     cout << "Enter c:";
//     cin >> c;

//     if (a >= b && a >=c){
//         cout << "largest is a = "<<a;
//     }else if (b >= c){
//         cout << "Largest is b = "<< b;

//     }else{
//         cout <<  "Largest is c ="<<c;
//     }


//     return 0;
   

// }

// Calculator
// #include <iostream>
// using namespace std;
// int main (){
//     int a,b;
//     char op;
//     cout << "Enter a:";
//     cin >> a;
//     cout << "Enter b:";
//     cin >> b;
//     cout << "Enter operator (+,-,*,/):";
//     cin >> op ;

//     switch (op) {
//     case '+':
//         cout << "Addition of a & b:"<< a+b <<endl;
//         break;
//     case '-':
//         cout << "Subsatraction of a & b :"<< a-b << endl;
//         break;
//     case '*':
//         cout << "Multiplication of a & b:"<<a*b << endl;
//         break ;
//     case '/':
//     // if (b == 0){
//     //     cout << "Dividing by zero is not allowed";
//     //     break;
//     // }else{
//     //     cout << "Division of a & b :"<< a/b<<endl;
//     //     break;
//     // }
//     switch(b){
//         case 0 :
//             cout << "Dividing by zero is not allowed"<<endl;
//             break;

//         default :
//             cout << "Division of zero :"<< a / b;
//             break;
//     }
//         break;
//     default :
//         cout << "Invalid operator.";
//         break;
        
//     }
    

//     return 0;
// }