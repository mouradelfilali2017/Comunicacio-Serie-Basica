/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
** MOURAD EL FILALI                                                  10/01/2018  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

//********** Loop *****************************************************************
void loop()                 // run over and over again
{
  Serial.println("Hello world!");  
  delay(1000);
}

//********** Funcions *************************************************************
