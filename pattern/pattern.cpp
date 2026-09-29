// Square Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     for( i = 1; i <= 4; i++){
//         for(int j = 1; j <= 4 ; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     cout << i;
// }


// Traingular Pattern 
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= i ; j++){
//             cout << "*"<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Inverted Star Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int  i = 1; i<= n; i++){
//         for(int j = 5; j >= i; j--){
//             cout << "*"<<" ";
//         }
//         cout << endl;
//     }
// }


// Another Method
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=(n-i+1); j++){
//             cout <<"*"<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Half pyramid pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1; i<= n; i++){
//         for(int j = 1; j <=i ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Character half pyramid pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=i; j++){
//             cout << ch; // isko ch++ bhi likh sakte hai
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Hollow pattern

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=n; i++){
//         cout <<"*";
//         for(int j = 1; j <= n-1;j++){
//             if(i ==1 || i == n){
//                 cout <<"*";
//             }
//             else{
//                 cout << " ";
//             }

//         }
//         cout << "*" << endl;
//     }
//     return 0;
// }



//Inverted & Rotated Half-Pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <= n; i++){
//         // Spaces
//         for(int j = 1; j <= n-i;j++){
//             cout <<" ";
//         }
            // Stars
//         for(int k = 1;k <= i; k++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
//     return 0;
    
// }



// Floyd,s Traingle
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i = 1; i <= n; i++){
//         //Numbers
//         for(int j = 1; j <= i;j++){
//             cout <<num++<<" ";
//         }
//         // for(int k = 1; k <= n-i;k++){
//         //     cout <<" ";
//         // }
//         cout << endl;
//     }
//     return 0;
// }



// Diamond Pattern
// #include <iostream> 
// using namespace std;
// int main(){
//     int n = 4;
//     //1st Pyramid
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i;j++){
//             cout <<" ";
//         }
//         for(int j = 1; j <= (2 * i - 1);j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // 2nd Pyramid  
//     for(int i = n; i >=1;i--){
//         // Spaces
//         for(int j =1; j<= n - i ;j++){
//             cout <<" ";
//         }
//         // Stars
//         for(int j = 1; j <= 2 *i -1;j++){
//             cout <<"*";
//         }
//         cout <<endl;
//     }


//     return 0;
// }



// Butterfly pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i <=n;i++){
//         //Stars
//         for(int j = 1; j <= i; j++){
//             cout <<"*";
//         }
//         for(int j = 1; j <= 2 * (n - i); j++){
//             cout <<" ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout <<"*";
//         }
//         cout <<endl;
//     }
//     for(int i = n; i>= 1; i--){
//         for(int j =1; j<= i; j++){
//             cout << "*";
//         }
//         for(int j = 1; j <= 2 *(n-i); j++){
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout <<"*";
//         }
//         cout <<endl;
//     }
    
// }

//0-1 Traingle Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     bool val = true;
//     int n = 5;
//     for(int i = 0;i<n; i++){
//         for(int j = 0; j<= i ; j++){
//             cout << val<<" ";
//             val = !val;
//         }
//         cout <<endl;

//     }
//     return 0;
// }