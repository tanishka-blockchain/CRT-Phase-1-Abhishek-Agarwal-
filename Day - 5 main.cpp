//   PROBLEM 01: DIAMOND HALF-PATTERN 🔼🔽
//   Task: Combine upper and lower triangles
//   Pattern:
// *
// **
// ***
// **
// *

 #include <iostream>
 using namespace std;

 int main() {
     // Upper triangle 
     for(int i = 1; i <= 5; i++) {
         for(int j = 1;  j<= i; j++) {
             cout << "*";
         }
         cout <<"\n";
     }
    
     // Lower triangle
     for(int i = 5 - 1;  i >= 1; i--) {
         for(int j = 1; j <= i; j++) {
             cout <<"*";
         }
         cout <<"\n";
     }
 }


//   PROBLEM 02: BASIC FUNCTION VOID 📢
//   Task: Define and call a simple message function

 #include <iostream>
 using namespace std;

 void printMessage(){
     cout << "Hi we are learning Functions....";
 }

 int main() {
     printMessage();
     return 0; 
 }


//   PROBLEM 03: AREA CALCULATOR 📐
//   Task: Function with parameters and return value

 #include <iostream>
 using namespace std;

 int calculateArea(int length, int width){
     return length * width;
 }

 int main() {
     int a = 12;
     int b = 10;
     int area = calculateArea(a, b);
     cout << area;
 }


//   PROBLEM 04: THE FOUR TYPES OF FUNCTIONS 🛠️

//  Program 4.1 -- no argument ,no return values 

#include <iostream>
using namespace std;

void bellRing(){
    cout << "ting tong...";
}

int main(){
    bellRing();
}

// Program 4.2 --  argument ,no return values 

#include <iostream>
using namespace std;

void sendmessage(string message){
    cout <<message;
}

 int main (){
     sendmessage("BJP wons");
 }

// Program 4.3 --  no argument , return values 

#include <iostream>
using namespace std;

int ticketnumber(){
    return 101;
}

 int main (){
     cout << ticketnumber();
 }

// Program 4.4 -- argument , return values 

#include <iostream>
using namespace std;

 float currencyconvertor(float rupees) {
    return rupees / 95.25;
}

int main(){
    cout << currencyconvertor(100);
}


//   PROBLEM 05: FUNCTION OVERLOADING 🏗️
//   Task: Use the same name 'add' for different types/counts

#include <iostream>
using namespace std;

// Adding two integers
int add(int a, int b){
    return a + b;
}

// Adding two doubles
double add(double a, double b){
    return a + b;
}

// Adding three integers
int add(int a, int b, int c){
    return a + b + c;
}

// Adding four floats
float add(float a, float b, float c, float d){
    return a + b + c + d;
}

int main() {
    cout << "Int Add (2): " << add(5, 2) << "\n";
    cout << "Double Add:   " << add(5.5, 7.9) <<"\n";
    cout << "Int Add (3): " << add(5, 2, 3) << "\n";
    cout << "Float Add(4): " << add(5.0f, 2.3f, 5.5f, 7.9f) <<"\n";
    
    return 0;
}


