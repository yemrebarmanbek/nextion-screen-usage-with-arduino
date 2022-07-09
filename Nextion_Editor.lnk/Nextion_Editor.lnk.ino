
#include "Nextion.h"


//4 cikolata  
//5 kahve
//6 süt
//7 şeker

int sayac=0;

NexHotspot b0 = NexHotspot(1,2,"b0");
NexHotspot b1 = NexHotspot(1,3,"b1");
NexHotspot b2 = NexHotspot(1,4,"b2");
NexHotspot b3 = NexHotspot(1,5,"b3");
NexHotspot b4 = NexHotspot(2,3,"b4");
NexHotspot b5 = NexHotspot(2,4,"b5");
NexHotspot b6 = NexHotspot(2,5,"b6");





NexTouch *nex_listen_list[]=
{ 
  &b0,
  &b1,
  &b2,
  &b3,
  &b4,
  &b5,
  &b6,
 
  NULL
  };


   void b0PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(4,HIGH);
      delay(3000);
      digitalWrite(4,LOW);
      break;
    }
    
  }



   void b1PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(5,HIGH);
      delay(3000);
      digitalWrite(5,LOW);
      break;
    }
    
  }


     void b2PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(5,HIGH);
      delay(3000);
      digitalWrite(5,LOW);
      break;
    }
    
  }

  

      void b3PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(5,HIGH);
      delay(3000);
      digitalWrite(5,LOW);

      digitalWrite(6,HIGH);
      delay(2000);
      digitalWrite(6,LOW);

      
      break;
    }
    
  }


  
      void b4PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(7,HIGH);
      delay(1000);
      digitalWrite(7,LOW);
      break;
    }
    
  }




    void b5PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(7,HIGH);
      delay(2000);
      digitalWrite(7,LOW);
      break;
    }
    
  }



    
    void b6PopCallback(void *ptr)
{
    for(;sayac<1;sayac++) /*bir saniyede kaç kere dondüğünü belirtir*/
  {   
      delay(100);
      digitalWrite(7,HIGH);
      delay(3000);
      digitalWrite(7,LOW);
      break;
    }
    
  }





  



 


void setup() {
 
 nexInit();
  Serial.begin(9600);
 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  
  
  b0.attachPop(b0PopCallback, &b0);
  b1.attachPop(b1PopCallback, &b1);
  b2.attachPop(b2PopCallback, &b2);
  b3.attachPop(b3PopCallback, &b3);
  b4.attachPop(b4PopCallback, &b4);
  b5.attachPop(b5PopCallback, &b5);
  b6.attachPop(b6PopCallback, &b6);

}

void loop() {
   nexLoop(nex_listen_list);
  


}
