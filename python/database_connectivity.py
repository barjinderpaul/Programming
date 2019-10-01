import mysql.connector

mydb = mysql.connector.connect(host="localhost",user="root",passwd="12345",database="nielit")


#is database connected: 
db_info = mydb.is_connected()
if(db_info):
    db_info = mydb.get_server_info()
    print("connected ",db_info)
#all databases
my_cursor = mydb.cursor()

my_cursor.execute("select *from student");

result = my_cursor.fetchall()

for i in result:
    print(i)

