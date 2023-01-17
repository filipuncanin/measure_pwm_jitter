#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2e712c61, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x45b62e8e, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b131b84, "__register_chrdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x499d16db, "gpiod_to_irq" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1341FEBA6A4A96A8A9C6E2A");
