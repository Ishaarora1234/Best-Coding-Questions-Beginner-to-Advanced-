#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

node*takeinput(){
	int data;
	node*head=NULL;
	node*tail=NULL;
	cin>>data;
	while(data!=-1){
		node*n=new node(data);
		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}
		cin>>data;
	}
	return head;
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"\n";
}
node* mergesortedlists(node*head1,node*head2){
	node*fh=NULL;
	node*ft=NULL;
	if(head1->data<head2->data){
			fh=ft=head1;
			head1=head1->next;
		}
		else{
			fh=ft=head2;
			head2=head2->next;
		}
	while(head1!=NULL && head2!=NULL){
		if(head1->data<head2->data){
			ft->next=head1;
			ft=head1;
			head1=head1->next;
		}
		else{
			ft->next=head2;
			ft=head2;
			head2=head2->next;
		}
	}
	while(head1!=NULL){
		ft->next=head1;
			ft=head1;
			head1=head1->next;
	}
	while(head2!=NULL){
		ft->next=head2;
			ft=head2;
			head2=head2->next;
	}
	return fh;
}
int main(){
	node*head1=takeinput();
	node*head2=takeinput();
	print(head1);
	print(head2);
	node*fh=mergesortedlists(head1,head2);
	print(fh);
	return 0;
}
