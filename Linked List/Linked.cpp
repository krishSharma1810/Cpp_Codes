// #include <iostream>
// using namespace std;

// class Node{   //class name Node
//     public:
//     int data;   // the  data 
//     Node* next;  //address of next node poiter type node name next.
//     Node(int val)  //constructor to add the data and change the address.
//     {
//         data=val;   //data will get the value from the insert function from main function.
//         next=NULL;  //and the next address will be Null.
//     }
// };




// // // to insert at beginnng,
// // void Beg(Node* &head,int val)
// // {
// //     Node * beg_node=new Node(val);
// // }




// // adding the node at the end.
// // for the node from start first node is Null will transfer to second.
// void insertAtTail(Node* &head , int val)   //insert function with arguments address of the node and the value of the node.
// {
//     Node* n =new Node(val);   //a new pointer type of node name n.
//     if (head== NULL)  // to enter the first data only.
//       //if the head is Null (the node we are pointing is empty )
//     {
//         head =n;    //head will get the value of n.
//         return;    //return without any value return.
//     }
//     Node* temp = head;   // a new pointer type node name temp.   
//     while(temp->next !=NULL)   //to enter the data at the last.
//     // till the node is not the last node.
//     {
//         temp=temp->next;  //node is changed to next node.  
//     }
//     temp->next=n;     //after we get last node a new node is created and the value is added to it.
// }



// // to display the list datas.
// void display(Node* head)    //display function with argument of type Node and name head.
// { 
//     Node* temp =head;    //pointer variable of type node and name temp with the value of head.
//     while(temp!=NULL)    //loop will run till the pointer temp get null (last node).
//     {
//         cout << temp->data << "->";    //printing the data of the node
//         temp=temp->next;    //change the node address and travel to next one.
//     }
//     cout << "NULL"<<endl;
// }





// int main()
// {
//     int lim,entry;
//     Node*  head = NULL; //a pointer of type Node name head is NULL
//     insertAtTail(head,7);
//     insertAtTail(head,8);
//     insertAtTail(head,12);
//     insertAtTail(head,35);
//     // Beg(head,5);
//     display(head); // displaying the list from the address of first node;
//     cout << "Enter the number of data you want to add"<<endl;
//     cin >> lim;
//     for(int i=5;i<lim+5;i++)
//     {
//     cout << "enter the "<< i+1 << " data : "<<endl;
//     cin >> entry;
//     insertAtTail(head,entry); // calling a function to add a node insert value.
//     }
//     display(head); // displaying the list from the address of first node;
// }




// int main()
// {
//     int n;
//     cout << "Select the option to manipulat the list"<<endl<<"1).\tAdd at begining"<<endl<<"2).\tAdd at the last"<<endl<<"3).\tAdd in middle"<<endl<<
//     "4).\tDelete at begining"<<endl<<"5).\tDelete at last"<<endl<<"6).\tDelete in middle"<<endl<<"7).\tView list"<<endl<<"8).\tExit"<<endl;
//     cin >> n;
//     do
//     {
//         switch (n)
//         {
//         case 1:
            
//             break;
        
//         case 2:
            
//             break;
        
//         case 3:
            
//             break;
        
//         case 4:
            
//             break;
        
//         case 5:
            
//             break;
        
//         case 6:
            
//             break;
        
//         case 7:
            
//             break;
        
//         default:
//         cout << "Invalid Selection"<<endl;
//             break;
//         }
//     } while (n!=8);
// }






// // Linked list implementation in C++

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// // Creating a node
// class Node {
//    public:
//   int value;
//   Node* next;
// };

// int main() {
//   Node* head;
//   Node* one = NULL;
//   Node* two = NULL;
//   Node* three = NULL;

//   // allocate 3 nodes in the heap
//   one = new Node();
//   two = new Node();
//   three = new Node();

//   // Assign value values
//   one->value = 1;
//   two->value = 2;
//   three->value = 3;

//   // Connect nodes
//   one->next = two;
//   two->next = three;
//   three->next = NULL;

//   // print the linked list value
//   head = one;
//   while (head != NULL) {
//     cout << head->value;
//     head = head->next;
//   }
// }








#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void Insert(Node* &head)
{
    int m;
    Node* node;
    cout << "Enter the value :"<<endl;
    cin>> m;
    if (head == NULL)
    {
        node=new Node(m);
        return;
    }
}


void Print(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp=temp->next;
    }
}


int main()
{
    Node* head=NULL;
    Insert (head);
    Print(head);
    return 0;
}