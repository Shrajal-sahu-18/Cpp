// #include <iostream>
// using namespace std;
// void sayhello(){
//     cout << "Hello :)";
// }
// int main(){
//     sayhello();//Function Call

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void sayhello(){
//     cout <<" hello;\n";
// }
// void assistant(){
//     sayhello();
//     cout <<"Work Done";
// }
// int main(){
//     assistant();
//     return 0;
// }



//Forward Declaration
// #include <iostream>
// using namespace std;
// void sayhello();
// int main(){
//     sayhello();
//     return 0;
// }

// void sayhello(){
//     cout << "Hello :)\n";
// }



// #include <iostream>
// using namespace std;
// int sum (int a,int b = 1){ // a,b are Parameters // b ki default value 1 hqai agar ham koi value pass nhi karenge to 
//     int sum = a + b;
//     return sum;
// }

// int diff(int a,int b){
//     int diff = a -b;
//     return diff;
// }
// int main(){
//     int s = sum(3,5);// 3,5 are Arguments
//     cout << "Sum :"<< s<< endl;
//     int d = diff(5,3);
//     cout <<"Difference :"<<d;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int prod(int a,int b){
//     return a*b;
// }
// int main(){
//     cout << prod(10,20)<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool iseven(int n){
//     if (n % 2 == 0){
//         return true;
//     }else{
//         return false;
//     }

    
// } 
// int main(){
//     cout << iseven(7)<<endl;
//     return 0;
// }


//Factorial
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main(){
//     cout << "Factorial : "<< factorial(5);
// }

// Global scope vaeriable
// #include <iostream>
// using namespace std;
// int num =25;
// int main(){
//     cout << num;
//     return 0;
// }



// Prime Number
// #include <iostream>
// using namespace std;
// bool isprime(int n){
//     if (n == 1){
//         return false;
//     }
//     for(int i = 2; i*i <= n; i++){
//         if(n % i == 0){
//             return false;
//         }

//     }
//     return true;
// }

// bool isprime2(int n){
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i <= n-1; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     cout <<isprime(34)<<endl;
//     cout <<isprime2(18);
//     return 0;
// }

//Basic function