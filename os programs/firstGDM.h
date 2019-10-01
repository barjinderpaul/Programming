#include<stdio.h>
#include<string.h>
#include<gdbm.h>

//LINK = www.tinyurl.com/gdbm-sample-code
// TO COMPILE : gcc gdbm.c -lgdbm
// ./a.out

typedef struct myd_tag{
	char first[24];
	char last[24];
} myd;

int main(int argc, char *argv[]){
	GDBM_FILE file;
	datum key1, data1, ndata1;
	datum key2, data2, ndata2;
	char *k1 = "msg1";
	char *d1 = "I love C++"; 		//data can be like this or
	char *k2 = "msg2";
	myd d2 = { "John" , "Doe" };		//or data can be like this
	
	key1.dptr = k1;
	key1.dsize =  strlen(k1) + 1;
	data1.dptr = d1;
	data1.dsize = strlen(d1) + 1;
	key2.dptr = k2;
	key2.dsize = strlen(k2) + 1;
	data2.dptr = d2;
	data2.dsize = strlen(d2) + 1;

	/*
		another way;
		data2.dptr = (char*) &d2;
		data2.dsize = sizeof(d2);	
	*/	
	
	file = gdbm_open("mydatabase, 0 , GDBM_WCREAT|GDBM_READER,0660,0);
	gdbm_store(file,key1,data1,GDBM_INSERT); 		//data inserted
	gdbm_store(file,key2,data2,GDBM_INSERT);		//data inserted

	ndata1 = gdbm_fetch(file,key1); 		//datum returned, data fetched;	
	ndata2 = gdbm_fetch(file,key2);			//datum	 returned , data fetched;

printf("ndata1 : %s\n",ndata1,dptr);
printf("ndata2 : %s\n", ((myd *)ndata2.dptr)->first);
printf("ndata2 : %s\n", ((myd *)ndata2.dptr)->last);

gdbm_close(file);

}
