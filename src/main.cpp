#include <mbed.h>

#include "manchester.h"
#include "physic.h"
#include "link.h"
#include "transport.h"

int main() 
{

  DigitalOut led(LED1);
  start_write();
  
  while(1) 
  {
    
    send_messages("ABC", 3);
    led = !led;
    wait(10);
  }
}