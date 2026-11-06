// #include <stdio.h>
// int main()
// {
//     int arr[200], int n;
//     printf("Enter  umber of element which  you want to :");
//     sacnf("%d", &n);
//     printf("enter elements:") for (int; i = 0; i < n; i++)
//     {
//         scanf("%d", arr[i]);
//     }
//     int small arr[0], int large = arr[0];
//     for (int; i = 0; i < n; i++)
//     {
//         if (arr[i] < small)
//         {
//             small = arr[i];
//         }
//         else if
//         {
//             (arr[i] > large)
//             {
//                 large = arr[i];
//             }
//         }
//     }
// }
// #include <stdio.h>

// int main()
// {
//     int arr[200], n;

//     // Input size of array
//     printf("Enter number of elements in array: ");
//     scanf("%d", &n);

//     // Input array elements
//     printf("Enter elements:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int search, found = 0;

//     // Input element to search
//     printf("Enter element which you want to search: ");
//     scanf("%d", &search);

//     // Linear search
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == search)
//         {
//             printf("Element found at index %d\n", i);
//             found = 1;
//             break;
//         }
//     }

//     // If element not found
//     if (found == 0)
//     {
//         printf("Element not found\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int arr[200], n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int temp;

//     // Sorting array in ascending order
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         for (int j = i + 1; j < n; j++)
// //         {

// //             if (arr[i] > arr[j])
// //             {
// //                 temp = arr[i];
// //                 arr[i] = arr[j];
// //                 arr[j] = temp;
// //             }
// //         }
// //     }

// //     printf("Sorted elements:\n");

// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }

// //     int sec_largest = arr[n - 2];

// //     printf("\nSecond largest element is: %d", sec_largest);

//     return 0;
// }

// write in   to  seprated all zeroes  at end and count the no. zeroes

// #include <stdio.h>

// int main()
// {

//     int arr[200], n;
//     int count = 0;

//     // Input size of array
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     // Check valid size
//     if (n <= 0 || n > 200)
//     {
//         printf("Invalid size!");
//         return 0;
//     }

//     // Input array elements
//     printf("Enter elements:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Count zeroes
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] == 0)
//         {
//             count++;
//         }
//     }

//     // Output
//     printf("Number of zeroes = %d", count);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10][10], b[10][10], c[10][10];
//     int r1, c1, r2, c2;

//     // input  ows and coum of first matix
//     printf("Enter rows and columsn of  first matrix:")
//         scanf("%d %d", &r1, &r2);

//     // input row and com of second matirx
//     printf("Enter row and colums of second matrix:")
//         scanf("%d %d", &r2, &c2);

//     // condtional for matrix multiplication
//     if (c1 != r2)
//     {
//         printf("martieex multiple is not possibel:") return 0;
//     }
//     // input second matrix

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// // create  the node
// struct node
// {
//     int data;
//     struct node *next;
// };

// // head pointer
// struct node *head = NULL;

// // funton for insering at begging
// void insertbegging(int val)
// {
//     // crete new node
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));

//     // store data
//     newnode->data = val;

//     // link new node to current head
//     newnode->next = head;

//     // move head to new node
//     head = newnode;
// }
// // display linklsit to new node
// void display()
// {
//     struct node *temp;
//     temp = head;
//     while (temp != NULL)
//     {
//         print("%d->", temp->data);
//         temp = temp->next;
//     }
//     print("NULL");

//     // main function
//     int main()
//     {
//         insertbegging(30);
//         insertbegging(20);
//         insertbegging(10);

//         display();
//         return 0;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     int node *next
// };
// struct *head = NULL;
// void insertbegg(int val)
// {
//     struct node *newnode;
//     newnode = (struct node)malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->next = head;
//     head = newnode;
// }
// void dispaly()
// {
//     struct node *temp;
//     temp = head;
//     while (temp != NULL)
//     {
//         print(temp->data);

//         temp = temp->next;
//     }
//     int main()
//     {
//         insertbegg(20);
//         insertbegg(45);
//         insertbegg(41);
//         dispaly();
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     int node *next;
// };
// struct node *head = NULL;

