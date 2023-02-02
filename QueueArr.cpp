#include <iostream>
using namespace std;
class Queue{
    private:
    int sizes = 15 , j = 0  , rear = 0 ,front = 0;
    int arr[15];
    public:
    Queue(){
        for(int i = 0 ; i<sizes ; i++){ //Assining Every array index to zero
            arr[i] = 0;
        }
    }
    //Enqueue
    void Enqueue(int data){ // Insertation / Enqueue 
        if(rear == sizes){ // When Rear get Equal to sizes
            return;
        }
        else{ // when the rear is smaller then sizes
            arr[rear] = data; // Insert in every index of array
            rear++; // increment the rear
        }
    }
    //Dequeue
    void Dequeue(){ // Dequeue Delete the First Element  / index
        if(front == rear){ // runs until the front get eqaul to rear
            return;
        }
        else{
            arr[front] = 0; // first array et eqaul to 0
            front ++; // front will get increment
        }
    }
    //Display
    void display(){
        display(j);
    }
    void display(int j){
        if(j == sizes){
            return;
        }
        else{
            cout<<arr[j]<<" | ";
            j++;
            display(j);
        }
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
    cout<<"\n - - - DEQUEUE - - - "<<endl;
    obj.Dequeue();
    obj.display();

    return 0;
}