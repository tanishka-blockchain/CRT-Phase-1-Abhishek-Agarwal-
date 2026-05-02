// Problem 1
// Print 1 to 10 using for loop
#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
}

// Problem 2
// Print even no.from 0 to 10 using for loop
#include <iostream>
using namespace std;

int main() {
    
    for(int i = 0; i <= 10 ; i+= 2){
        cout << i << " ";
    }
}

// Problem 3
// Print 1 to 10 using while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 10){
        cout << i << " ";
        i++;
    }
}

// Problem 4
// Print odd numbers from 1 to 10 using while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;   
    while (i <= 10) {
        cout << i << " ";  
        i +=2;          
    }
    return 0;
}

// Problem 5
// Print 1 to 10 using do-while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1; 
    do {
        cout << i << " ";  
        i++;
        
    } while ( i<= 10);
}

//Program 6
//Factorial of a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fact = 1;
    
    for (int i = n; i >= 1; i--) {
        fact  = fact * i;
    }
    cout << fact;
}    

//Program 7 (a)
//Prime numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "It is not a prime Number...";
            break;
        } else {
            cout << "It is a prime number...";
        }
    }
}   

(b)
    #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int isPrime = true;
    if(n < 2){
        isPrime = false;
    } else {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime =   false;
            break;
            
        }
    }
}
if(isPrime) {
    cout << "It is a prime number...";
} else {
    cout << "It is not a prime number...";
    }
}    

//Program 8
//Smart phone unlock 
#include <iostream>
using namespace std;

int main() {
    int password ;
    
    do{
        cout << "Enter your passwoed here...";
        cin >> password;
    }  while(password != 1234);
    
    cout << "Phone Unlocked...";
}    
    



