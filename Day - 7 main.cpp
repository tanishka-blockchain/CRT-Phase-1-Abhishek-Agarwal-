// Problem ---- 1 
// Update Value

#include <iostream>
using namespace std;

void updateValue(int a){
    a = 500;
}

void updateByReference(int &a){
    a = 500;
}

int main() {
    int original = 100;
    cout << original;
    cout << original;
}

or 

// Problem ---- 1 
// Update Value

#include <iostream>
using namespace std;

void updatebyValue(int a){
    a = 500;
}

void updateByReference(int &a){
    a = 500;
}

int main() {
    int original = 100;
    updatebyValue(original);
    cout << original;
    updateByReference(original);
    cout << original;
}

// Problem ---- 2 
// Access specifier
// private

#include <iostream>
using namespace std;

class BankAccount{
private:
    int balance = 5000;
    
public:    
void showbalance(){
    cout << balance;
    }
};
int main(){
    BankAccount obj1;
    obj1.showbalance();
    
}

// Problem ---- 3 
// Protected Access specifier

#include <iostream>
using namespace std;

class Parent {
protected:    
    int secretCode = 1234;
};

class child : Parent{
    public:
     void accessLocker(){
         cout << secretCode;
        
    }
};
int main(){
    child obj1;
    obj1.accessLocker();
    
}

// Problem 4 --
// Constructor
// 4.1 Parameterized constructor

#include <iostream>
using namespace std;

class Student {
    
public:    
    string name;
    int age;
    
    Student(string studentName, int studentAge){
        name = studentName;
        age = studentAge;
        
    }

void introduce(){
    cout << "Hi there, this person name is " << " and his age is " << age << "\n";
    }
};
        
int main(){
    Student s1("Abhishek", 24);
    s1.introduce();
    
}

// 4.2 Default constructor

#include <iostream>
using namespace std;

class wifiConnection {
public:
    string networkName;
    int password;
    
    wifiConnection() {
        networkName = "ACT Fibre Net";
        password = 1234;
    }    

void showDetails(){
    cout << networkName << " " <<password;
    }
};
      
int main() {
    wifiConnection obj1;
    obj1.showDetails();
    
}

// Problem 5 --
// Constructor overloading


#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
    
    // Constructor -- 1 (default Constructor)
    Rectangle() {
        length = 10;
        width = 20;
    }
    // Constructor -- 2 (Parameterized Constructor)
    Rectangle(int l){
        width = 20;
    }
    // Constructor -- 3 (Parameterized Constructor)
    Rectangle(int l, int b){
        length = l;
        width = b;
    }
    
    
void area() {
    cout << length * width;
}

};

int main() {
    //Rectangle r1;
    //r1.area();
    //Rectangle r2(5);
    //r2.area();
    Rectangle r3(5,2);
    r3.area();
}

    

    

    
   
