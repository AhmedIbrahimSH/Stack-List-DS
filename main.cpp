#include <iostream>

using namespace std;



// 1) creating the node that is the main key of the linked list
class node {
public:
    int data;
    node* next;
    node(){
        data = 0;
        next = NULL;
    }
};

// 2) creating the main the linked list and its main functions

class linkedlist{

public:
    node* head;
    linkedlist(){
        head = NULL;
    }

    // 3) check if list is empty or not and tells the user

    void isempty(){
        if(head == NULL)
            cout << "the list is empty" << endl;
        else
            cout << "the list isnot empty" << endl;
    }

   void push(int value){
        node* temp = new node();
        temp->data = value;
        if(head == NULL){
            temp->next = NULL;
            head = temp;
        }
        else
            temp->next = head;
            head = temp;

    }

    void peek(){
        node* ptr = head;
        cout <<  ptr->data << endl;
    }

    void pop(){
        node* ptr = head;
        head = head->next;
        delete ptr;
    }


    //  6)  checks if the value actually exists or not in the linked list
    bool check(int value){
                node* ptr = head;
                while(ptr != NULL){

                    if(ptr->data == value)
                        return true;
                    else {
                        ptr = ptr->next;
                    }
                }
                return false;

            }


    // 7) adding after specific value entered by the user that exists in the linked list


        // 8) displaying all of the linked list values

        int display(){
            node* ptr = head;
            while(ptr != NULL){
                cout << ptr->data << "  ";
                ptr = ptr->next;
            }
            cout << endl;
        }

        //  9)  return the index of the specific value entered as parameter in the function
        int position(int value){
            if(check(value)){
                    int position = 0;
                    node* ptr = head;
                    while(ptr != NULL){
                        if(ptr->data == value)
                            return position;
                        else{
                            ptr = ptr->next;
                            position++;
                    }}
                    return -1;
                }

            else
                    cout << "Value you entered does not exist in the linked list " << endl;


        }







};

int main()
{

    linkedlist trial;

    trial.push(20);
    trial.push(30);
    trial.push(40);
    trial.push(50);
    trial.push(90);
    trial.display();
    trial.pop();
    trial.peek();
    trial.pop();
    trial.display();



    return 0;
}
