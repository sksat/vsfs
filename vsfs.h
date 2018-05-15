#ifndef VSFS_H_
#define VSFS_H_

// block
#define BLOCK_SIZ		4096	// 4KB
#define BLOCK_NUM		64	// 0-63

// one block region
#define BLOCK_SUPER		0
#define BLOCK_I_BITMAP		1
#define BLOCK_D_BITMAP		2

// inode
#define INODE_START_ADDR	((BLOCK_D_BITMAP + 1) * BLOCK_SIZ)
#define INODE_SIZ		256
#define INODE_NUM		80

#define DATA_START_ADDR		(INODE_START_ADDR + (INODE_SIZ * INODE_NUM))
#define DATA_NUM		56

#endif
