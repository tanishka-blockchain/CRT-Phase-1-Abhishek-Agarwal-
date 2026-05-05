//program-1
//pattern printing 
#include <iostream>
using namespace std;

int main () {
    //upper triangle
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout<<"\n";
    } 
    //lower triangle
    for (int i = 5 - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout <<"*";
        }
        cout <<"\n";
    }
}



//program-2
// addition of 2 no. 
#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int b = 5;
    int c = a + b;
    cout << c;
}


//program-3
// function making practice 
#include <iostream>
using namespace std;

void printmessage(){
    cout << "hi we are learning functions";
}
int main (){
    // functin calling 
    printmessage();
    return 0;
}


//program-3
// function with some values and some return value
#include <iostream>
using namespace std;
int calculatearea(int length, int width) {
    return length * width;
}

int main () {
    int a = 10;
    int b = 5;
    int area = calculatearea(a, b);
    cout << area;
}



//program-4
//types of function
//program 4.1 -- no argument ,no return values 

#include <iostream>
using namespace std;

void bellRing(){
    cout << "ting tong...";
}

int main(){
    bellRing();
}



//program 4.2 --  argument ,no return values 

#include <iostream>
using namespace std;

void sendmessage(string message){
    cout <<message;
}

 int main (){
     sendmessage("BJP wons");
 }



//program 4.3 --  no argument , return values 

#include <iostream>
using namespace std;

int ticketnumber(){
    return 101;
}

 int main (){
     cout << ticketnumber();
 }



//program 4.4 -- argument , return values 

#include <iostream>
using namespace std;

 float currencyconvertor(float rupees) {
    return rupees / 95.25;
}

int main(){
    cout << currencyconvertor(100);
}



//program 5 
//function overloading 

#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b,int c){
    return a + b + c;
}

float add(float a, float b, float c,float d){
    return a + b + c + d;
}

int main(){
    cout << add(5,2) << "\n";
    cout << add(5,2,3)<<"\n";
    cout << add(5.0,2.3,5.5,7.9);
}
