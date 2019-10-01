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

void push(Stack* s,int x){
    cout<<"push";
    if((s->top)>=99){
        cout<<"overflow\n";
        return;
    }
    s->a[++s->top]=x;
    cout<<"s[a] = "<<s->a[s->top]<<"\n";
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
    for(int i=0;i<n;i++){
        cin>>val;
        push(s,val);
    }
    cout<<peek(s);
}