// void inserbe(int val)
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->next = head;
//     head = newnode;
// }
// void deleting()
// {
//     struct node *temp;
//     if (head == NULL)
//     {
//         print("it is empty") return;
//     }
//     temp = head;
//     head = head->next;
//     free(temp);

//     void display()
//     {
//         struct node *temp = head;
//         while (temp != NULL)
//         {
//             printf("%d->", temp->data);
//             temp - temp->next;
//         }
//         print("NULL")
//     }
//     int main()
//     {
//         inserbe(52);
//         inserbe(42);
//         inserbe(12);
//         display();
//         deleting();
//     }
//     returrn 0;
// }

// insertion end and   deletion begging
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head = NULL;
// void insertEnd(int val)
// {
//     struct node *newnode, *temp;
//     newnode = (struct node *)malooc(sizeof(sturct node));
//     newnnode->data = val;
//     newnode->next = NULL;
// }

// stack

// inserrt the element in stack
// #include <stdio.h>

// #define MAX 5

// int stack[MAX];
// int top = -1;

// void push(int value)
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack Overflow");
//     }
//     else
//     {
//         top = top + 1;
//         stack[top] = value;

//         printf("%d inserted", value);
//     }
// }

// int main()
// {
//     push(10);

//     return 0;
// }

// pop operatioon
// #include <stdio.h>

// #define MAX 5

// int stack[MAX];
// int top = -1;

// void push(int value)
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         top = top + 1;
//         stack[top] = value;
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("Stack Underflow");
//     }
//     else
//     {
//         printf("%d deleted", stack[top]);
//         top = top - 1;
//     }
// }

// int main()
// {
//     push(10);
//     push(20);

//     pop();
//     pop();

//     return 0;
// }

// #include <stdio.h>

// #define MAX 5

// int stack[MAX];
// int top = -1;

// void push(int val)
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         top = top + 1;
//         stack[top] = val;

//         printf("%d inserted\n", val);
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("Stack Underflow\n");
//     }
//     else
//     {
//         printf("%d deleting\n", stack[top]);

//         top = top - 1;
//     }
// }

// void isFull()
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack is Full\n");
//     }
//     else
//     {
//         printf("Stack is Not Full\n");
//     }
// }

// void peek()
// {
//     if (top == -1)
//     {
//         printf("Stack is Empty\n");
//     }
//     else
//     {
//         printf("Top Element = %d\n", stack[top]);
//     }
// }

// int main()
// {
//     push(51);
//     push(20);

//     peek();

//        pop();
//     isFull();

//     return 0;
// }

// #include <stdio.h>
// #define MAX 5
// int queue[MAX];
// int front == -1;
// int rear = -1;
// void enqueue(intt val)
// {
//     if (rear = MAX - 1)
//     {
//         printf("overflow")
//     }
//     else
//     {
//         if (front == -1)
//         {
//             front = 0;
//         }
//         rear = rear + 1 queue[rear] = val;
//         prinf("%d innsered \n", val)
//     }
// }
// void dequeue(){
//     if(front == -1 || front>rear){
//         printf("inserflow")
//     }
//     else{
//         print(deletion->quueu[front]);
//         front = front+1
//     }
// }

// peek operation
// void peek(){
//     if(front == -1 ||front>rear){
//         printf("queue is empty \n")
//     }
//     else{
//         printf("front elemet = %d",queqq[front])
//     }
// }

// #include <stdio.h>
// #define MAX 5
// int queue[MAX];
// int front = -1;
// int rear = -1;

// void enqueue(int val)
// {
//     if (rear = MAX - 1)
//     {
//         print("overflow")
//     }
//     else
//     {
//         if (front == -1)
//         {
//             front = 0;
//         }
//         rear = rear + 1;
//         queue[rear] = val;
//         printf("push val %d", val)
//     }
// }
// void pop()
// {
//     if (front == -1 || front > rear)
//     {
//         printf("unserflow")
//     }
//     else
//     {
//         printf("%d deletion \n", queue[front]);
//         front = front + 1;
//     }
// }
// void isempty()
// {
//     if (front == -1)
//     {
//         printf(it is emppty)
//     }
//     else
//     {
//         printf("quue is not empty")
//     }
// }
// void peek()
// {
//     if (front == -1)
//     {
//         prinf("ququ is empty";)
//     }
//     else
//     {
//         printf(frront element= %d\n",queue;front)
//     }
// }

