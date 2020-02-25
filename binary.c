

#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#include <stdlib.h>


#define	p1	1
#define	p2	3
#define	p3	4
#define	p4  24

// 1  3   4    11

int main ()
{

  wiringPiSetup () ;
  pinMode (p1, INPUT) ;
  pinMode (p2, INPUT) ;
  pinMode (p3, INPUT) ;
  pinMode (p4, INPUT) ;
  
  int no;
    
 no = (digitalRead(p1)<<3)+(digitalRead(p2)<<2)+(digitalRead(p3)<<1)+digitalRead(p4);   
  
  
  printf(" %d ",no);  
  return 0 ;
}
