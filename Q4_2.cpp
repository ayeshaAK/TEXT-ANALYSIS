//# include <iostream>
//using namespace std ;
void countWordsBasedOnLength ( char *string , int *&array , int &size)
{
   int count = 0 ;
    int max_len = -1000 ;
    int running_len = 0 ;
    int spaces = 0 ;
    for ( int i = 0 ; ( string [i] != 0 ) ; i++ )
    {
        if ( string [i] == ' ')
        {
            spaces ++ ;
            if ( running_len >= max_len )
            {
                max_len = running_len ;
            }
            running_len = 0 ;
        }
        else
        {
            running_len ++ ;
        }
    }
    size = max_len + 1;
    array = new int [size] ;
    array [0] = spaces ;
    for ( int i = 0 ; ( string [i] != '\0' ) ; i++ )
    {
        if ( string [i] == ' ')
        {
            array [count] ++ ;
            count = 0 ;
        }
        else
        {
            count ++ ;
            if ( string [i+1] == '\0' )
            {
                array [count] += 1 ;
            }
        }
    }
}
/*
int main ()
{
    char *sajid = (char*) "This is a test String \n New Line" ;
    int *array ; int size ;
    countWordsBasedOnLength( sajid , array , size ) ;
        int i=0;
    while (i<size)
    {
    	cout <<i << ": "<< array [i]<< endl ; i++;
    }


}*/
