#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>

int simple_init(void)
{
	printk(KERN_INFO "Loading module\n");
	return 0;
}

void simple_exit()
{
	printk(KERN_INFO "Removing Module\n");
}

struct birthday{
	int day;
	int month;
	int year;
	struct list_head list;
}

static LIST_HEAD(birthday_list);

struct birthday * person;
birthday_list(){
	person = kmalloc(sizeof(*person), GFP_KERNEL);
	person->day = 2;
	person->month = 8;
	person->year = 1995;
}

list_add_tail(&person->list, &birthday_list)

struct birthday *ptr;
list_for_each_entry(ptr, &birthday_list, ptr){
	
}



/*loop prepares five elements for struct*/
int elements(){
	for (int = 1; i < 5; i++){
		struct birthday_list * person = (struct birthday_list*)malloc(sizeof(struct birthday_list));
		/*delete contents of the linked list*/
		list_del(struct list_head * element)
		kfree(ptr);
		
	}
}


module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
