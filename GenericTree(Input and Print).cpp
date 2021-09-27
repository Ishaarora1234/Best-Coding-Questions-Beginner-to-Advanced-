#include<iostream>
#include "TreeNode.cpp"
#include<queue>
using namespace std;
TreeNode<int>* takeinput(){
	queue<TreeNode<int>*> nodes;
	int data;
	cout<<"Data of root node: ";
	cin>>data;
	TreeNode<int>* root=new TreeNode<int>(data);
	nodes.push(root);
	while(nodes.size()!=0){
		int n;
		TreeNode<int>* front=nodes.front();
		nodes.pop();
		cout<<"Number of children of "<<front->data<<"th node: ";
		cin>>n;
		for(int i=0;i<n;i++){
			int childData;
			cout<<i<<"th child data: ";
			cin>>childData;
			TreeNode<int>* childNode=new TreeNode<int>(childData);
			front->children.push_back(childNode);
			nodes.push(childNode);
		}	
	}
	return root;
}
void printtree(TreeNode<int>* root){
	
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printtree(root->children[i]);
	}
}
int main(){
	TreeNode<int>*root=takeinput();
	printtree(root);
	return 0;
	
}
