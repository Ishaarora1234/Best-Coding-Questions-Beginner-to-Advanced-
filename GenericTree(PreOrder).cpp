#include<iostream>
#include<queue>
#include "TreeNode.cpp"
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
void preorder(TreeNode<int>* root){
	if(root->children.size()==0){
		return;
	}
	for(int i=0;i<root->children.size();i++){
	    preorder(root->children[i]);
		cout<<root->children[i]->data<<" ";
	}
	return;
}
int main(){
	TreeNode<int>* root=takeinput();
	printtree(root);
	preorder(root);
	return 0;
}
