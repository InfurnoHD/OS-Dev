#include "gdt.h"
#include "common.h"

// Define entry point in asm to prevent C++ mangling
extern "C"{
    #include "system.h"
    void kernel_main();
}

extern "C" void test_gdt();

void kernel_main()
{
   init_descriptor_tables();
   //write_string(15, "Hello world!");
   test_gdt();
}
