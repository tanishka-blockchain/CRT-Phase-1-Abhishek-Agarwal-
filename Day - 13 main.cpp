//Problem 1 LEET CODE 70

class Solution {
public:

int stairsclimb(int n){
    //base condition
    if(n==0 || n==1){
        return 1;
    }
    if (n==2){
        return 2;
    }
//logic
return stairsclimb(n-1) + stairsclimb(n-2);
}   
 int climbStairs(int n) {
return stairsclimb(n);
 }
};



//problem -- 2 
//traversal linked list
#include<iostream>
using namespace std;

class Node{
 public:   
    int data;
    Node * next;
    
    Node (int new_data) {
         this -> data = new_data;
         this -> next = nullptr;
    }
};

void traversal(Node * head){
    while(head != nullptr) {
        cout << head ->data << " ";
        head = head->next;
    }
}
int main(){
    Node * head = new Node(10);
    head -> next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    traversal(head);
    return 0;
}
