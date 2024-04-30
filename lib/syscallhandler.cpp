#include <circle/syscallhandler.h>
#include <circle/logger.h>
#include <circle/sched/scheduler.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>

int system_time = 0;

int SyscallHandler(int arg1, int arg2, int arg3, int arg4) {
	register long syscall_no asm ("r7");
	LOGMODULE("SyscallHandler");
	int val_to_ret = 0;

	switch(syscall_no) {
		case 0: {	// gettime system call
			val_to_ret = system_time;
			system_time++;
			break;
		}
		case 1: {	// get_task_name system call

		}
		case 2: {	// print system call (note arg1 contains the pointer to the character string to print)
			
		}
		case 3: {	// sleep system call (note arg1 contains the integer representing the seconds to sleep)

		}
		case 4: {	// exit system call
			
		}
		default: {
			LOGERR("System call number not recognized");
			val_to_ret = -1;
		}
	}

	return val_to_ret;
}
