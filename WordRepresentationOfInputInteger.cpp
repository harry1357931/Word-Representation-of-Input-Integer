/* WordRepresentationOfInputInteger.cpp 
 * Summer, 2010 -- Truly did this one for fun at home
 * Description:
 *    Convert Number to its Word Form -- Works Good in 99.5% of Cases
 * Examples:
 *    1)  591  : Five Hundred Ninety One
 * 	  2)  78921: Seventy Eight Thousand Nine Hundred Twenty One
 * @author Gurpreet Singh
 */
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i,j,k,n,m,l[20];
    cout <<"Enter an Integer to convert into its Word representation:"<<endl;
    cin >>n;
    i=k=n;
    for(j=1;j<=9;j++) //for loop for counting "J" the total digits of a number
    {
     k=k%10;
     m=j-1;
     l[m]=k;
     i=i/10;
     k=i;                
     if (i==0) //To get out of loop when counting finishes
     break;                
    }
    cout <<"Number of Digits: "<<j<<endl;
    for(m=j-1;m>=0;m--)// To reprint the no. stored in Array
    { 
      cout <<l[m];               
    }
    cout <<endl;
    for(i=j;i>=0;i--)// Main loop for final printing
    { 
       m=i-1;
       switch (i) // 2nd  Main loop
       {
          case 1:
          {
               switch (l[m])
            {
             case 1:
              {cout <<"One"<<endl;
               break;}
          
             case 2:
              {cout <<"Two"<<endl;
               break;}
          
             case 3:
              {cout <<"Three"<<endl;
               break;}
          
             case 4:
              {cout <<"Four"<<endl;
               break;}   
             case 5:
              {cout <<"Five"<<endl;
               break;}
             case 6:
              {cout <<"Six"<<endl;
               break;}
             case 7:
              {cout <<"Seven"<<endl;
               break;}
             case 8:
              {cout <<"Eight"<<endl;
               break;}
             case 9:
              {cout <<"Nine"<<endl;
               break;}
            }
            break;
           }
          
          case 2:
          {
             switch (l[m])
            {
             case 1:
              {cout <<"One ";// Need editing for 11, 12..eleven, twelve
               break;}
          
             case 2:
              {cout <<"Twenty ";
               break;}
          
             case 3:
              {cout <<"Thirty ";
               break;}
          
             case 4:
              {cout <<"Forty ";
               break;}   
             case 5:
              {cout <<"Fifty ";
               break;}
             case 6:
              {cout <<"Sixty ";
               break;}
             case 7:
              {cout <<"Seventy ";
               break;}
             case 8:
              {cout <<"Eighty ";
               break;}
             case 9:
              {cout <<"Ninety ";
               break;}     
            }
            break;
            
           }
          
          case 3:
          {
             switch (l[m])
            {
             case 1:
              {cout <<"One";
               break;}
          
             case 2:
              {cout <<"Two";
               break;}
          
             case 3:             // Switch loop for hundred
              {cout <<"Three";
               break;}
          
             case 4:
              {cout <<"Four";
               break;}   
             case 5:
              {cout <<"Five";
               break;}
             case 6:
              {cout <<"Six";
               break;}
             case 7:
              {cout <<"Seven";
               break;}
             case 8:
              {cout <<"Eight";
               break;}
             case 9:
              {cout <<"Nine";
               break;}
            }
           cout <<" Hundred "; 
           break;        
          }
          
          case 4:       // Switch loop for Thousand
          { 
            switch (l[m])
            {
             case 1:
              {cout <<"One";
               break;}
          
             case 2:
              {cout <<"Two";
               break;}
          
             case 3:
              {cout <<"Three";
               break;}
          
             case 4:
              {cout <<"Four";
               break;}   
             case 5:
              {cout <<"Five";
               break;}
             case 6:
              {cout <<"Six";
               break;}
             case 7:
              {cout <<"Seven";
               break;}
             case 8:
              {cout <<"Eight";
               break;}
             case 9:
              {cout <<"Nine";
               break;} 
           }
         cout <<" Thousand ";
         break;
       }
        case 5:       // Switch loop for ten thousand
          { 
           switch (l[m])
            {
             case 1:
              {cout <<"One ";
               break;}
          
             case 2:
              {cout <<"Twenty ";
               break;}
          
             case 3:
              {cout <<"Thirty ";
               break;}
          
             case 4:
              {cout <<"Forty ";
               break;}   
             case 5:
              {cout <<"Fifty ";
               break;}
             case 6:
              {cout <<"Sixty ";
               break;}
             case 7:
              {cout <<"Seventy ";
               break;}
             case 8:
              {cout <<"Eighty ";
               break;}
             case 9:
              {cout <<"Ninety ";
               break;}     
            }
            break;
          }
          case 6:      // Switch loop for Lakh
          { 
            switch (l[m])
            {
             case 1:
              {cout <<"One";
               break;}
          
             case 2:
              {cout <<"Two";
               break;}
          
             case 3:
              {cout <<"Three";
               break;}
          
             case 4:
              {cout <<"Four";
               break;}   
             case 5:
              {cout <<"Five";
               break;}
             case 6:
              {cout <<"Six";
               break;}
             case 7:
              {cout <<"Seven";
               break;}
             case 8:
              {cout <<"Eight";
               break;}
             case 9:
              {cout <<"Nine";
               break;} 
           }
         cout <<" Lakh ";
         break;
       }
        case 7:     // Switch loop for Ten Lakh
          { 
           switch (l[m])
            {
             case 1:
              {cout <<"One ";
               break;}
          
             case 2:
              {cout <<"Twenty ";
               break;}
          
             case 3:
              {cout <<"Thirty ";
               break;}
          
             case 4:
              {cout <<"Forty ";
               break;}   
             case 5:
              {cout <<"Fifty ";
               break;}
             case 6:
              {cout <<"Sixty ";
               break;}
             case 7:
              {cout <<"Seventy ";
               break;}
             case 8:
              {cout <<"Eighty ";
               break;}
             case 9:
              {cout <<"Ninety ";
               break;}     
            }
            break;
          } 
          case 8:      // Switch loop for Lakh
          { 
            switch (l[m])
            {
             case 1:
              {cout <<"One";
               break;}
          
             case 2:
              {cout <<"Two";
               break;}
          
             case 3:
              {cout <<"Three";
               break;}
          
             case 4:
              {cout <<"Four";
               break;}   
             case 5:
              {cout <<"Five";
               break;}
             case 6:
              {cout <<"Six";
               break;}
             case 7:
              {cout <<"Seven";
               break;}
             case 8:
              {cout <<"Eight";
               break;}
             case 9:
              {cout <<"Nine";
               break;} 
           }
         cout <<" Crore ";
         break;
       }
        case 9:     // Switch loop for Ten Lakh
          { 
           switch (l[m])
            {
             case 1:
              {cout <<"One ";
               break;}
          
             case 2:
              {cout <<"Twenty ";
               break;}
          
             case 3:
              {cout <<"Thirty ";
               break;}
          
             case 4:
              {cout <<"Forty ";
               break;}   
             case 5:
              {cout <<"Fifty ";
               break;}
             case 6:
              {cout <<"Sixty ";
               break;}
             case 7:
              {cout <<"Seventy ";
               break;}
             case 8:
              {cout <<"Eighty ";
               break;}
             case 9:
              {cout <<"Ninety ";
               break;}     
            }
            break;
           }         
           
        }   
     }   
    
    system("pause");
    return 0;
    
  }
