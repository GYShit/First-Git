# include<linux/module.h>
# include<linux/kernel.h>
# include<linux/init.h>

static int __init gys_init(void)
{
	printk("<1>hello, world! from kernel space...\n");
	return 0;
}

static void __exit gys_exit(void)
{
	printk("<1>Goodbye, world! from kernel space...\n");
}

module_init(gys_init);
module_exit(gys_exit);

MODULE_LICENSE("GPL");

