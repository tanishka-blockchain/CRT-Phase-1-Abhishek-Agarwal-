// Program 1 ----
// Coffee Billing System

#include <iostream>
using namespace std;

int billing(int a){
    return a * 30;
}

int main() {
     cout << billing(50);
}

// Program 2 ----
// Store Discount Application
// Find 10% -- amount * 0.10
// discounted amount -- amount - 10% wala amount

#include <iostream>
using namespace std;

int discountedAmount(int a){
    return a - (a * 0.10);
}
int main(){
    cout << discountedAmount(5000);
}


// Program --3 
// Smart AC remote 
// 1. Turn on -- 22°C
// 2. Input -- 20.5 -- Temprature set -- 20.5°C
// 3. Input. -- ECO -- Temprature set -- 24°C
// 4. Input. -- Turbo -- Temprature set -- 18°C

#include <iostream>
using namespace std;
void setTemprature(){
    cout << "Temprature Set to 22°C" << "\n";
}

void setTemprature(double temp){
    cout << "Temprature Set to " << temp << " °C" << "\n";
}

void setTemprature(string mode){
    if(mode == "ECO"){
        cout << "Temprature Set to 24 °C" << "\n";
    } else if (mode == "TURBO"){
        cout << "Temprature Set to 18 °C" << "\n";
    }
}
int main() {
    setTemprature();
    setTemprature(20.5);
    setTemprature("ECO");
}

// program -- 4 
//pointers
// declaration , initialization , arithmetic operation through pointers

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr1 = &a;
    
    int b = 20;
    int *ptr2 = &b;
     
    int c =*ptr1 + *ptr2;
    cout << c;
}

// program -- 5
// Swapping of 2 variable's value using pointers and using functions

#include<iostream>
using namespace std;

void swapNumber(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    swapNumber(&a, &b);
    cout << a << " " << b;
}

// program -- 6
// Classes / Objects

#include<iostream>
using namespace std;

class Student{
    
public:
 string name;
 int age;
    
void introduce(){
    cout << "Hi there, this person name is " << name << " and his age is " << age << "\n";
    }
};

int main() {
    Student s1, s2;
    s1.name = "Abhishek";
    s1.age = 24;
    s2.name = "Rahul";
    s2.age = 23;
    s1.introduce();
    s2.introduce();
}

// program -- 7
// Access Specifier
// types -- 7.1 -- public
// types -- 7.2 -- private
// types -- 7.3 -- protected

// 7.1 -- public

#include<iostream>
using namespace std;

class publicPark{
public:
void enter(){
    cout << "Anyone can enter in the park...";
}
};
int main() {
    publicPark p;
    p.enter();
}

    
