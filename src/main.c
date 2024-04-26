void main(void)
{
     while(1)
     {
         printk("Hello World! %s\n", CONFIG_BOARD);
         k_sleep(K_SECONDS(1));
     }
}