// wap in c immplemental stack using tha array
// #include <stdio.h>
// #define MAX 5
// int stack[MAX];
// int top = -1;
// void push(int val)
// {
//     if (rear = MAX - 1)
//     {
//         printf("overflow")
//     }
//     else
//     {
//         top = top + 1;
//         stack[top] = val;
//         printf("o=isnertion", val)
//     }
// }
// void pop()
// {
//     if (front == -1 || front > rear)
//     {
//         printf("the overflow")
//     }
//     else
//     {
//         printf("deletig ", stack[top])
//             top = top - 1;
//     }
// }
// void peek()
// {
//     if (top == -1)
//     {
//         printf("stack is empty")
//     }
//     else
//     {
//         printf("element top", stack[top])
//     }
// }
// void isfull()
// {
//     if (rear = MAX - 1)
//     {
//         printf("is is empty", )
//     }
//     else
//     {
//         print("stackis  npt found")
//     }
// }
// voud emppty()
// {
//     if (front == -1)
//     {
//         printf("steck is emppty")
//     }
//     else
//     {
//         print("stack is  not empty")
//     }
// }
// void display()
// {
//     if (top == -1)
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *top = NULL;
// void push(int val)
// {
//     struct node *newnode;
//     newnode = (struct * node) malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->next = top;
//     top = newnode;

//     printf("%d insertion \n", val)
// }
// void pop()
// {
//     struct node *temp;
//     if (top == NULL)
//     {
//         printf("stack unnderlfow")
//     }
//     else
//     {
//         head = temp;
//         printf("%d  delete", top->data)
//             free(temp)
//     }
// }
// void peek()
// {
//     if (top == NULL)
//     {
//         printf("stack is empty")
//     }
//     else
//     {
//         printf("top elelme", top->data)
//     }
// }
// void empty()
// {
//     if (top == NULL)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         printf("stack is not empyt")
//     }
// }

// void display()
// {
//     struct node *temp;
//     if (top == NULL)
//     {
//         printf("stack is empty \n")
//     }
//     else
//     {
//         temp = top;
//         printf("stack element:\n")
//     }
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }
// }
// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     display();
//     peek();
//     pop();
//     isEmpty();
//     return 0;
// }
// }
// }

//
// #include <stdio.h>
// #define MAX 5
// int queue[MAX];
// int rear = -1;
// int front = -1;
// void enqeue(int val)
// {
//     if (rear = mAX - 1)
//     {
//         printf("overflow")
//     }
//     else
//     {
//         if (front == -1)
//         {
//             front = 0;
//         }
//         reat = rear + 1;
//         queue[rear] = val;
//         print("inserted val", val)
//     }
// }
// void dequeue()
// {
//     if (front == 1 || front > rear)
//     {
//         printf("underflow")
//     }
//     else
//     {
//         printf("%d deletion", queue[front])
//             front = front + 1;
//     }
// }
// void peek()
// {
//     if (front = -1)
//     {
//         printf("queue is empty\n")
//     }
//     else
//     {
//         printf("front elmemt =%d \n", queue[front])
//     }
// }
// void isfull()
// {
//     if (rear = MAX - 1)
//     {
//         printf("is queue full")
//     }
//     else
//     {
//         printf("quuue is not full")
//     }
// }
// void isempty()
// {
//     if (front == -1)
//     {
//         printf("quue is empty")
//     }
//     else
//     {
//         printf("is is not empty")
//     }
// }
// void display()
// {
//     if (front == -1)
//     {
//         printf("Queue is Empty\n");
//     }
//     else
//     {
//         printf("Queue Elements:\n");

//         for (int i = front; i <= rear; i++)
//         {
//             printf("%d ", queue[i]);
//         }

//         printf("\n");
//     }
// }

// int main()
// {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);

//     display();

//     peek();

//     dequeue();

//     display();

//     isFull();
//     isEmpty();

//     return 0;

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// // funtion to count internal node
// int countnode(struct node *root)
// {
//     // check empty or nor
//     if (root == NULL)
//     {
//         return 0;
//     }
//     // leaf node
//     if (root->left = NULL &&root->right = NULL)
//     {
//         return 0;
//     }

