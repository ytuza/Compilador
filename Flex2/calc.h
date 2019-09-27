#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>


struct valores {
	int i;
	float f;
	bool b;

	valores(int in, float fn, bool bn) {

		i = in;
		f = fn;
		b = bn;

	}

};

struct vari {
	char name[20];
	int tipo;

	valores v;

	vari* next;
};

struct cola
{
	vari* head;


	vari** find(char n[20]) {

		vari **tem = &head;

		while (*tem != NULL) {
			
			if (n == (*tem)->name) {
				return tem;
			}
			tem = &((*tem)->next);
		}

		return &head;
	}
	int getint(char n[20]) {

		vari** a = find(n);

		if (*a != NULL) {
			return (*a)->v.i;
		}
	}

	float getfloat(char n[20]) {

		vari** a = find(n);

		if (*a != NULL) {
			return (*a)->v.f;
		}
	}

	bool getbool(char n[20]) {

		vari**a = find(n);

		if (*a != NULL) {
			return (*a)->v.b;
		}
	}

	valores getd(char n[20]) {
		vari** a = find(n);

		if (*a != NULL) {
			return (*a)->v;
		}
	}


	bool insert(char n[20], int t, valores vl) {


		vari** a = find(n);

		
		vari *p = (vari*)malloc(sizeof(vari));

		//strcpy(p->name,n);
		p->name = n;
		
		p->tipo = t;

		p->v.i = vl.i;
		p->v.f = vl.f;
		p->v.b = vl.b;

		

		p->next = NULL;


		*a = p;


		return true;


	}


};