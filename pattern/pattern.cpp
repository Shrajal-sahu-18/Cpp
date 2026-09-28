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