#include<iostream>
#include<queue>
#include "TreeNode.cpp"
#include "node.cpp"
using namespace std;
TreeNode<int>* takeinput(){
	int data,n;
	queue<TreeNode<int>*> q;
	cout<<"enter the root data: ";
	cin>>data;
	TreeNode<int>* root=new TreeNode<int>(data);
	q.push(root);
	while(q.size()!=0){
		TreeNode<int>* front=q.front();
		q.pop();
		cout<<"enter the number of children of "<<front->data<<"th node: ";
		cin>>n;
		for(int i=0;i<n;i++){
			cout<<"enter the data of "<<i+1<<"th node: ";
			cin>>data;
			TreeNode<int>* childnode=new TreeNode<int>(data);
			front->children.push_back(childnode);
			q.push(childnode);
		}
	}
	return root;
}
void printtree(TreeNode<int>* root){
	cout<<root->data<<" : ";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	printtree(root->children[i]);
	return;
}
queue<int> preorder(TreeNode<int>* root,queue<int> leaves){
	if(root->children.size()==0){
		leaves.push(root->data);
		return leaves;
	}
	else
	return leaves;
	for(int i=0;i<root->children.size();i++){
	    preorder(root->children[i],leaves);
		//cout<<root->children[i]->data<<" ";
	}
	return leaves;
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
	TreeNode<int>* root=takeinput();
	printtree(root);
	queue<int> leaves;
	//printleaf(root);
	node*head=NULL;
	node*tail=NULL;
	leaves=preorder(root,leaves);
	for(int i=0;i<leaves.size();i++){
		node*n=new node(leaves.front());
		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}
	}
	print(head);
}
