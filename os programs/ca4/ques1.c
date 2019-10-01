#include <stdlib.h>
#include <stdio.h>
#include <mysql.h>
int main(int argc, char *argv[]) {
	MYSQL my_connection;
	int res;
	mysql_init(&my_connection);
	if (mysql_real_connect(&my_connection, "localhost","root", "root", "db1", 0, NULL, 0)) 
	{
		printf("Connection success\n");
		res = mysql_query(&my_connection, "create table db1table (emp_id int, emp_name varchar(50), emp_salary varchar(50), 				emp_designation varchar(50)");
		if (!res) {
			printf("table created\n");
		}
		
		else {
			printf("error in table creating ");
			mysql_error(&my_connection);
			}
	mysql_close(&my_connection);
	} 
	else {
		fprintf(stderr, "Connection failed\n");
		if (mysql_errno(&my_connection)) 
		{
			fprintf(stderr, "Connection error %d: %s\n",
			mysql_errno(&my_connection), mysql_error(&my_connection));
		}
	}
	return 0;
}
