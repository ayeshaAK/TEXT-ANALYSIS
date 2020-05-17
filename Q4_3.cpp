
//#include <iostream>
//using namespace std;
void countingUniqueWords( char *string , char **&uwords , int *&array , int &size )
{
    int uword_array_size = 1 ;
    for ( int i = 0 ; string [i] != '\0' ; i++ )
    {
        if ( string [i] == ' ' )
        {
            uword_array_size ++ ;
        }
    }
    array = new int [uword_array_size];
    uwords = new char* [size] ;
    for (int i = 0 ; i < size ; i++ )
    {
        uwords [i] = new char [20] ;
    }
    char *temp_store = new char [20];
    int temp_index = 0;
    int uword_index = 0 ;
    for ( int i = 0 ; string [i] != '\0'; i++ )
    {
        if ( string [i] == ' ')
        {
            for ( int j = 0 ; j < uword_index ; j++ )
            {
                if ( uwords [j] == temp_store )
                {
                    array [j] += 1 ;
                    goto label;
                }
            }
            uwords [uword_index] = temp_store ;
            label:
            array[uword_index] += 1 ;
            uword_index ++ ;
            for (int i = 0 ; i < 20 ; i++ )
            {
            	temp_store [i] = '\0' ;
            }

            temp_index = 0 ;
        }
        else
        {
            temp_store[temp_index] = string [i] ;
            temp_index ++ ;
        }
    }
    size = uword_index ;
}
/*
int main() {
	char **s2;
	char *string =(char*) "sajid is good boy in sajid is boy" ;
	int size ;
	int *array ;
	countingUniqueWords(string , s2 , array , size);
	for (int i = 0 ; i < 10 ;i++)
	{
		cout << s2 [i] << endl;
		cout << array[i] << endl;
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
*/