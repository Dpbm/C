#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DPM");

int init_module(void){
  pr_info("Hello, world!\n");
  return 0;
}

void hello_exit(void){
  pr_info("GoodBye!");
}


