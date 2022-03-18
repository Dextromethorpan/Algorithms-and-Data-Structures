#include<iostream>
using namespace std;
#include "treeNode.h"
#include<vector>
  TreeNode<int>* treeInput(){
 	 cout<<"Enter the root's data"<<endl;
 	 int rootData;
 	 cin>>rootData;
 	 TreeNode<int> *root= new TreeNode<int>(rootData);
 	 cout<<"enter the number of children for "<<rootData<<endl; 
 	int n;
 	 cin>>n;
 	 
 	 for(int i=0;i<n;i++){
 	 	TreeNode<int> *child=treeInput();
 	 	root->children.push_back(child);
 	 	}
 	
 	return root;
 }
 
 void treePrint(TreeNode<int> *root){
 	cout<<root->data<<": ";
 	
 	for(int i=0;i<root->children.size();i++){
 		cout<<root->children[i]->data<<",";
	 }
 	cout<<endl;
 	
 	for(int i=0;i<root->children.size();i++){
 		treePrint(root->children[i]);
	 }
 	
 	
 	
 }

int main(){
	TreeNode<int> *root=treeInput();
	treePrint(root);
//	TreeNode<int> *root= new TreeNode<int>(10);
//	TreeNode<int> *c1= new TreeNode<int>(20);
//	TreeNode<int> *c2= new TreeNode<int>(30);
//	TreeNode<int> *c3= new TreeNode<int>(40);
//	root->children.push_back(c1);
//	root->children.push_back(c2);
//	root->children.push_back(c3);
//	
	
	
	
}
