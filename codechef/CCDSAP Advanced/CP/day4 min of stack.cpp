#include<iostream>
using namespace std;
struct Stack{
    int *a;
    int top=-1,cap;
};

struct Stack* createStack(int cap){
   struct Stack* s = new Stack;
    s->cap = cap;
    s->top=0;
    s->a = new int[cap*sizeof(int)];
    return s;
};

void push(Stack* s,int x,int minArray[]){
    //cout<<"push";
    if((s->top)>=99){
        cout<<"overflow\n";
        return;
    }
    if(s->top==0)
        minArray[s->top] = x;
    else
        minArray[s->top] = min(x,minArray[s->top-1]);

    s->a[++s->top]=x;
}

int minimum(Stack *s,int minArray[]){
    if(s->top<0){
        cout<<"Underflow\n";
        return -1;
    }
    //cout<<"top = "<<s->top<<" "<<s->a[s->top]<< "\n";
    return minArray[s->top-1];
}

void pop(Stack *s){
    if(s->top<0){
        cout<<"underflow\n";
        return;
    }
    s->top--;
}

int peek(Stack *s){
    if(s->top<0){
        cout<<"no element\n";
        return -11;
    }
    return s->a[s->top];
}

int main(){
    Stack *s = createStack(100);
    int n,val;
    cin>>n;
    int minArray[n];
    for(int i=0;i<n;i++){
        cin>>val;
        push(s,val,minArray);
    }
    cout<<"peek at top = "<<peek(s)<<"\n";
    cout<<"min = "<<minimum(s,minArray)<<"\n";
    //displaying contents of minarray;
    for(int x:minArray){
        cout<<x<<" ";
    }
    pop(s);
    pop(s);
    pop(s);
    cout<<"min = "<<minimum(s,minArray)<<"\n";

}
