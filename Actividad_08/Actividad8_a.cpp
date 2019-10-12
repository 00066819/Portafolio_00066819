#include <iostream>

 using namespace std;
 struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

float pop(Pila *s){
	float e;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
    }
    return e;
}

float ultvalor(Pila *s){
	if (empty(s)){
		return -1;
	}
		float a=0;
		while(!empty(s)){
			a=pop(s);
		}
		
		return a;
}
int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	push(&unaPila, 23);
	push(&unaPila, 6);
	push(&unaPila, 2001);
	push(&unaPila, 25);
	
	float ult=ultvalor(&unaPila);
	cout<<"El ultimo valor es: "<<ult<<endl;
}