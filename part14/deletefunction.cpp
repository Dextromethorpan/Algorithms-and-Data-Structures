#include<iostream>
using namespace std;
	class Node{
		public :
			int data;
			Node *next;
		Node(int data){
			
			this->data=data;
	         this->next=NULL;
	         
		}
		
	};
	
	int length(Node *head){
		if(head==NULL){
			return 0;
		}
		
		int count=0;
		while(head!=NULL){
			count++;
			head=head->next;
			
		}
		return count;
		
		
	}
	

	
	Node* takeInput(){
		int data;
		cin>>data;
		 Node *head = NULL;
		while(data!=-1){
			Node *temp = new Node(data);
			if(head==NULL){
				head =temp;
			}
			else{
				Node *t1= head;
				while(t1->next!=NULL){
					t1=t1->next;
					
				}
				t1->next=temp;
				
				
				
			}
			cin>>data;
		}
		return head;
		
	}
		Node* takeInput_better(){
		int data;
		cin>>data;
		 Node *head = NULL;
		 Node *tail=NULL;
		while(data!=-1){
			Node *temp = new Node(data);
			if(head==NULL){
				head =temp;
			    tail=temp;
			}
			else{
			 tail->next=temp;
			 tail=temp;
				
			}
			cin>>data;
		}
		return head;
		
	}
	
	void print(Node *head){
		while(head->next!=NULL){
			cout<<head->data<<" ";
			head=head->next;
			
		}
		cout<<head->data;
		
		
		
	}
	
	Node* insert(Node *head,int data,int pos){
		Node* newNode = new Node(data);
		if(pos==0){
			newNode->next=head;
			head=newNode;
		}
		int count=0;
		Node *temp =head;
		while(count<pos-1){
			temp=temp->next;
			count++;
		}
	    newNode->next=temp->next;
	    temp->next=newNode;
	    
	    return head;		
	}
 
 Node* deleteNode(Node * head,int pos){
 	if(head==NULL){
 		return head;
 		
	 }
 	if(pos==0){
 		head = head->next;
 		return head;
	 }
	 
	 int count=0;
	 Node * temp= head;
	 while(temp!=NULL && count<pos-1){
	 	temp= temp->next;
	 	count++;
	 }
	 if(temp==NULL|| temp->next==NULL){
	 	return head;
	 }
	 
	 
	 temp->next= temp->next->next;
	 return head;
 	
 	
 }


 
 
	
	
int main(){

//	Node n1= Node(10);
//	Node n2= Node(20);
//	Node n3= Node(30);
//	
//	n1.next=&n2;
//	n2.next=&n3;
//	
//	cout<<n1.next<<endl;
//	cout<<&n2;
//	cout<<endl;
//	Node *head=&n1;
//	cout<<head->data;
//	cout<<endl;

//	cout<<n1.data;
	
	// . 
	// -> 
	
//	Node *head=takeInput();
  Node *head	=takeInput_better();// time complexity to O(1)
	print(head);
	cout<<endl;
//	cout<<endl;
//	
//	cout<<"the length is "<<length(head);
//	cout<<endl;
//	Node *update = insert(head,10,2);
//	print(update);
Node * update_afterdelete= deleteNode(head,0);
cout<<endl;
print(update_afterdelete);
cout<<endl;


	return 1;
}

