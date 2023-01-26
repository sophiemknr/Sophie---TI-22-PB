#include <iostream>
using namespace std;
struct List{
	int x;
	List *next;
};

class Linked{
	private:
		List *head;
		int top;
	public:
		Linked();
		void add(int val);
		void show();
		void pop();
};

Linked::Linked(){
	head = NULL;
	top=-1;
}
void Linked::add(int val){
	if(top == -1){
	top=top+1;
	List *bantu = new List;
	bantu->x = val;
	bantu->next = head;
	head = bantu;
	cout<<"data berhasil ditambahkan"<<endl;
		
	}else{
	top=top+1;
	List *baru = new List;
	List *tail = new List;
    baru->x = val;
    baru->next  = NULL;
    tail = head;
    int x=0;
    while(tail->next != NULL){
    	tail =tail->next;
    	x++;
	}
	tail->next = baru;
	cout<<"data berhasil ditambahkan"<<endl;
	
	}

}
void Linked::pop(){
	if(top==-1){
		cout<<"data kosong"<<endl;
	}else{
		top=top-1;
		cout<<"data berhasil dihapus"<<endl;
	}
}

void Linked::show(){
	List *bantu = new List;
	bantu = head;
	for(int x=0; x<=top;x++){
	cout<<bantu->x<<"=>";
	bantu=bantu->next;
	}

}
int main(){
	Linked test;
	test.add(6);
	test.add(7);
	test.add(8);
	test.add(9);
	test.pop();
    test.show();
	return(1);
}