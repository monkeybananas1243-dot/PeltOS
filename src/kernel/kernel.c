#include <io.h>
#include <get_char.h>
#include <keyboard.h>
#include <vga.h>
#include <delay.h>

void main() 
{
    clear_screen();
    
    printk("\n version 1.0 stable\n");
    printk("----------------------------------------------");
    printk("\n-># ");
    while(1) {
        delay(100);
        check_scancode();
        update_cursor(cursor_x, cursor_y);
    }
    printk("\n[/]-># ");
    while(1) {check_scancode(); update_cursor(cursor_x, cursor_y);}
}
