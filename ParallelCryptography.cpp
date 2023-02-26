/********************************************************************
* 	Project Name: Parallel Cryptographic Program					*
*	Team Members: Muhammad Owais Mushtaq [18k-1177]					*
*				  Faiq Nadeem [18k-1194]							*
*				  Syed Haris [18k-1162]      						*
*********************************************************************/
#include<bits/stdc++.h> 
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include <algorithm>
#include <string.h>
using namespace std;


COORD coord= {0,0};
int FileCount=0;

//Prototypes of below Define Functions

void MainMenu();
std :: string Input_through_File();
void Encryption_Menu();
void Encryption(int c);
void Decryption_Menu();
void Decryption(int c);
void About();

/*-----------------------------------------------Functions for Consule based GUI------------------------------------------------------------*/

void delay(){

    int i;
    for(i=0;i<4500000;i++);

}

void SecDelay(){

    int i;
    for(i=0;i<25;i++){
        delay();
    }
}

void BoldLine(){

	cout<<"\n\t\t";
	for(int i=0;i<129;i++){
		cout<<"\xDB";
	}
	cout<<"\t\t";
}

void MainScreen(){

	string note="\n\n\n\n\tCaution! \n\tBefore Starting Project, Please make sure that console is in Full Screen.\n\n\t";
	string upperline="\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb";
	string lowerline="\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";
	string author="\n\t\t\xba\t\t* Muhammad Owais Mushtaq [18k-1177]\t* Faiq Nadeem [18k-1194]\t* Syed Haris Ahmed[18k-1162]\t\t \xba\n";

	for(int i=0; i<note.size();i++){
		cout<<note[i];
		delay();
	}
		system("pause");


	char s=1;
	system("cls");
	cout<<endl<<endl;
	cout<<"\n\n\n\n\n\n\n";
	BoldLine();

	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\tProgram for Parallel Cryptography\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	cout<<"\n\t\t\xDB\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xDB";
	BoldLine();
	cout<<endl<<endl<<endl;
	cout<<"\t\tTeam Members: \n";
		for(int i=0; i<upperline.size();i++){
		cout<<upperline[i];
		delay();
	}
		for(int i=0; i<author.size();i++){
		cout<<author[i];
		delay();
	}
		for(int i=0; i<lowerline.size();i++){
		cout<<lowerline[i];
		delay();
	}
	cout<<"\n\t\t\t\t\t\t\t\t\tLoading ...";
	int i=0;
	while(i<1){

        system("color 9");
        SecDelay();
        system("color 1");
        SecDelay();
        system("color 9");
        SecDelay();
        system("color A");
        SecDelay();
        system("color 2");
        SecDelay();
        system("color A");
        SecDelay();
        system("color B");
        SecDelay();
        system("color 3");
        SecDelay();
        system("color B");
        SecDelay();
        system("color C");
        SecDelay();
        system("color 4");
        SecDelay();
        system("color C");
        SecDelay();
        system("color D");
        SecDelay();
        system("color 5");
        SecDelay();
        system("color D");
        SecDelay();
        system("color E");
        SecDelay();
        system("color 6");
        SecDelay();
        system("color E");
        SecDelay();
        system("color F");
       	i++;
    }	
    	

}

