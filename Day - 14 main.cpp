//problem -- 1 
//insert the data at the head of the linked list

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

Node * head = nullptr;

void insertathead(int data){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
void display() {
    Node * temp = head;
    while(temp != nullptr) {
       cout << temp->data << " ";
       temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node * head = new Node(10);
    head -> next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    insertathead(5);
    display();
    return 0;
}

// Problem 2 -- 
//insert the data at the tail of the linked list

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

Node * head = nullptr;

void insertatTail(int data){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
void display() {
    Node * temp = head;
    while(temp != nullptr) {
       cout << temp->data << " ";
       temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node * head = new Node(10);
    head -> next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    insertatTail(50);
    display();
    return 0;
}

//problem -- 3 
//insert the data at the specific position LL

#include<iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;
    
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* head = nullptr;

void insertAtHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }

void insertAtTail(int data) {
    Node* newNode = new Node(data);
    Node*temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);
    Node* temp = head;
    for(int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    //insertAtHead(5);
    //insertAtTail(50);
    insertAtPosition(25,3);
    display();
    return 0;
}

// Problem -- 4
// delete the data at the head of the LL 
#include<iostream>
using namespace std;
class Node{
public:    
    int data;
    Node* next;
    
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* head = nullptr;

void insertAtHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }

void insertAtTail(int data) {
    Node* newNode = new Node(data);
    Node*temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);
    Node* temp = head;
    for(int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteathead(){
    head = head->next;
}

void deleteattail(){
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
}
void display() {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next =new Node(40);
    //insertAtHead(5);
    //insertAtTail(50);
    //insertAtPosition(25,3);
    //deleteathead();
    deleteattail();
    display();
    return 0;
}

// Problem -- 5
// Delete the data from the specific position of the LL 
#include<iostream>
using namespace std;
class Node{
public:    
    int data;
    Node* next;
    
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* head = nullptr;

void insertAtHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }

void insertAtTail(int data) {
    Node* newNode = new Node(data);
    Node*temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);
    Node* temp = head;
    for(int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteathead(){
    head = head->next;
}

void deleteattail(){
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
}
void deleteatposition(int position) {
    Node* temp = head;
    for(int i =1; i < position - 1; i++) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void display() {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next =new Node(40);
    //insertAtHead(5);
    //insertAtTail(50);
    //insertAtPosition(25,3);
    //deleteathead();
    //deleteattail();
    deleteatposition(3);
    display();
    return 0;
}

// Problem 6--
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = nullptr;
       ListNode* curr = head;

       while(curr != nullptr){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
       }
       return prev;
    }
};

