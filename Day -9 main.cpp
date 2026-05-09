// Problem 1 --
// Function overridding
// same function name -- same parameters -- different classes;

#include <iostream>
using namespace std;

class Appliance {
public:    
     virtual void turnOn(){
        cout << "Appliance is getting turn on..." <<"\n";    
    }
    virtual void work() = 0; // this is pure virtual function
};

class Fan : public Appliance {
public:    
    void turnOn() override {
        cout << "Fan blades are moving slowly..." <<"\n";
    }
public :    
    void work() override{
        cout << "Once fan starts at full speed it gives cool air..." <<"\n";
    }
};

class Toaster : public Appliance {
public:    
    void work() override {
        cout <<"Toaster is heating up the breads..." <<"\n";
    }
};
int main() {
    Fan myfan;
    Appliance* kitchenApp;
    kitchenApp = &myfan;
    kitchenApp->turnOn();
    kitchenApp->work();
    
    Toaster myToast;
    kitchenApp = &myToast;
    kitchenApp ->turnOn();
    kitchenApp->work();
    
}

// Problem 2 --
// Define an array and initilization and traversal

#include <iostream>
using namespace std;


int main() {
    int arr[5];
    
    cout <<"Enter 5 numbers" <<"\n";
    
    for(int i = 0;i < 5; i++){
        cin >> arr[i];
    }
    
    cout << "Array elements are..." <<"\n";
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}    
    
// Problem 3 --
// Sum of an array

#include <iostream>
using namespace std;


int main() {
    int arr[5];
    int sum = 0;
    
    cout <<"Enter 5 numbers" <<"\n";
    
    for(int i = 0;i < 5; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << " sum of array elements are..." << sum;
    
}    

// Problem  4 --
// Linear Search

#include <iostream>
using namespace std;


int main() {
    int arr[5] = {10,20,30,40,50};
    int searchElement;
    
    cout <<"Enter element to search...";
    cin >> searchElement;
    
    for(int i = 0; i < 5; i++){
        if(arr[i] == searchElement){
            cout << "Element found at index " << i;
            return 0;
        }
    }
    
    cout << " Element not found...";
    
}    
    
    
        
    



