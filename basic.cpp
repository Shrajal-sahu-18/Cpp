## Boiler Plate Code
#include<iostream>
using namespace std;

int main(){
    cout<<"Hello world";
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    const int n = 25;

    return 0;
}

#include <iostream>
// symbollic constants
#define X 25
using namespace std;
int main(){
    const int n = 25;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    float pi = 3.14;
    cout<<(char)('A'+1)<<endl;
    cout<<(int)(pi);

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    cout<<((bool)3+ 2)<<endl;
    return 0;
}

//Arithematic Operator
#include <iostream>
using namespace std;
int main(){
    //Arithematic Operator
    int a = 5;
    int b = 3;
    cout<<"+"<<a+b<<endl;
    cout<<"-"<<a-b<<endl;
    cout<<"*"<<a*b<<endl;
    cout<<"/"<<a/b<<endl;
    cout<<"%"<<a%b<<endl;
    return 0;

}

//Unary Operator
#include <iostream>
using namespace std;
int main(){
    int a = 3;
    a++;
    cout<<"a = " << a << endl;
    a--;
    cout <<"a =    " << a << endl;

    return 0;
}