void gotoxy(int x,int y){

	coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

void Box(int a,int b,int c,int d){
    int i;
    system("cls");
    gotoxy(20,10);

    for (i=a; i<=b; i++)
    {
        gotoxy(i,3);
        printf("\xcd");
        gotoxy(i,5);
        printf("\xcd");
        gotoxy(i,c);
        printf("\xcd");
        gotoxy(i,d);
        printf("\xcd");
    }

    gotoxy(a,3);
    printf("\xc9");
    gotoxy(a,4);
    printf("\xba");
    gotoxy(a,5);
    printf("\xc8");
    gotoxy(b,3);
    printf("\xbb");
    gotoxy(b,4);
    printf("\xba");
    gotoxy(b,5);
    printf("\xbc");

    for(i=c; i<=d; i++)
    {
        gotoxy(a,i);
        printf("\xba");
        gotoxy(b,i);
        printf("\xba");
    }

    gotoxy(a,c);
    printf("\xc9");
    gotoxy(a,d);
    printf("\xc8");
    gotoxy(b,c);
    printf("\xbb");
    gotoxy(b,d);
    printf("\xbc");

}

void HeadingBox(){

	 int a=40,b=115;

	for (int i=a; i<=b; i++)
    {

        gotoxy(i,3);
        printf("\xcd");
        gotoxy(i,5);
        printf("\xcd");

    }


    gotoxy(a,3);
    printf("\xc9");
    gotoxy(a,4);
    printf("\xba");
    gotoxy(a,5);
    printf("\xc8");
    gotoxy(b,3);
    printf("\xbb");
    gotoxy(b,4);
    printf("\xba");
    gotoxy(b,5);
    printf("\xbc");

}

void Highlight(char c, int count){

	 if (c == 'a'){

        gotoxy(52,15);
		cout<<"        * Encryption";
		gotoxy(52,18);
		cout<<"        * Decryption";
		gotoxy(52,21);
		cout<<"        * About Program";
		gotoxy(52,24);
		cout<<"        * Quit";

        switch (count){

		case 1:{

            gotoxy(52,15);
			cout<<"->      * Encryption";
            break;
			}
        case 2:{

           	gotoxy(52,18);
			cout<<"->      * Decryption";
            break;
			}
        case 3:{
            gotoxy(52,21);
			cout<<"->      * About Program";
            break;
        	}
    	case 4:{

    		gotoxy(52,24);
    		cout<<"->      * Quit";
    		break;
    		}
		}


	}else if (c == 'b' || c == 'c'){

        gotoxy(52,15);
		cout<<"        * Input through text file";
		gotoxy(52,18);
		cout<<"        * Input through typing";
		gotoxy(52,21);
		cout<<"        * Main Menu";
		gotoxy(52,24);
		cout<<"        * Quit";

        switch (count){

		case 1:{

            gotoxy(52,15);
			cout<<"->      * Input through text file";
            break;
			}
        case 2:{

           	gotoxy(52,18);
			cout<<"->      * Input through typing";
            break;
			}
        case 3:{
            gotoxy(52,21);
			cout<<"->      * Main Menu";
            break;
        	}
    	case 4:{

    		gotoxy(52,24);
    		cout<<"->      * Quit";
    		break;
    		}
		}


	}else if(c == 'd' || c == 'e'){

		gotoxy(120,33);
    	cout<<"             * Back";
		gotoxy(120,36);
		cout<<"             * Quit";


    	switch (count){

        case 1:{

            gotoxy(120,33);
			cout<<"->           * Back";
            break;
			}
        case 2:{

           	gotoxy(120,36);
			cout<<"->           * Quit";
            break;
			}
		}
	}else if(c == 'f'){

		gotoxy(62,30);
    	cout<<"             * Main Menu";
		gotoxy(62,33);
		cout<<"             * Quit";


    	switch (count){

        case 1:{

            gotoxy(62,30);
			cout<<"->           * Main Menu";
            break;
			}
        case 2:{

           	gotoxy(62,33);
			cout<<"->           * Quit";
            break;
			}
		}
	}
}

void curser(char c ,int no){

	int count=1;
    char ch='0';
    gotoxy(85,15);
    
	while(1){

		switch(ch){

		case 80:
            count++;
            if (count==no+1) count=1;
            break;

        case 72:
            count--;
            if(count==0) count=no;
            break;

		}

		Highlight(c,count);
        ch=getch();
        if(ch=='\r'){

        	if(c == 'a' && no == 4){

				switch(count){


				case 1: Encryption_Menu();
						break;
				case 2: Decryption_Menu();
						break;
				case 3: About();
				break;
				default:
						for(int i=0;i<16; i++){
						cout<<endl;
					}
					exit(0);
					break;

				}


            }else if(c == 'b' && no == 4){

				switch(count){


				case 1: Encryption(1);
						break;
				case 2: Encryption(2);
						break;
				case 3: MainMenu();
				break;
				default:
						for(int i=0;i<16; i++){
						cout<<endl;
					}
					exit(0);
					break;

				}


            }else if(c == 'c' && no == 4){

				switch(count){


				case 1: Decryption(1);
						break;
				case 2: Decryption(2);
						break;
				case 3: MainMenu();
				break;
				default:
						for(int i=0;i<16; i++){
						cout<<endl;
					}
					exit(0);
					break;

				}


            }else if(c == 'd' && no==2){
            	if(count==1)Encryption_Menu();
            	else{

            		for(int i=0;i<10; i++){
						cout<<endl;
					}
            		exit(0);
				}
			}else if(c == 'e' && no==2){
            	if(count==1)Decryption_Menu();
            	else{

            		for(int i=0;i<10; i++){
						cout<<endl;
					}
            		exit(0);
				}
			}else if(c == 'f' && no==2){
            	if(count==1)MainMenu();
            	else{

            		for(int i=0;i<7; i++){
						cout<<endl;
					}
            		exit(0);
				}
			}

        }
    }
}

void MainMenu(){

	system("cls");
	Box(40,115,8,40);
	gotoxy(66,4);
	cout<<"Program for Parallel Cryptography";
	gotoxy(52,15);
	cout<<"        * Encryption";
	gotoxy(52,18);
	cout<<"        * Decryption";
	gotoxy(52,21);
	cout<<"        * About Program";
	gotoxy(52,24);
	cout<<"        * Quit";

	curser('a',4);


}

void Encryption_Menu(){

	system("cls");
	Box(40,115,8,40);
	gotoxy(66,4);
	cout<<"Encryption Input Methods";
	gotoxy(52,15);
	cout<<"        * Input through text file";
	gotoxy(52,18);
	cout<<"        * Input through typing";
	gotoxy(52,21);
	cout<<"        * Main Menu";
	gotoxy(52,24);
	cout<<"        * Quit";

	curser('b',4);
}

void Decryption_Menu(){
	
	system("cls");
	Box(40,115,8,40);
	gotoxy(66,4);
	cout<<"Decryption Input Methods";
	gotoxy(52,15);
	cout<<"        * Input through text file";
	gotoxy(52,18);
	cout<<"        * Input through typing";
	gotoxy(52,21);
	cout<<"        * Main Menu";
	gotoxy(52,24);
	cout<<"        * Quit";

	curser('c',4);
}

/*-----------------------------------------------Code of Consule based GUI Ends here------------------------------------------------------------*/

// ------------------------------------------ METHOD 1: Caeser Cypher BEGINS ------------------------------------------
  
/*The following functions applies the Caesar Cypher Method to encrypt the given input*/
/* It works by repacing each letter in the text with the letter that appears 6 positions ahead of it. */



string Encryption_Method_1( string input ){ 

	string output = "";
	output.resize(input.length()+1); 
		
//	output += 146; //Here, the first character is embedded in the program so that the decryption program can
					//determine which key or cypher to use.
	int shift = 6; //We shift each letter forward by 6 chracters
    int l;
  	// Here, we go through the text and work with each individual character
  	#pragma omp parallel shared(input,output) private(l)
  	{
  		#pragma omp for schedule(dynamic) ordered
		for (l = 0 ; l < input.length() ; l++ ){ 
	    
	        /* We start off by checking if the current letter in the given input is in uppercase,
			   in which case we increase the letter's ASCII character value by 6 characters, and
			   in order to store it as as string, we subtract 65 from it (The ASCII characters for uppercase letters 
			   start from 65) and proceed to MOD it by 26 (Since there are 26 characters in the alphabet)
			   anf finally cionvert it into char and store it in the output
			   */
			   
	        	if ( isupper(input[l]) ){
					output[l] = char ( int ( input[l] + shift - 65 ) % 26 + 65); 
	            }
				
				
				/* In order to ensure greater security,
				we shift all non-alphabetical characters by 3 places instead of 6*/
				
				else if( ( int(input[l]) < char(65) ) ||  ( int(input[l]) >= char(91) && int(input[l]) <= char(96) ) || int(input[l]) >= char(123) )
				{
					if( int(input[l]) == 32 ){ //space encountered
						
							output[l] = '-';
					}
					else{
						output[l] = input[l] + 3;
					}
				}
				
				// Here, we do the same for lowercase letters
			    else{
					output[l] = char ( int ( input[ l ] + shift - 97 ) % 26 + 97); 
			    }
			}
	}
	
	output[input.length()] = 'Ö';
   	// Here, we print the output
    return output; 
} 

string Decryption_Method_1(string input){
	
	string output = ""; //Here, we have ommitted the @ symbol since it was only used to identify the required method	
	int shift = 20; //We shift each letter backward by 20 chracters since the input used 6 for forward shift, so, 26-6=20
    output.resize(input.length());
	int l;
	
	#pragma omp parallel shared(input,output) private(l)
	{
	    // Here, we go through the text and work with each individual character
	    #pragma omp for schedule(dynamic) ordered
		for (l = 0 ; l < input.length() ; l++ ){ 
	    
	        /* We start off by checking if the current letter in the given input is in uppercase,
			   in which case we increase the letter's ASCII character value by 6 characters, and
			   in order to store it as as string, we subtract 65 from it (The ASCII characters for uppercase letters 
			   start from 65) and proceed to mod it by 26 (Since there are 26 characters in the alphabet)
			   anf finally cionvert it into char and store it in the output
			   */
			if (isupper(input[l])){
				output[l] = char(int(input[l] + shift - 65 ) % 26 + 65); 
	           }
			else if((int(input[l]) < char(65)) ||  (int(input[l]) >= char(91) && int(input[l]) <= char(96) ) || int(input[l]) >= char(123)){
				if( input[l] == '-' ){ //space encountered
					output[l] = 32;
				}
				else{
					output[l] = input[l] - 3;
				}
			}
				
			    // Here, we do the same for lowercase letters
		    else{
				output[l] = char(int(input[ l ] + shift - 97 ) % 26 + 97); 
		    }
		} 
	}
  
    // Return the resulting string 
    return output; 
} 

// ------------------------------------------ METHOD 1 ENDS ------------------------------------------

// ------------------------------------------ METHOD 2: Keyword Cypher BEGINS ------------------------------------------

  
/* The following method takes in a particuar keyword (e.g. "ParallelProj18k" ) 
	and inserts all of the non-numeric and non-repeating characters at the beginning of a 'Reference Key' 
	which is then used to encrypt the data
	
	eg:
	
	A B C D E F G H  I J K L M N O P Q R S T U V W X Y Z
	\ \ \ \ \ \ \ \  \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \
	 P A R L E O J K  B C D F G H I M N Q S T U V W X Y Z
	*/  
  
    // This is the set of etters in the english alphabet
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
string alphabet_LC = "abcdefghijklmnopqrstuvwxyz";   

  
// The following function will be used to compute the refrence key which will be used to convert the inpout into cyphertext
string Make_Ref_Key(string keyword){
	
	string Ref_key = ""; //This stores the key which will be used to convert the inpout into cyphertext
    bool alpha[26] = {0}; /*  Here, we have created an array which will be used to count whether a particular letter 
    						in the key has already appeared.
    						
    						Each index position in the array is used to represent the ASCII character of each letter
							after subtracting 65 from it.
							
    						for example, the ASCII character for A is 65, Therefore, alpha[i-65] or alpha[65-65] is used
    						to store the occurance of A.
    					*/ 
  
    // This loop inserts the keyword 
    // at the start of the encoded string 
    
    /* Here, we insert the given keyword at the beginning of the Reference key and 
	simply insert letters alphabetically after that  */
	
    for ( int i = 0 ; i < keyword.size() ; i++ ) 
    { 
    	//For uppercase letters
    	if ( keyword[i] >= 'A' && keyword[i] <= 'Z' ) //for uppercase characters
	    { 
	        // Here, we check if the current character has alreaday been inserted,
			// if it has been inserted, we do nothing
			// otherwise we insert the character into the reference key and 
	            
		    if ( alpha[ keyword[i] - 65 ] == 0 ){ 
		        Ref_key += keyword[i]; 
		               
				alpha[ keyword[ i ] - 65 ] = 1; 
		                
		    }
	    }
        
		else if( keyword[ i ] >= 'a' && keyword[ i ] <= 'z') //for lowercase letters
	    { 
		    if ( alpha[ keyword[ i ] - 97 ] == 0){   
		        Ref_key += keyword[ i ] - 32; 
		                
				alpha[ keyword[i] - 97 ] = 1; 
			} 
		}
	} 
  
    // This loop inserts the remaining 
    // characters in the encoded string. 
    for (int i = 0; i < 26; i++){ 
    
        if(alpha[i] == 0){ 
        	
			alpha[ i ] = 1; 
	            
	        Ref_key += char(i + 65); 
	    } 
	} 
    
	return Ref_key; 
} 
  
// Function that will encrypt the message 

string Encryption_Method_2(string input){ 
	
	string Ref_Key = Make_Ref_Key("ParallelProj18k");
	int index; // stores index position from which element will be referenced
	string result = ""; // stores result
	result.resize(input.length()+1);
	int i;

	#pragma omp parallel shared(input,result,index,Ref_Key) private(i)
	{
		#pragma omp for schedule(dynamic) ordered
		for (int i = 0 ; i < input.size() ; i++){		
	    	//Here, we encrypt lowercase letters
		    if ( input[i] >='a' && input[i] <= 'z'){ 
		        	
				index = input[i] - 97; 
			
				result[i] = tolower( Ref_Key[index]); 
			} 
	        //Here, we encrypt Uppercase letters
			else if (input[i] >='A' && input[i] <='Z'){ 
		    	
				index = input[i] - 65; 
				            
				result[i] = Ref_Key[index]; 
		    } 
	        else if( int( input[i] ) >= 48 &&  int( input[i] ) <= 57 ){
			    	
			    result[i] = input[i] + 10;
			}
	    	else{ 
		        result[i] = input[i]; 
		    } 
		}
	}

	result[input.length()] = 'û';
    // here, we return the result
    
	return result; 
} 

// Decryption Functions begin
string Decryption_Method_2(string input){ 

	string Ref_Key = Make_Ref_Key("ParallelProj18k");
	/* Now, we will use the reference key and the alphabet set to decrypot the input */
	
	//Here, we store the positions at which each letter appears in the reference key
	map <char,int> posts; 
	int index; // stores index position from which element will be referenced
	string result = ""; // stores result
    result.resize(input.length());
    
	for(int i = 0 ; i < Ref_Key.size() ; i++){ 
    
        posts [ Ref_Key [i] ] = i; 
	} 
	
	int i;
	#pragma omp parallel shared(input,result,posts,alphabet,index) private(i)
	{
		#pragma omp for schedule(dynamic) ordered
	    for (i = 0; i < input.size() ; i++){ 
	    
	    	//Here, we encrypt lowercase letters
			if ( input[i] >='a' && input[i] <='z'){ 
			           
				index = posts[ toupper(input[i])]; 
				
				result[i] = tolower(alphabet[ index ]); 
		    } 
		    
			//Here, we encrypt uppercase letters
			else if( input[i] >='A' && input[i] <='Z'){ 
		        
				index = posts[ input[i] ]; 
		        
				result[i] = alphabet[ index ]; 
		    }
			else if( int( input[i] ) >= 58 &&  int( input[i] ) <= 67 ){
			    	
			    result[i] = input[i] - 10;
			}
		    else // al other characs get stored as is
		    { 
		    	result[i] = input[i]; 
			}
	    } 
	}
    // returning result
    return result; 
} 
  
//Decyption functions end

// ------------------------- METHOD 2 ENDS ---------------------------------

// ------------------------- METHOD 3: Columnar Transposition Cypher BEGINS --------------------------------

/* In the following function:
	We take a particular keyword and use it's individual letters as columns for a table
  	then each cell below the letter is assigned a number acc. to it's position in the alphabet(e.g. A = 1) 
  	
  	then we start entering each character from the input text one-by-one and fill the table
  	
  	then we read each column from top to bottom acc. to the numbers we previously assigned, 
*/
  
// Key for Columnar Transposition 
 
		
	/*
		The keyword is used to fill up the column headings in the table.
		Each keyword character's  index position is used to set the priority for the column-wise printing of the cypher later
		
		REQUREMENTS:
		1) Each charac shld be unique
		2) No lowercase characs
	*/
	
map < int , int > Ref_Table; 
  
void set_ref_table_order(){ 
	string keyword = "PDC_18K";          
	
	//Here, we create the table's laypout
	for(int i = 0; i < keyword.length() ; i++){
	    Ref_Table[ keyword[ i ] ] = i; 
   } 
} 
  
// Function that will encrypt the message 

string Encryption_Method_3(string input){  
    int rows;
	int column;
	int  j = 0;
	string keyword = "PDC_18K";  
    
    string result = "£"; // this will store the result
      
    /* this gives us the number of columns in the matrix*/
    column = keyword.length();  
      
    /* this gives us the number of rows in the matrix*/
    rows = input.length() / column;  
    
    if ( input.length() % column ) {
		
		rows  = rows + 1; 
    }

	char matrix[ rows ][ column ]; //Here, we create the matrix in which our input text will be stored in a row-by-row manner (i.e row stays the same until al cloumn values ahve been filed)
  
  	/*Here, we run 2 loops which alow us to traverse through the table we previousluy created and insert the input values one by one*/
  
  	/* We begin filling up the table/matrix with the values in the input text (in the orcer in which they appear) */
  	
    for (int i = 0 , k = 0 ; i < rows; i++) //entering ith row
    { 
		for (int j = 0 ; j < column ; ) //entering ith column
        { 
        	if( input[ k ] == '\0')  // if we reach end of line
            { 
            	/* Adding the padding character '_' */
				matrix[ i ][ j ] = '_';      
            	j++; 
        	}
			else{  
            
                /* Adding only space and alphabet into matrix*/
                matrix[i][j] = input[k]; 
            	j++; 
            }	
			k++; 
    	} 
	}
	
	/* We stop filling up the table/matrix with the values in the input text (in the orcer in which they appear) */
  	for ( map <int,int> :: iterator z = Ref_Table.begin(); z != Ref_Table.end(); z++){ 
        j = z->second; 
	
        // getting result text from matrix column wise using permuted key 
        for (int i=0; i<=rows; i++){
			
        	result += matrix[i][j]; 
        } 
    }
    
    result += "£";
  
    return result; 
} 
  
// Decryption  
string Decryption_Method_3 (string result){ 
	
	string keyword = "PDC_18K";
	set_ref_table_order(); 
    /* this gives us the number of columns in the matrix*/
    int column = keyword.length();  
      
    /* this gives us the number of rows in the matrix*/
    int rows = result.length()/column; 
    
    // this will store the result of our encrypted text
	char Resultant_Matrix[ rows ][ column ];  
  
    /* here, we insert each character into matrix column by column */
    for (int j = 0, k = 0; j < column; j++){
	
        for (int i = 0 ; i < rows ; i++) {
		
            Resultant_Matrix[i][j] = result[k++]; 
  
		}
	}
		
    /* here, we update the key order, so that we can decrypt the input file */
    int index = 0; 
    
	for( map<int,int> :: iterator z = Ref_Table.begin(); z != Ref_Table.end(); z++){
	
        z->second = index++; 
    }

	/* Here we rearrange the matrix column by column according  
    to the order which we had previously set, we do this by inserting into new matrix */
    
    char Final_res[rows][column]; 
    
    map< int , int > :: iterator z = Ref_Table.begin(); 
    
    int k = 0; 
    
    for ( int l = 0, j ; keyword[ l ] != '\0' ; k++ ){
	 
        j = Ref_Table[ keyword[ l++ ] ]; 
        
	    for (int i=0; i<rows; i++){ 
	        
			Final_res[i][k] = Resultant_Matrix[i][j]; 
	    } 
    } 
  
    /* getting Message using matrix */
    string input = ""; 
    
    for (int i = 1; i < rows; i++){ 
    
        for(int j = 0; j < column; j++){ 
        
            if( Final_res[i][j] != '_'){
			
                input += Final_res[i][j]; 
            }
        }
    } 
    
    return input; 
} 

// ------------------------------------------ METHOD 3 ENDS ------------------------------------------

// ------------------------------------------ METHOD 4: Affine Cypher BEGINS ----------------------------------------

/*
	The Affine cipher is a type of substitution cipher, in which each letter in an alphabet is mapped to its numeric equivalent, (e.g A -> 1)  and is
	encrypted using a simple mathematical function, and converted back to a letter. The formula used means that each letter encrypts to one other letter, 
	and back again, meaning the cipher is essentially a substitution cipher with a rule governing which letter goes to which.
	The whole process relies on working modulo m (the length of the alphabet used). 
	In the affine cipher, the letters of an alphabet of size m are first mapped to the integers in the range 0 … m-1.
		
	The ‘key’ for the Affine cipher consists of 2 arbitrary numbers ( a and b)
*/


int b = 20; 

int a = 17; 

  
string Encryption_Method_4(string input){ 
    
	string output = "";
	output.resize(input.length()+1);
	int l; 
    
    #pragma omp parallel shared(input,output,a,b) private(l)
    {
	    //Here, the entire text is converted to uppercase, it does this by converting each lowercase letter to uppercase if it comes across one
	    #pragma omp for schedule(dynamic) ordered
		for (l = 0; l < input.length(); l++){
	    		
			//here, we encrypt uppercase letters
	       	if ( isupper(input[l]) ){
				
				output[l] = (char) ((((a * (input[l]-'A') ) + b) % 26) + 'A'); 
	        }
			//here we encrypt all non-alphabetical characters
			else   
			{
				if( input[l] >= 'a' && input[l] <= 'z' ){
					output[l] = input[l] + 2;
				} 
				else if(   ( int(input[l]) <= char(65) ) ||  ( int(input[l]) >= char(91) && int(input[l]) <= char(96) ) || int(input[l]) >= char(123)) {
					output[l] = input[l] + 2;
				}
			}
		}
	}
	
//	cout<< "\n\n output[input.length()] =" << output[input.length() - 1] << "\n\n";
	output[input.length()] = '¥';
	
    return output; 
}
  
string Decryption_Method_4(string input){

	int inverse = 0, flag = 0; 
    int l;  
    string output = "";
	output.resize(input.length()); 
          
	for ( int j = 0; j < 26; j++){
    	
    	flag = (a * j) % 26; 
          
        if (flag == 1){  
	        
			inverse = j; 
		} 
    } 
    
    
    #pragma omp parallel shared(input,output,inverse) private(l)
    {
		//here, we decrypt uppercase letters
		#pragma omp for schedule(dynamic) ordered
	    for (l = 0; l < input.length(); l++){ 
	    
			if ( isupper(input[l])){
					
				output[l] = (char) (((inverse * ((input[l]+'A' - b)) % 26)) + 'A');
	        }
			
			/* In order to ensure greater security,
			we shift all non-alphabetical characters by 3 places instead of 6*/
			else{
				if( input[l] >= 'a' && input[l] <= 'z' ){
	
					output[l] = input[l] - 2;
				} 
				else if(   ( int(input[l]) <= char(65) ) ||  ( int(input[l]) >= char(91) && int(input[l]) <= char(96) ) || int(input[l]) >= char(123)) {
				
					output[l] = input[l] -2;
				}
			}
		}
	}
	  
	return output; 
} 


// ------------------------------------------ METHOD 4 ENDS ------------------------------------------




std :: string Input_through_File(){
		
		string text;
		char filpat[100];
		cout << "\n\n\t\t\t\t\tEnter File Name (FORMAT: filename.txt): ";
		cin >> filpat;
		
		ifstream in(filpat,ios::in);
		
		if(in.is_open()){
			getline(in,text);
			in.close();
			return text;
		}else
			cout<<"\n\n\n\t\t\t\t\tFile does not exist! ";
			return "nothing";
		
		
}

void Encryption(int c){
	
	char option;
	string text;
	int encry_seq[4] = {0,1,2,3};
	vector<string>inp(4);
	int leng = 0;
	int siz = 0;
	string en_text; 
	string en_seq;
	char file_name[100];
	
	en_seq.resize(4);
    
	set_ref_table_order();
   time_t seconds;

   time(&seconds);
    
   srand((unsigned int)seconds);
  
	  //shuffle p
	  for (int i=3; i>0; --i)
	  {
	    //get swap index
	    int j = rand()%i;
	    //swap p[i] with p[j]
	    int temp = encry_seq[i];
	    encry_seq[i] = encry_seq[j];
	    encry_seq[j] = temp;
	
	system("cls");
	HeadingBox();
	gotoxy(65,4);
	cout<<"Encryption";
		
		if(c == 1){
			text = Input_through_File();
			
		}else{
			
			cout << "\n\n\t\t\t\t\tEnter text ( Type/Paste ): ";
			fflush(stdin);
			getline(cin, text);
		}
		if(text != "nothing"){
		
		cout<<"\n\t\t\t\t\tText Before Encryption:\n\n";
		cout <<text << endl;
		
		leng = text.length()/4;
	
	for(int i = 0; i<3; i++){
		inp[i] = text.substr(siz,leng);
		siz += leng;
	}
	
	inp[3] = text.substr(siz,text.length()-1);

		
	#pragma omp parallel shared(inp,encry_seq)
	{	
		#pragma omp sections
		{
			#pragma omp section
			inp[encry_seq[0]] = Encryption_Method_1(inp[encry_seq[0]]);
			
			#pragma omp section
			inp[encry_seq[1]] = Encryption_Method_2(inp[encry_seq[1]]);
			
			
			#pragma omp section
    		inp[encry_seq[2]] = Encryption_Method_3(inp[encry_seq[2]]);
			
			#pragma omp section
			inp[encry_seq[3]] = Encryption_Method_4(inp[encry_seq[3]]);
		}
	}
	
	for(int i=0;i<4;i++){
		en_seq[encry_seq[i]] = char(i+48); 
	}
	
	en_text = en_seq + inp[0] + inp[1] + inp[2] + inp[3];
	
	cout<<"\n\t\t\t\t\tText After Encryption:\n\n";
	cout << en_text << endl;
	
	cout << "\n\t\t\t\t\tDo you want to save the Encrypted text to a file?";
	cout << "\n\t\t\t\t\t(Y)Yes";
	cout << "\n\t\t\t\t\t(N)No\n\n\t\t\t\t\tY/N: ";
	cin >> option;
	
	if(toupper(option) == 'Y' ){
		cout<<"\n\t\t\t\t\tNote: IF file is not in the same folder then Please Enter the\n\t\t\t\t\tFilename with it's address. E.g. C:\\Users\\rt\\Desktop\\FileName.txt";
		cout << "\n\n\t\t\t\t\tEnter File Name : ";
		cin >> file_name;
		
		ofstream out(file_name,ios::out);
		out << en_text;
		
		out.close();
	}
	
	else if(toupper(option) == 'N'){
		
	}}
		
		
		gotoxy(120,33);
		cout<<"             * Back";
        gotoxy(120,36);
		cout<<"             * Quit";
		curser('d', 2);
}


}

void Decryption(int c){
	
	char encry_m[] = {'Ö','û','£','¥'};
	char file_pat[100];
	string text;
	int encry_seq[4];
	string en_seq;
	int e_seq[4];
	vector<string>inp(4);
	int pos;
	int siz = 0;
	string t_text;
	string d_text;
	char option;
	char file_name[100];
	
	system("cls");
	HeadingBox();
	gotoxy(65,4);
	cout<<"Decryption";
	
	set_ref_table_order();
	
	if(c == 1){
			
			text = Input_through_File();
			
		}else{
			
			cout << "\n\n\t\t\t\t\tEnter text ( Type/Paste ): ";
			fflush(stdin);
			getline(cin, text);
		}
		if(text != "nothing"){
		
	en_seq = text.substr(0,4);
	t_text = text.substr(4);
	
	for(int i=0;i<4;i++){
		e_seq[i] = int(en_seq[i] - 48);
	}
	
	for(int i=0;i<4;i++){
		encry_seq[e_seq[i]] = i;
	}
	
	for(int i = 0; i<4; i++){
		if(e_seq[i] == 2){
			string t_str = t_text.substr(1);
			int pos1 = t_str.find(encry_m[e_seq[i]]);
			inp[i] = t_text.substr(siz,pos1);
			t_text = t_text.substr(pos1+2);
		}
		else{
			pos = t_text.find(encry_m[e_seq[i]]);
			inp[i] = t_text.substr(siz,pos);
			t_text = t_text.substr(pos+1);
		}
		
	} 
	cout << "\n\nEncrypted Text: \n\n";
	cout << text << endl;
	
	#pragma omp parallel shared(inp,encry_seq)
	{	
		#pragma omp sections
		{
			#pragma omp section
			inp[encry_seq[0]] = Decryption_Method_1(inp[encry_seq[0]]);
			
			#pragma omp section
			inp[encry_seq[1]] = Decryption_Method_2(inp[encry_seq[1]]);
			
			#pragma omp section
    		inp[encry_seq[2]] = Decryption_Method_3(inp[encry_seq[2]]);
			
			#pragma omp section
			inp[encry_seq[3]] = Decryption_Method_4(inp[encry_seq[3]]);
		}
	}
	
	d_text = inp[0] + inp[1] + inp[2] + inp[3];
	
	cout << "\n\nDecrypted Text: \n\n";
	cout << d_text << endl;
	
	cout << "\n\t\t\t\t\tDo you want to save the Encrypted text to a file?";
	cout << "\n\t\t\t\t\t(Y)Yes";
	cout << "\n\t\t\t\t\t(N)No\n\n\t\t\t\t\tY/N: ";
	cin >> option;
	
	if(toupper(option) == 'Y' ){
		cout<<"\n\t\t\t\t\tNote: IF file is not in the same folder then Please Enter the\n\t\t\t\t\tFilename with it's address. E.g. C:\\Users\\rt\\Desktop\\FileName.txt";
		cout << "\n\n\t\t\t\t\tEnter File Name : ";
		cin >> file_name;
		
			ofstream out(file_name,ios::out);
			out << d_text;
			out.close();
			
				}else if(toupper(option) == 'N'){
		
			}
	}
	
	
	gotoxy(120,33);
	cout<<"             * Back";
    gotoxy(120,36);
	cout<<"             * Quit";
	curser('e', 2);
	}


void About(){
	system("cls");
	HeadingBox();
	gotoxy(65,4);
	cout<<"About Program";
	
	cout<<"\n\n\n\t\t\t\t\tThis Computer Program provides the user with the option to input a plaintext";
	cout<<"\n\n\t\t\t\t\tmessage in one of two possile ways. It then proceeds to divide the plaintext";
	cout<<"\n\n\t\t\t\t\tinto a set of three textual bodies, and assigns to each of these bodies or ";
	cout<<"\n\n\t\t\t\t\tparts a randomly generated number between 0 and 3, which are then used to ";
	cout<<"\n\n\t\t\t\t\tidentify the appropriate encryption mechanism and finally encrypt each part in";
	cout<<"\n\n\t\t\t\t\tparallel, and thus merge the sub-texts together. Likewise, the decryption precess ";
	cout<<"\n\n\t\t\t\t\tidentifies key symbols embedded within the cipher text and uses them to decrypt,  ";
	cout<<"\n\n\t\t\t\t\torganize and store, in a text file, the message intended for the program's user.'";
	cout<<"\n\n\t\t\t\t\t ";
	
		gotoxy(62,30);
		cout<<"             * Main Menu";
        gotoxy(62,33);
		cout<<"             * Quit";
		curser('f', 2);
}

int main(){



//	MainScreen();
	MainMenu();		

}



