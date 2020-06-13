/*  kswamp.c – Our First Driver code */

#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int __init  kswamp_init(void) /* Constructor */
{
    printk(KERN_INFO "Namaskar:  kswamp registered");

    return 0;
}

static void __exit  kswamp_exit(void) /* Destructor */
{
    printk(KERN_INFO "Alvida:  kswamp unregistered");
}

module_init( kswamp_init);
module_exit( kswamp_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Donkey");
MODULE_DESCRIPTION("NO ENTRY");