//     // internal node
//     return 1 + countnode(root->left) + countnode(root->right);
// }

// int main()
// {
//     // creting tree manully
//     struct node *root = (struct node *)malloc(sizeof(struct node));
//     root->data = 1;

//     root->left = (struct node *)malloc(sizeof(struct node));
//     root->left->data = 2;

//     root->right = (struct node *)malloc(sizeof(struct node));
//     root->right->data = 3;
//     root->left->left = (struct node *)malloc(sizeof(struct node));
//     root->left->left->data = 4;

//     // setting NULL
//     int count = countnode(root);
//     printf("numberr of internal node = %d", count);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// // Preorder: Root -> Left -> Right
// void preorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// // Inorder: Left -> Root -> Right
// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// // Postorder: Left -> Right -> Root
// void postorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }

// int main()
// {
//     // Creating nodes properly
//     struct node *root = (struct node *)malloc(sizeof(struct node));
//     struct node *n1 = (struct node *)malloc(sizeof(struct node));
//     struct node *n2 = (struct node *)malloc(sizeof(struct node));
//     struct node *n3 = (struct node *)malloc(sizeof(struct node));
//     struct node *n4 = (struct node *)malloc(sizeof(struct node));

//     // Assign values
//     root->data = 1;
//     n1->data = 5;
//     n2->data = 6;
//     n3->data = 20;
//     n4->data = 45;

//     // Build tree
//     root->left = n1;
//     root->right = n2;

//     n1->left = n3;
//     n1->right = n4;

//     n2->left = NULL;
//     n2->right = NULL;

//     n3->left = NULL;
//     n3->right = NULL;

//     n4->left = NULL;
//     n4->right = NULL;

//     // Traversals
//     printf("Preorder: ");
//     preorder(root);

//     printf("\nInorder: ");
//     inorder(root);

//     printf("\nPostorder: ");
//     postorder(root);

//     return 0;
// }

// bst
// #include <atdio.h>
// #include <stdblib.h>
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *createnode(int val)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->left = NULL;
//     newnode->right = NULL;
//     return newnode;
// }

// // insertion in BSt
// struct node *insert(struct node *root, int val)
// {
//     if (root == NULL)
//     {
//         return createnode(val)
//     }
//     if (val < root->data)
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         val > root->right = insert(root->right, val);
//     }
//     return root;
// }

// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d", root->data)
//             inorder(root->right)
//     }
// }

// int main()
// {
//     struct Node *root = NULL;
//     int n, value;

//     printf("Enter number of nodes: ");
//     scanf("%d", &n);

//     printf("Enter values:\n");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &value);
//         root = insert(root, value);
//     }

//     printf("\nInorder (Sorted BST): ");
//     inorder(root);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// // node struct
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// // crete the node
// struct node *cretenode(int val)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = val;
//     newnode->left = NULL;
//     newnode->right = NULL;
//     return newnode;
// }
// // insertion
// struct node *insert(struct node *root, int val)
// {
//     if (root == NULL)
//     {
//         return cretenode(val);
//         if (val < root->dat)
//             = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }
//     return root;
// }
// // find minmu(inoder succor)
// struct node *findMIn(struct node *root)
// {
//     while (root->left != NULL)
//         root = root->left;
//     return root
// }

// // deletion
// struct node *deletion(struct node *root, int key)
// {
//     if (root == NULL)
//         return root;
//         // search node
//         if(key<root->data){
//             root->left=deletion(root->left,key);
//         }else if(key>root->data){
//             root->right->data=deletion(root->right,key);
//         }
//         else{
//             // case1 no child
//             if(root->left==  NULL && root->right= NULL){
//                 free(root);
//                 return NULL;
//             }
//             // case2 one child
//             else if(root->right==NULL){
//                 struct node*temp= root->left;
//                 free(root);
//                 return temp;
//             }
//  ,       }
//         // case3 two child
//         struct node*temp=findMIn(root->right);
//         root->data=temp->data;
//         root->right=deletion(root->right,temp->data);

//         return root;
// }

#include <iostream>
#include <svector>
using namespace std;

void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        partion
    }
}
int main()
{
    vector<int> arr = {5, 8, 9, 7, 3};
    quicksort(arr, 0, arr.size() - 1);
}