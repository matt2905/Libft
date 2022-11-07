#ifndef SEM_UNION_H
# define SEM_UNION_H

union semun {
	int				val;
	struct semi_ds	*buf;
	unsigned short	*array;
} arg;

#endif
