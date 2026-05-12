// Program 1--

#include <iostream>
using namespace std;

void printNumber(int n){
    // base condition
    
    if(n > 5){
        return;
    }
    
    // logic
    cout << n << " ";
    printNumber(n+1);
}

int main() {
    printNumber(1);
}

// Program 2 --
// Factorial of a number

#include <iostream>
using namespace std;

int main() {
    
    int num, factorial = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    
    cout << "Factorial is: " << factorial;
    
    return 0;
}

// Problem 3 --
// Fibonacci

#include <iostream>
using namespace std;

int fibo(int n) {
    // base condition
    if(n == 0) {
        return 0;
    }
    if(n == 1){
        return 1;
    }
    //Logic
    return fibo(n - 1) + fibo(n - 2);
}
int main() {
    cout << fibo(4);
     return 0;
}


