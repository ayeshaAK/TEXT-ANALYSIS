//# include <iostream>
//using namespace std ;
void countLetters ( char *string , int *&array , int &size )
{
    char *letter_array = new char ;
    int letter_array_index = 0 ;
    for ( int i = 0 ; string [i] != '\0' ; i++ )
    {
        int j = i - 1 ;
        int count = 0 ;
        for (  ; j >= 0 ; j-- )
        {
            if ( string[j] == string [i] )
            {
                count ++ ;
            }
        }
        if ( count == 0 )
        {
            letter_array [letter_array_index] = string [i] ;
            letter_array_index ++ ;
        }
    }
    int i = 0 ;
    size = 0 ;
    while ( letter_array [i] != '\0' )
    {
        size ++ ;
        i ++ ;
    }
    array = new int [size] ;
    for ( int i = 0 ; i < size ; i++ )
    {
        int count = 0 ;
        for (int j = 0 ; string [j] != '\0' ; j++ )
        {
            if ( letter_array [i] == string [j] )
            {
                count ++ ;
            }
        }
        array [i] = count ;
    }
    delete letter_array ;
}
/*int main ()
{
    char *sajid = (char*) "sajid is good boy" ;
    int *array ; int size ;
    countLetters ( sajid , array , size ) ;

}*/