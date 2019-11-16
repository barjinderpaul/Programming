import java.io.*;
class files {

    static void createFile(String fileName) {
        
        try {
            File newFile = new File(fileName);
            newFile.createNewFile();
            if(newFile.exists()) {
                System.out.println("New file is created successfully");
            }
        }
        catch (IOException e) {
            System.out.println(e.getMessage());
        }
        
    }


    private static void createAndDeleteFile(String fileName) {
        try {
            File newFile = new File(fileName);
            if(newFile.createNewFile()) {
                System.out.println("File Created");
                
                // deleting file;
                if(newFile.delete()) {
                    System.out.println("File successfully deleted");
                }
                else{
                    System.out.println("Delete file not successful");
                }

            }
            else{
                System.out.println("File already exists");
            }
        }
        catch(IOException e) {
            System.out.println(e.getMessage());
        }
    }


    private static void createReadWriteDelete(String fileName) {

        try {
            File newFile = new File(fileName);
            
            if(newFile.exists()){
                throw new IOException("File already exists");
            }
            newFile.createNewFile();

            // writing in file;
            String dataToWrite = "Starting to Write data.\nWriting data in file.....\n data written in file";
            FileWriter fw = new FileWriter(newFile);
            fw.write(dataToWrite);
            fw.flush();
            fw.close();

            char []writtenData = new char[dataToWrite.length()];
            FileReader fr = new FileReader(newFile);
            int size = fr.read(writtenData);
            System.out.println("Size of written data = "+size + "\nData = \n" );
            for(int i=0;i<writtenData.length;i++) {
                System.out.print(writtenData[i]);
            }
            fr.close();


        }   
        catch(IOException e) {
            System.out.println(e.getMessage());
        }
        
    }
    private static void betterMethodsToReadAndWrite(String fileName){
        try {   
            File newFile = new File(fileName);
            newFile.deleteOnExit();
            if(newFile.exists()){
                throw new IOException("File already exists");
            }
            newFile.createNewFile();
            FileWriter fw = new FileWriter(newFile);
            PrintWriter pw = new PrintWriter(fw);
            pw.println("First Line");
            pw.println("Second line");
            pw.close();

            FileReader fr = new FileReader(newFile);
            BufferedReader br = null;
            try {
                br = new BufferedReader(fr);
                System.out.println("Reading data from the file with bufferedReader");
                for(String line = br.readLine();line!=null;line=br.readLine()){
                    System.out.println(line);
                }
            }
            finally {
                br.close();
            }

        }catch(IOException e) {
            System.out.println(e.getMessage());
        }
    }
    public static void main(String[] args) {
        File f = new File("enums.java");

        // check whether file exists in current directory
        System.out.println(f.exists());

        // creating new files;
        createFile("file-created-by-java.txt");

        // creating and deleting files;
        createAndDeleteFile("file-created-and-deleted.txt");

        // creating, reading, writing and deleting files in java;
        createReadWriteDelete("file-by-java-3.txt");

        betterMethodsToReadAndWrite("file-by-java-4.txt");

        
    }
}