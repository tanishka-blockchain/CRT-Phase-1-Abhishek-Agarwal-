// Problem 1--
//Making of 2D array

#include <iostream>
using namespace std;


int main() {
    int arr[2][2];
    
    for (int i = 1; i <= 2; i++) {
        for(int j = 1; j<= 2; j++) {
            cin >> arr[i][j];
        }
    }
}

or 
// Problem 1--
//Making of 2D array

#include <iostream>
using namespace std;


int main() {
    int arr[2][2];
    
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout <<"here is your 2 Day array" << "\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
}

// Problem 2--
// Sum of elements of 2D array

#include <iostream>
using namespace std;


int main() {
    int arr[2][2];
    int sum = 0;
    
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
            sum = sum + arr[i][j];
        }
    }
    cout << sum;
}

// Problem 3--
//  Search an element in a 2D matrix

#include <iostream>
using namespace std;


int main() {
    int arr[2][2] = { {10,20},
                    {30,40} };
                    
    int searchElement;
    cin >> searchElement;
    
       for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(arr[i][j] == searchElement){
                cout << i << " " << j;
                return 0;
                }
            
            }
        }
    cout << "element not found..";
}

    
    
    
