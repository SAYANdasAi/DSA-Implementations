#include<iostream>
#include<string>
using namespace std;

class stack{
    private:
        int top;
        int arr[5];
    
    public:
        stack(){
            top = -1;
            for(int i = 0;i<5;i++){
                arr[i] = 0;
            }
        }
        void push(int val){
            if(isFull())
                cout<<"Stack is full please remove elements";
            else
                top++;
                arr[top] = val;
        }
        int pop(){
            if(isEmpty()){
                cout<<"No elements are available to be further removed";
                return 0;
            }else{
                int popVal = arr[top];
                arr[top] = 0;
                top--;
                return popVal;
            }
        }
        bool isEmpty(){
            if(top == -1)
                return true;
            else 
                return false;
        }
        bool isFull(){
            if(top == 4)
                return true;
            else
                return false;
        }
        int peek(int pos){
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                return 0;
            }
            else
                return arr[pos-1];
        }
        int count(){
            return (top+1);
        }
        void change(int pos,int val){
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                
            }
            else{
                arr[pos-1] = val;
                
            }
        }
        void display(){
            for(int i = 4;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){
    stack s1;
    int option,position,value;

    do{
        cout<<"Enter the operation number you want to do. Enter 0 to exit"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. Clear screen"<<endl;

        cin>>option;
        switch(option){
            case 1:
                cout<<"Enter an item to push in: ";
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"Item popped: "<<s1.pop()<<endl;
                break;

            case 3:
                if(s1.isEmpty()) cout<<"Stack is empty"<<endl;
                else cout<<"Stack is not empty"<<endl;
                break;
            case 4:
                if(s1.isFull()) cout<<"Stack is full"<<endl;
                else cout<<"Stack is not full"<<endl;
                break;
            case 5:
                cout<<"Enter the position to peek in: ";
                cin>>position;
                cout<<"Object at position "<<position<<": "<<s1.peek(position);
                break;
            case 6:
                cout<<"The stack size is: "<<s1.count();
                break;
            case 7:
                cout<<"Enter the position where you want to change: ";
                cin>>position;
                cout<<"Enter the new value: ";
                cin>>value;
                s1.change(position,value);
                cout<<"Value changed"<<endl;
                break;

            case 8:
                cout<<"Your stack is:"<<endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Enter a proper option"<<endl;
              
        }


        
    }while(option!=0);
    


    return 0;
}