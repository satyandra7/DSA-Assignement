//Q2.Recursively remove all adjacent duplicates: Given a string of characters, recursively
//remove adjacent duplicate characters from the string. The output string should not 
//have any adjacent duplicates.

//Q4. Given a singly linked list, write a function to find root(n)th element, where n is the 
//number of elements in the list. Assume value of n is not known in advance.

#include<iostream>
#include<cmath>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(){
        data = 0;
        next = NULL;
    }
    node(int data){
        this -> data = data;
        next = NULL;
    }
};

node *takeinput(){
    int data;
    cout<<"Enter the data (Enter -1 to end the List) = ";
    cin>>data;
    node *head=NULL;
    node *tail = NULL;
    while(data != -1){
        node *nnode = new node(data);
        if(head == NULL){
            head = nnode;
            tail = nnode;
        }
        else{
            tail -> next = nnode;       
            tail = nnode;               
        }
        cout<<"Enter the data (Enter -1 to end the List) = ";
        cin >> data;
    };
    return head;
}

void print(node *head){
    node *temp=head;
    while(temp!=NULL){                      
        cout<<temp->data<<" - > ";
        temp = temp->next;
    }
    cout<<endl;
}
int count(node *temp){
	int c=0;
	while(temp->next!=NULL){
		temp=temp->next;
		c++;
	}
	return c;
}
int get_rootEle(node *temp){
	int c=count(temp);
	c=sqrt(c);
    while(temp -> next != NULL && c>0){
        temp = temp -> next;
        c--;
    }
    return temp->data;

}

int main(){
    node *head= new node;
    head = takeinput();
    cout<<"The Linked List is as follows : "<<endl;
    print(head);
    cout<<"The root element of the list = "<<get_rootEle(head)<<endl;
    return 0;
}
