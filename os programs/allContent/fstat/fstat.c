#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>

struct stat1{
               dev_t     st_dev;         /* ID of device containing file */
               ino_t     st_ino;         /* inode number */
               mode_t    st_mode;        /* protection */
               nlink_t   st_nlink;       /* number of hard links */
               uid_t     st_uid;         /* user ID of owner */
	       gid_t     st_gid;         /* group ID of owner */
 	       off_t     st_size;        /* total size, in bytes */
               blksize_t st_blksize;     /* blocksize for filesystem I/O */ //How much minimum physical memory is allocated to files;
};
int main(){

struct stat1 s1;
stat("f1.txt",&s1);
printf("Inode of this file %d \n", s1.st_ino); //similarily all others;
printf("device id =  %d \n", s1.st_dev); //similarily all others;
printf("Mode of this file %d \n", s1.st_mode); //similarily all others;
}
