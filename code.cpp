#include <iostream>
using namespace std;

template <typename T>
class sllstack;

template <typename T>
class Node {
    T data;
    Node *next;

    public:

    Node (T d) {
        data=d;
        next=nullptr;
    }
   
   friend class sllstack<T>;
};

template <typename T>
class sllstack{
    Node<T> *head;
    int count;

    public:

    sllstack () {
        head=nullptr;
        count=0;
    }

    void push(T d){
        Node<T> *newnode=new Node<T> (d);
        newnode->next=head;
        head=newnode;
        count++;
    }

    int size(){
        return count;
    }

    bool isEmpty(){
        return count==0;
    }

    bool top (T &d){
        if (!head){
            return false;
        }
        else{
            d=head->data;
            return true;
        }
    }

    void pop (){
        if (head){
            Node<T> *temp = head;
            head = head->next;
            delete temp;  
            count--;
        }
        else{
            cout<<"Stack empty."<<endl;
        }
    }

    void print(){
        Node<T> *temp=head;
        while (temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    sllstack<int> slls;
    slls.push(10);
    slls.push(20);
    slls.push(30);
    slls.push(40);
    cout<<slls.size()<<endl;
    cout<<slls.isEmpty()<<endl;
    int temp;
    slls.top(temp);
    cout<<temp<<endl;
    slls.pop();
    slls.top(temp);
    cout<<temp<<endl;
    slls.print();
}