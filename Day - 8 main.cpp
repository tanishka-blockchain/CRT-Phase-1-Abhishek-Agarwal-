//Problem 1 --
// Types of Inheritance
// 1.1 -- Single Inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
     void start(){
         cout << "Vehicle starts" <<"\n";
     }
};
class Car : public Vehicle {
public:
    void drive(){
        cout << "Car is running" << "\n";
    }
};    

int main() {
    Car obj1;
    obj1.drive();
    obj1.start();
}   

// 1.2 -- MultiLevel Inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
     void start(){
         cout << "Vehicle starts" <<"\n";
     }
};
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is running" << "\n";
    }
};

class speedOMeter : public Car {
public:
    void speed() {
        cout << "Car is runnimg at 60km/h" <<"\n";
    }
};

int main() {
    speedOMeter obj1;
    obj1.start();
    obj1.drive();
  obj1.speed(); 
} 

// 1.3 -- Hierarchical Inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
     void start(){
         cout << "Vehicle starts..." <<"\n";
     }
};
class Bike : public Vehicle {
public:
    void drive() {
        cout << "Bike is running..." <<"\n";
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is running..." <<"\n";
    }
};

int main() {
    Car c;
    Bike b;
    c.start();
    c.drive();
    b.start();
    b.drive();
} 

// 1.4 -- Multiple Inheritance

#include <iostream>
using namespace std;

class Parent {
public:
     void paiseDo(){
         cout << "Mummy paise de do ghoomne jana hai..." <<"\n";
     }
};

class Parent2 {
public:
    void paiseDo(){
        cout <<"Papa paise de do books laani hai..." <<"\n";
    }
}; 

class child : public Parent1, 

};

int main() {
    child c;
    c.paiseDo();
    //c.paiseDoPapa();
}    


// 1.5 -- Hybrid Inheritance --  Diamond problem solution -- virtual base class

#include <iostream>
using namespace std;

class A {
public:
     void print(){
         cout << "Hi there...";
     }
};

class B : virtual public A {
    //No Logic
};

class C : virtual public A {
    //No Logic
};

class D : public B , public C {
    //No Logic
};
int main(){
    D obj1;
    obj1.print();
}    

// Problem 2 --
// Encapsulation

#include <iostream>
using namespace std;

class BankAccount {
private:    
    int bankBalance;
public:    
     void setBalance(int amount) {
         if(amount >= 0){
             bankBalance = amount;
         } else {
             cout << "enter a valid amount";
         }
     }
     
      int getbalance(){
          return bankBalance;
        
    }
};

int main () {
    BankAccount obj1;
    obj1.setBalance(5000);
    cout << obj1.getbalance();
}

