/*Fecha:1/02/2022
Autor:Francisco jose rivera gonzalez
Materia:Computacion apralela y distrbuida
Tema:benchmark
*/

/*declarar interfaces*/
#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZEBITES(X) sizeof(X) * 8

using namespace std;

main(){
	cout <<"============================================================================"<<(endl);
	cout <<"|     Type        |    Meaning    |     Bytes    |      bites     |"<<(endl);
	cout <<"============================================================================"<<(endl);
	cout <<"|     bool        |    Boolean                 |"<<sizeof(bool)<<"|"<<SIZEBITES(bool)<<(endl);
	cout <<"|     char        |    Character               |"<<sizeof(char)<<"|"<<SIZEBITES(char)<<(endl);
	cout <<"|     wchar_t     |  Wide Character            |"<<sizeof(wchar_t)<<"|"<<SIZEBITES(wchar_t)<<(endl);
	cout <<"|     char16_t    |   Unicode Character        |"<<sizeof(char16_t)<<"|"<<SIZEBITES(char16_t)<<(endl);
	cout <<"|     char32_t    |    Unicode Character       |"<<sizeof( char32_t)<<"|"<<SIZEBITES( char32_t)<<(endl);
	cout <<"|     short       |    Character               |"<<sizeof(short)<<"|"<<SIZEBITES(short)<<(endl);
	cout <<"|     int         |    Integer                 |"<<sizeof(int )<<"|"<<SIZEBITES(int )<<(endl);
    cout <<"|     long        |    Long Integer                 |"<<sizeof(long)<<"|"<<SIZEBITES(long )<<(endl);
    cout <<"|     long  long  |    Long Long Integer                 |"<<sizeof(long)<<"|"<<SIZEBITES(long )<<(endl);
    cout <<"|     float       |   Single Precision Floating point                |"<<sizeof(long)<<"|"<<SIZEBITES(long )<<(endl);
    cout <<"|     double      |    Single Precision Floating pointr                 |"<<sizeof(long)<<"|"<<SIZEBITES(long )<<(endl);
    cout <<"|     long double |    Single Precision Floating point              |"<<sizeof(long)<<"|"<<SIZEBITES(long )<<(endl);
	
}
