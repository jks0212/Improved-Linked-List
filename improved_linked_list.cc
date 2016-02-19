#include <iostream>
#include <string.h>

using namespace std;

class Node{
	public:
		int data1;
		Node* next;
		Node(){
			next = NULL;
		};
};

class List{
	private:
		Node* head = NULL;
	public:
		void insert(Node* new_node);
		void printList();
		void deleteNode(int del_num);
};

void List::insert(Node* new_node){
	if(head == NULL){
		Node* _head = new Node;
		head = _head;
		head->next = new_node;
	} else{
		Node* temp;
		temp = head->next;
		
		head->next = new_node;
		new_node->next = temp;
	}
}

void List::deleteNode(int del_num){
	if(head == NULL){
		return;
	} else if(head->next == NULL){
		return;
	} else{
		Node* ptr = head->next;
		Node* before_ptr = head;
		
		do{
			if(ptr->data1 == del_num){
				if(ptr->next == NULL){
					before_ptr->next = NULL;
				} else{
					before_ptr->next = ptr->next;
				}
				delete ptr;
				break;
			}
			before_ptr = ptr;
		}while(ptr = ptr->next);
	}
}

void List::printList(){
	if(head == NULL){
		cout << "list is empty" << endl;
	} else if(head->next == NULL){
		cout << "list is empty" << endl;
	} else{
		Node* ptr = head->next;
		do{
			cout << ptr->data1 << " ";
		}while(ptr = ptr->next);
	}
	cout << endl;
}


int main(){
	List list1;

	int mode, input;	
	while(true){
		cout << "insert 1, delete 2, any key to exit : "; 
		cin >> mode;
		
		if(mode == 1){
			cout << "integer to insert : ";
			cin >> input;
			Node *_node = new Node;
			_node->data1 = input;
			list1.insert(_node);
		} else if(mode == 2){
			cout << "integer to delete : ";
			cin >> input;
			list1.deleteNode(input);
		} else break;
		
		list1.printList();
	}
	
	return 0;
}
