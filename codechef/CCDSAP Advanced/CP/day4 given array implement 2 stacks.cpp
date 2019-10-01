#include<iostream>
using namespace std;
struct Stack{
    int *a;
    int top1,top2,capacity;
};
Stack *createStack(int cap){
    Stack *s = new Stack;
    s->a = new int[cap*sizeof(int)];
    s->capacity = cap;
    s->top1=-1;
    s->top2=cap-1;
    return s;
}

void push1(Stack *s,int val){
    if(s->top1+1 >= s->top2 ){
        cout<<"overflow\n";
        return;
    }
    s->a[++s->top1] = val;

}
void push2(Stack *s,int val){
    if(s->top2-1 <= s->top1){
        cout<<"array full\n";
        return;
    }
    s->a[--s->top2]=val;
}
int peek1(Stack* s){
    if(s->top1<0){
        cout<<"underflow\n";
        return -1;
    }
    return s->a[s->top1];
}
int peek2(Stack *s){
    if(s->top2>s->capacity-1){
        cout<<"underflow\n";
        return -1;
    }
    return s->a[s->top2];
}

void pop1(Stack* s){
    if(s->top1<0){
        cout<<"underflow\n";
        return;
    }
    s->top1--;
}

void pop2(Stack *s){
    if(s->top2>s->capacity-1){
        cout<<"underflow\n";
        return;
    }
    s->top2++;
}

int main(){
    Stack *s = createStack(10);
    int n,val,type;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>type>>val;
        if(type==1)
            push1(s,val);
        else
            push2(s,val);

    }
    cout<<peek1(s)<<"\n";
    cout<<peek2(s)<<"\n";
    pop1(s);
    pop2(s);
    cout<<peek1(s)<<"\n";
    cout<<peek2(s)<<"\n";


}
