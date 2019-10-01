#include<iostream>
using namespace std;
struct Stack{
    int *a;
    int top=-1,cap;
};

struct Stack* createStack(int cap){
   struct Stack* s = new Stack;
    s->cap = cap;

    s->a = new int[cap*sizeof(int)];
    return s;
};

void push(Stack* s,int x){
    if((s->top)>=99){
        cout<<"overflow\n";
        return;
    }
    s->a[++s->top]=x;
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

bool isEmpty(Stack *s){
    if(s->top<0)
        return true;
    return false;
}

void pushBottom(Stack *s,int toPushAtBottom){
    if(isEmpty(s)){
        push(s,toPushAtBottom);
    }
    else{
        int p = peek(s);
        pop(s);
        pushBottom(s,toPushAtBottom);
        push(s,p);
    }
}
int main(){
    Stack *s = createStack(100);
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        push(s,val);
    }
    int toPushAtBottom;
    cin>>toPushAtBottom;
    pushBottom(s,toPushAtBottom);
    for(int i=0;i<=s->top;i++)
        cout<<s->a[i]<<" ";
}

