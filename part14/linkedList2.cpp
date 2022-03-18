#include<iostream>
using namespace std;
#include "Node.h"// this line


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
	Node* merge(Node *head1,Node *head2){
		if(head1==NULL){
			return head2;
		}
		if(head2==NULL){
			return head1;
		}
		Node *newhead=NULL;
		Node *tail=NULL;
		
		Node *temp1= head1;
		Node *temp2=head2;
		
		if(temp1->data<temp2->data){
			newhead=temp1;
			tail=newhead;
			temp1=temp1->next;
			
			
		}
		else{
				newhead=temp2;
			tail=newhead;
			temp2=temp2->next;
			
		}
		
		while(temp1!=NULL && temp2!=NULL){
			if(temp1->data<temp2->data){
				tail->next=temp1;
				tail=temp1;
				temp1=temp1->next;
				
				
			}
			
			else{
				tail->next=temp2;
				tail=temp2;
				temp2=temp2->next;
				
			}
			
			
			
		}
		
		if(temp1!=NULL){
			tail->next= temp1;
			
		}
		
		if(temp2!=NULL){
			tail->next=temp2;
		}
		
		return newhead;
		
		
		
		
	}
	
	Node * midpoint(Node *head){
		if(head==NULL || head->next==NULL){
			return head;
			
		}
		Node *slow = head;
		Node *fast= head->next;
		while(fast!=NULL  && fast->next!=NULL ){
			slow = slow->next;
			fast=fast->next->next;
			
		}
		
		return slow ;
		
		
		
	}
	
 Node*	mergeSort(Node *head){
		if(head==NULL||head->next==NULL){// base case 
			return head;
			
		}
		Node *mid= midpoint(head);
		Node *half1=head;
		Node *half2=mid->next;
		mid->next= NULL;
		
		half1= mergeSort(half1);//recursion brings the correct ans 
		half2=mergeSort(half2);// recursion brings the correct ans
		Node *final_ans= merge(half1,half2);
		return final_ans;
		
		
		
		
	}
	
	
	int main(){
		
		Node *head	=takeInput_better();// time complexity to O(1)
	//	Node *head2=takeInput_better();
//	print(head);
	cout<<endl;
//	Node *Nhead= merge(head1,head2);
	cout<<endl;
//	print(Nhead);
Node *merged= mergeSort(head);
print(merged);

	//	Node *mid= midpoint(head);
		//cout<<mid->data;
		
		
		
	}
	
	
