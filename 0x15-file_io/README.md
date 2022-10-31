// 0x15. C - File I/O (Input & Output system calls in C)

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptor is integer that uniquely identifies an open file of the process.

File Descriptor table: File descriptor table is the collection of integer array indices that are file descriptors in which elements are pointers to file table entries. One unique file descriptors table is provided in operating system for each process.

File Table Entry: File table entries is a structure In-memory surrogate for an open file, which is created when process request to opens file and these entries maintains file position.

// READ MORE
https://en.wikipedia.org/wiki/File_descriptor