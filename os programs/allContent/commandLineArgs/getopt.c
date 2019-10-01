#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

/*

int main(int argc, char *argv[]){
	int opt;
	while( (opt = getopt(argc,argv,":if:lrn:a:") )!= -1 ){
	//printf("in while \n");
	switch(opt){
	case 'i':
	case 'l':
	case 'r':
		printf("option = %c \n",opt);
		break;
	case 'f':
		printf("filename = %s \n",optarg);
		break;
	case 'n':
		printf("name = %s \n",optarg);
		break;
	case 'a':
		printf("age  = %s \n",optarg);
		break;
	case ':':
		printf("option needs a value \n");
		break;
	case '?':
		printf("unknown option %c \n",optopt);
		break;
	default :
		printf("helllllo\n");
		break;	
		}		
	}

	for(;optind<argc;optind++){
	printf("argument : %s \n",argv[optind]);
	}

}
*/

// Custom getopt  :
int main(int argc, char *argv[]){
	int opt;
	//printf("For name : -n\nFor age: -a\nFor regNo : -r\nFor CGPA : -c\n"	);
	while( (opt = getopt(argc,argv,"n:a:r:c:") )!= -1 ){
	//printf("in while \n");
	switch(opt){
	case 'n':
		printf("name = %s \n",optarg);
		break;
	case 'a':
		printf("age  = %s \n",optarg);
		break;
	case 'r':
		printf("reg number = %s \n",optarg);
		break;
	case 'c':
		printf("cgpa = %s\n",optarg);
		break;
	case ':':
		printf("option needs a value \n");
		break;
	case '?':
		printf("unknown option %c \n",optopt);
		break;
	default :
		printf("nothing found\n");
		break;	
		}		
	}

	for(;optind<argc;optind++){
	printf("argument : %s \n",argv[optind]);
	}

}
