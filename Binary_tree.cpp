#include <iostream>
#include <malloc.h>
using namespace std;

struct node 
{
	int data;
	struct node * left, * right;
};
/*
struct node *create(int data)
{
	struct node *n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
}*/

int inorder(struct node * root)
{
	if(root != NULL)
	{
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
}

void traversal( int arr)
{
	cout<<arr[0]<<"arr[0] ";
	/*root->data=arr[0];
	while(root != NULL)
	{
		for(int i=1; i<5; i++)
		{
			if(arr[i]<root->data)
			{
				traversal(root->left,arr);
			}
			else
			{
				traversal(root->right,arr);
			}
		}
	}*/
}

int main()
{
	struct node * p;
	/*struct node *p1=create(10);
	struct node *p2=create(20);
	struct node *p3=create(30);
	struct node *p4=create(40);
	struct node *p5=create(50);
	struct node *p6=create(60);*/
	int arr[20]={10,20,30,40,50,60};
	/*int n;
	cout<<"\nHow many elements you want to add : ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}*/
	traversal(arr);
	//inorder(p);
	cout<<"arr[0] = "<<arr[0];
	
	return 0;
}
