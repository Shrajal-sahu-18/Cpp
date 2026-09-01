#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    cout << "Sum = " << sum;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Largest number = " << a;
    else
        cout << "Largest number = " << b;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    cout<<"****\n***\n**\n*\n";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    cout<<"****\n";
    cout<<"***\n";
    cout<<"**\n";
    cout<<"*\n";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout<<a + b;
    return 0;

}


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " is largest";
    else
        cout << b << " is largest";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
   return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n;
    long long fact = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";