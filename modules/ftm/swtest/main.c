#include <stdio.h>
#include <string.h>
#include "pp-printf.h"
#include "mini_sdb.h"
#include "sdb_arg.h"
#include "uart.h"


char buffer[12];
volatile char color;
unsigned int cpuID, cpuMAX;
   char buffer[12];
volatile unsigned long long timestamp, timestamp_old;

const unsigned int c_period = 375000000/1;


void init()
{

   discoverPeriphery();
   uart_init_hw();
   uart_write_string("\nDebug Port\n");

}

int main(void) {


   int j;

   init();

   pp_printf("Hello World!\n");
   //mprintf("PrioQC 0x%8x\n", pFpqCtrl);
   //mprintf("PrioQD 0x%8x\n", pFpqData);
   //mprintf("EBM 0x%8x\n", pEbm);
   //mprintf("ECA 0x%8x\n", pEca);
   //mprintf("Time: 0x%8x%8x\n", *pCpuSysTime, *(pCpuSysTime+1));
   // showFpqStatus();

   for (j = 0; j < 128; ++j) pp_printf("SBD RECORDDDDDDDDDDDDDDDD %x \n",r_sdb_add());
     //insertFpqEntry();
   //showFpqStatus();

   for (j = 0; j < 3500000; ++j) {asm("# noop");}


   while (1) {
  }

  return 0;

}
