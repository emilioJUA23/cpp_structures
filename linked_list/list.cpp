#include "node.cpp"

class List{
	public:
		Node *head;
		Node *tail;
		List(){
		}
		//void insert(int data){
		//	int id  = this->lenght() + 1;
		//	Node new_node(id, data);
		//}

		//void remove(){
		//}

		//void detect(){
		//}

		//void print_list(){
		//}

		int len(){
			int counter = 0;
			Node *next = head;
			while(next != NULL){
				counter++;
				next = next->next;
			}
			return counter;
		}
};
