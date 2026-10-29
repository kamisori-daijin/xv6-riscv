#define NPROC        4                // maximum number of processes
#define NCPU         1                // maximum number of CPUs 
#define NOFILE      10                // open files per process 
#define NFILE       20                // open files per system 
#define NINODE      10                // maximum number of active i-nodes 
#define NDEV        10                // maximum major device number
#define ROOTDEV     1                 // device number of file system root disk
#define MAXARG      32                // max exec arguments
#define MAXOPBLOCKS  3                // max # of blocks any FS op writes 
#define LOGBLOCKS   (MAXOPBLOCKS * 3) // max data blocks in on-disk log
#define NBUF         8               // size of disk block cache 
#define FSSIZE      1000              // size of file system in blocks 
#define MAXPATH     64                // maximum file path name 
#define USERSTACK    1                // user stack pages
