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


#include <iostream>
using namespace std;
bool iseven(int n){
    if (n % 2 == 0){
        return true;
    }else{
        return false;
    }

    
} 
int main(){
    cout << iseven(7)<<endl;
    return 0;
}

//Question