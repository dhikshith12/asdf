#include<iostream>
#include<climits>
using namespace std;
class Stack{
    private:
        int top;
        int capacity;
        int *arr;
        Stack * ss;
        void grow(){
            if(top >=capacity/2){
                int temp = capacity;
                capacity*=2;
                int *arrcp;
                arrcp = new int[capacity];
                for(int i=0;i<temp;i++)
                    arrcp[i] = arr[i];
                for(int i=temp;i<capacity;i++)
                    arrcp[i] = INT_MAX;
                delete [] arr;
                arr = arrcp;
            }
        }
        void shrink(){
            if(top <= capacity/4){
                capacity/=2;
                int * arrcp;
                arrcp = new int[capacity];
                for(int i=0;i<capacity;i++)
                    arrcp[i] = arr[i];
                delete [] arr;
                arr = arrcp;
            }
        }
    public:
        Stack(){
            top = 0;
            capacity = 2;
            arr = new int[capacity];
            for(int i=0;i<capacity;i++)
                arr[i] = INT_MAX;
            ss = NULL;
        }
        ~Stack(){
            delete [] arr;
            delete ss;
        }
        void setMinStack(Stack* minStack)
        { ss = minStack; }
        void push(int i)
        {
            if(ss!=NULL&&(ss->empty()||(ss->peak()>i&&ss->peak()!=INT_MAX))){
                cout<<"status of SS: size:"<<ss->size()<<" top: "<<ss->peak()<<" i "<<i<<endl;
                ss->push(i);
            }
            arr[top++] = i;
            grow();
        }
        int size(){
            return top;
        }
        int getCapacity(){
            return capacity;
        }
        int pop()
        {
           if(ss!=NULL&&!ss->empty()&&(ss->peak()==peak())){
               cout<<"status of SS: size:"<<ss->size()<<" top: "<<ss->peak()<<endl;
               //ss->pop();
           }
           int t = arr[top--];
           shrink();
           return t;
        }
        bool empty()
        { return top == 0; }
        int peak()
        {
            return arr[top];
        }
        int minStack(){
            return ss->peak();
        }

};

int main(){
    Stack *s = new Stack();
    Stack *ss = new Stack();
    s->setMinStack(ss);
    s->push(18);
    s->push(19);
    s->push(29);
    s->push(15);
    cout<<"Minimum of Stack: "<<s->minStack()<<endl;
    s->pop();
    cout<<"Minimum of Stack: "<<s->minStack()<<endl;
    s->push(16);
    s->pop();
    cout<<"Minimum of Stack: "<<s->minStack()<<endl;

    return 0;
}
