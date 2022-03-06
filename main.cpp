
/* THIS FILE BELONGS TO  "AHMED IBRAHIM SHARAF ELDIN"

    THE FILE SIMPLY IS CREATING A SIMPLE STACK DS USING ARRAY
    THE NAME OF THE STACK IS "stacklist"
    The Functions developed in this file for the stack are:
    1)  isempty  (to check if the list is empty)

    2)  isfull   (to check if the list is full)
    3)  push     (to add value to the list)
    4)  pop      (to remove the element at the top of the stack)
    5)  peek     (to display the value at the top of the stack)
    6)  display  (to display/print values of the list)

    Note that : The functions are ordered in the order of their declaration

*/
#include <iostream>
using namespace std;


#define Size 20
int stackk[Size];
int  top = -1;


class stacklist{
    public:
        bool isempty(){
            if(top == -1){
                return 1;
            }
            else
                return 0;
        }
        bool isfull(){
            if(top == Size-1){
                return true;
            }
            else
                return false;

        }
     void push(int value){
        if(isfull()){
            cout << "overflow " << endl;
        }
        else {
            top++;
            stackk[top] = value;
        }
    }

    int pop(){
        if(isfull()){
            cout << "stack underflow" << endl;
            return 0;}
        else
            return stackk[(top--)];

    }
    int peek(){

        if(isempty()){
            cout << "underflow" <<endl;
    }
        else{
            return stackk[top];
    }
    }


    void display(){
        if(isempty()){
            cout << "list is empty" << endl;
        }
        else {
        for(int i = top; i>=0; i--){
            cout << stackk[i] << " ";
        }}
        cout << endl;
    }




};

/* function in the linked list
        void push(int value);
        int pop();
        int peek();
        bool isempty();
        void display();
*/
int main()
{

    stacklist v1;
    // to use the stack list , just type v1. and a drop list will appear with the functions that can be used


    // an example is shown below to add the value 15 to the list
    v1.push(15);

    // an example below is shown to add another value (20) and to display all of the stack

    v1.push(20);
    v1.display();


    // to know the function and what they do check the first 15 lines of this file
    return 0;
}




