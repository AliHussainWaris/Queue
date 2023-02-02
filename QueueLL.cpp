#include <iostream>
using namespace std;
class Queue{
    private:
    class Node{
        public:
        int data;
        Node * next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
    };
    Node * head;
    public:
    Queue(){
        head = NULL;
    }
    void Enqueue(int data){ // Insertation  Enqueue
        if(head == NULL){ // Check the head is NULL 
            head = new Node(data); // Inserting the first node
        }
        else{
            Node * temp = head; // Pointing to the head
            while (temp->next != NULL ) // works until the temp next get equal to the null
            {
                temp = temp->next; // move to the next node
            } // when temp next get equal to the NULL
            temp->next = new Node(data); // we insert new node
        }
    }
    void Dequeue(){  // In Dequeue the it's work on FIFO(First in First Out) method Delete the first node
        Node * temp = head; // Pointing to the head
        head = head->next; // head will the next element / node
        delete temp; // Delete the First node
        temp = NULL; // Delete the allocated Memory
    }
    void display(){
        Node * temp = head;
        while(temp != NULL){ // Works until the temp get Equal to NULL
            cout<<temp->data<<" | ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue obj;
    obj.Enqueue(1);
    obj.Enqueue(2);
    obj.Enqueue(3);
    obj.Enqueue(4);
    obj.Enqueue(5);
    obj.display();
    cout<<" - - - DEQUEUE - - - "<<endl;
    obj.Dequeue();
    obj.display();
    return 0;
}