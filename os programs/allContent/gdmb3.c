#include<stdio.h>
#include<string.h>
#include<gdbm.h>
#include<unistd.h>
#include<stdlib.h>
/*
 typedef struct myd_tag{
                 int id;
                 char name[24];
		 int salary;
		 char designation[50];
               }myd;

int main(int argc, char *argv[])
{
	GDBM_FILE file;
	
	datum key1, data1, ndata1;	//datum types
	char *k1 = "key1";		//key value
	myd d1 = {1,"ABC",10000,"Manager"};	//struct d1 elements
	key1.dptr = k1;			//key got the to the pointer to value
	key1.dsize = strlen(k1) + 1;	//key size
	data1.dptr = (char *)&d1;	//data got the pointer to value;
	data1.dsize = sizeof(d1);	//data size
	file=gdbm_open("DB1",0,GDBM_WRCREAT|GDBM_READER,0660,0); //database opened
	gdbm_store(file,key1,data1,GDBM_INSERT);		//data stored in database
	ndata1=gdbm_fetch(file,key1);		//data fetched
	
	printf("Data: %d\n",((myd *)ndata1.dptr)->id);
	printf("Data: %s\n",((myd *)ndata1.dptr)->name);
	printf("Data: %d\n",((myd *)ndata1.dptr)->salary);
	printf("Data: %s\n",((myd *)ndata1.dptr)->designation);
	gdbm_close(file);

}

*/
typedef struct gdbmStruct{
	int id;
	char name[24];
	char lastName[24];
}gdbms;
int main(){
	GDBM_FILE file;
	datum k1,data1,retrieveData;
	char *key1 = "firstkey";
	gdbms d1 = {1,"benny","singh"};
	k1.dptr = key1;
	k1.dsize = strlen(key1)+1;
	data1.dptr = (char*)&d1;
	data1.dsize = sizeof(d1);
	
	file = gdbm_open("DB1",0,GDBM_WRCREAT|GDBM_READER,0660,0);
	if(!file){
		fprintf(stderr,"could not open database");
		exit(1);	
	}
	gdbm_store(file,k1,data1,GDBM_INSERT);
	
	retrieveData = gdbm_fetch(file,k1);

	printf(" Id = %d \n",((gdbms *)retrieveData.dptr)->id);
	printf(" Name = %s\n",((gdbms *)retrieveData.dptr)->name);
	printf(" Last name = %s\n",((gdbms *)retrieveData.dptr)->lastName);

	datum k2,data2,rd2;
	char *key2 = "k2";
	gdbms d2 = {2,"paul","singh"};;
	k2.dptr = key2;
	k2.dsize = strlen(key2)+1;
	data2.dptr=(char *)&d2;
	data2.dsize = sizeof(d2);
	gdbm_store(file,k2,data2,GDBM_INSERT);
	retrieveData=gdbm_fetch(file,k2);
	printf(" Id = %d \n",((gdbms *)retrieveData.dptr)->id);
	printf(" Name = %s\n",((gdbms *)retrieveData.dptr)->name);
	printf(" Last name = %s\n",((gdbms *)retrieveData.dptr)->lastName);
	
}
