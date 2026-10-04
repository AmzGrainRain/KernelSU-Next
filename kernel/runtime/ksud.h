#ifndef __KSU_H_KSUD
#define __KSU_H_KSUD

#include <linux/types.h>

#define KSUD_PATH "/data/adb/ksud"

void ksu_ksud_init();
void ksu_ksud_exit();

void ksu_stop_input_hook_runtime(void);

extern bool ksu_execveat_hook __read_mostly;

#ifndef KSU_KPROBES_HOOK
int ksu_handle_execve_ksud(
	const char __user *filename_user,
	const char __user *const __user *__argv);
#endif

#endif