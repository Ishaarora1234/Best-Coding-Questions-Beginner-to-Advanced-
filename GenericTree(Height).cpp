#include<iostream>
#include "TreeNode.cpp"
#include<queue>
#include<vector>
using namespace std;
TreeNode<int>* takeinput(){
	queue<TreeNode<int>*> q;
	cout<<"enter the data of root node: ";
		int data,n;
	    cin>>data;
	    TreeNode<int>* root=new TreeNode<int>(data);
	q.push(root);
	while(q.size()!=0){
		TreeNode<int>* front=q.front();
		q.pop();
	    cout<<"enter the number of children of "<<front->data<<" : ";
	    cin>>n;
	for(int i=0;i<n;i++){
		int childdata;
		cout<<"enter "<<i+1<<"th child of "<<front->data<<" : ";
		cin>>childdata;
		TreeNode<int>* childNode=new TreeNode<int>(childdata);
		front->children.push_back(childNode);
		q.push(childNode);
	}
}
	return root;
}
int height(TreeNode<int>* root){
	int h,max=0;
	if(root->children.size()==0){
		return 1;
	}
	for(int i=0;i<root->children.size();i++){
		max+=height(root->children[i]);
		if(max>h){
			h=max;
		}
	}
	return h;
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

int main(){
	TreeNode<int>* root=takeinput();
	printtree(root);
	int h=height(root);
	cout<<"height of the tree is: "<<h<<endl;
	return 0;
}
