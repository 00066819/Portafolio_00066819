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
	float e=0;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
        return e;
    }
    return e;
}

 float UValorIntacto(Pila s){
 	float aux=0;
 	    while(!empty(&s)){
		aux=pop(&s);
		}
		
	return aux; 	
 }
 
int main (){
	
	Pila unaPila;
	    initialize(&unaPila);
	    
	        push(&unaPila, 23);
    		push(&unaPila, 6);
    		push(&unaPila, 2001);
    		push(&unaPila, 25);
    		
    		if(empty(&unaPila)){
    		cout<<"Esta vacia"<<endl;
			}
    		else{
			cout<<"El ultimo es: "<<UValorIntacto(unaPila)<<endl;
			}
			
			if(!empty(&unaPila))
				cout<<"La pila no esta vacia"<<endl;
			else 
			cout<<"La pila esta vacia"<<endl;			
    		
	return 0;
}   
