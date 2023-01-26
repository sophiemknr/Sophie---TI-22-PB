#include <iostream>
using namespace std;
 
// baris 5-8 merupakan perintah untuk membuat node
class Node { // deklarasi class
public: // baris 6-7 merupakan deklarasi variabel
    int data;
    Node* next;
 
    // konstruksi default
    Node()
    {
        data = 0;
        next = NULL;
    }
 
    // konstruksi yang diparameterisasi
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
// merupakan class untuk mengimplementasikan linked list
class Linkedlist {
    Node* head;
 
public:
    // konstruksi default
    Linkedlist() { head = NULL; }
 
    // fungsi untuk memasukkan node di akhir linked list
    void insertNode(int);
 
    // fungsi untuk mencetak nilai linked list
    void printList();
 
    // fungsi untuk menghapus node pada posisi tertentu
    void deleteNode(int);
};
 
// fungsi untuk menghapus node pada posisi tertentu
void Linkedlist::deleteNode(int nodeOffset)
{
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
 
    if (head == NULL) {
        cout << "List empty." << endl;
        return;
    }
 
    // baris 55-58 merupakan perintah untuk mencari panjang dari linked list
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
 
    // baris 61-65 merupakan perintah untuk memeriksa apakah posisi yang akan dihapus lebih besar dari panjang linked list
    if (ListLen < nodeOffset) {
        cout << "Index out of range"
             << endl;
        return;
    }
 
    // deklarasi temp1
    temp1 = head;
 
    // delete head
    if (nodeOffset == 1) {
 
        // update head
        head = head->next;
        delete temp1;
        return;
    }
 
    // merupakan fungsi untuk menelusuri daftar untuk menemukan node yang akan dihapus
    while (nodeOffset-- > 1) {
 
        // update temp2
        temp2 = temp1;
 
        // update temp1
        temp1 = temp1->next;
    }
 
    // mengubah next pointer dari node sebelumnya
    temp2->next = temp1->next;
 
    // delete node
    delete temp1;
}
 
// merupakan fungsi untuk menambahkan node baru
void Linkedlist::insertNode(int data)
{
    // membuat node baru
    Node* newNode = new Node(data);
 
    // baris 103-106 merupakan perintah untuk memindahkan node baru ke head
    if (head == NULL) {
        head = newNode;
        return;
    }
 
    Node* temp = head;
    while (temp->next != NULL) {
 
        // update temp
        temp = temp->next;
    }
 
    // merupakan perintah untuk menyisipkan node baru di akhir
    temp->next = newNode;
}
 
// merupakan fungsi untuk mencetak node dari linked list
void Linkedlist::printList()
{
    Node* temp = head;
 
    // baris 125-132 merupakan perintah untuk mengecek list yang kosong
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
 
int main()
{
    Linkedlist list;
 
    // baris 140-143 merupakan perintah untuk memasukkan node
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    // baris 146-157 merupakan perintah untuk cetak nilai linked list
    cout << "Elemen-elemen list tersebut adalah: ";
    list.printList();
    cout << endl;
 
    // Delete node pada posisi 2
    list.deleteNode(2);
 
    cout << "Elemen-elemen list tersebut adalah: ";
    list.printList();
    cout << endl;
    return 0;
}