# string-operations
## Aim:-String Operations
### Theory:-
        Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string                 contains the characters that comprise the string followed by a null.The following declaration and initialization create a string           consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the         string is one more than the number of characters in the word "Hello."
#### Algorithm:-
          1)Start
          2)void uplow(char s[]);
          3)int main(){"Statements"}
          4)void uplow(char *s){"Statements"}
          5)while(*s!='\0'){
		              if((*s>='A')&&(*s<='Z'))
		              {
		                    *s=-('A'-*s)+'a';
	                 }
	                 else if((*s>='a')&&(*s<='z'))
	                 *s=*s-'a'+'A';
           6)End
##### Conclusion:-
            From this program we learnt how to implement different functions in Strings.Like here in this program we performed conversion               from higher case to lower case and vice versa.
            
