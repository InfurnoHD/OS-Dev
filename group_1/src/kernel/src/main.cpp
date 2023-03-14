extern "C"{
    #include "system.h"
    #include "gdt.h"
    #include "common.h"
    void kernel_main();
}

extern "C" void test_gdt();

void kernel_main()
{
    clear_screen();
    init_descriptor_tables();
   
    if (is_gdt_implemented)
    {
        printk("Hello, %s! The answer \n\n is %d.", "world", 42);
        printk("%d", 696969420);
    }
}
