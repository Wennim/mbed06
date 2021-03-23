#include "mbed.h"
using namespace std::chrono;

Ticker flipper;
//DigitalOut led1(LED1);
DigitalOut led4(LED3);

void flip()
{
   led4 = !led4;
}

int main()
{
   led4 = 1;
   flipper.attach(&flip, 500ms); // the address of the function to be attached (flip) and the interval (2 seconds)

//    // spin in a main loop. flipper will interrupt it to call flip
//    while (1)
//    {
//       led1 = !led1;
//       ThisThread::sleep_for(200ms);
//    }
}