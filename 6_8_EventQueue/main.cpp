#include "mbed.h"
using namespace std::chrono;

int main()
{
   // creates a queue with the default size
   EventQueue queue;

   // printf will be put into queue and execute immediately
   queue.call(printf, "called immediately\n");
   // Replace Timeout
   queue.call_in(2s, printf, "called in 2 seconds\n");
   // Replace Ticker
   queue.call_every(1s, printf, "called every 1 seconds\n");

   // events are executed by the dispatch method
   queue.dispatch();
}