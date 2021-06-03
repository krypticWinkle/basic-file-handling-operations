
//LAB 1 OSSD | Ayush Kumar | 18104031 | B12
//This program opens, writes and closes a file

# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
	
	char data[41]
		= "Hey there! Welcome to my github account!";


	filePointer = fopen("file_handling_operations.c", "w");
	

	if(filePointer == NULL)
	{
		printf( "file_handling_operations.c file couldn't open." );
	}
	else
	{
		
		printf("File is opened.\n");
		
		// Writing data into it
		if ( strlen(data) > 0)
		{
			
			// writing in the file using fputs()
			fputs(data, filePointer);
			fputs("\n", filePointer);
		}
		
		// Closing the file using fclose()
		fclose(filePointer) ;
		
		printf("file_handling_operations.c was updated with some data\n");
		printf("Closing the file now.") ;
	}
	return 0;		
}
