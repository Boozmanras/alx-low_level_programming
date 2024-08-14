# Hash Tables Project

This project involves implementing a hash table data structure in C. It demonstrates key concepts such as hashing, collision handling, and basic hash table operations.

## Data Structures

### `hash_node_t`
A node in the hash table:
- `key`: Unique string key
- `value`: Associated value
- `next`: Pointer to the next node in the list

### `hash_table_t`
The hash table:
- `size`: Size of the array
- `array`: Array of pointers to hash nodes

## Tasks

1. **Create Hash Table**
   - Implement `hash_table_create` to initialize a hash table with a given size.

2. **DJB2 Hash Function**
   - Implement `hash_djb2` to generate hash values using the djb2 algorithm.

3. **Key Index**
   - Implement `key_index` to compute the index of a key in the hash table array using `hash_djb2`.

4. **Add Element**
   - Implement `hash_table_set` to add or update a key/value pair in the hash table.

5. **Retrieve Value**
   - Implement `hash_table_get` to retrieve the value associated with a given key.

6. **Print Hash Table**
   - Implement `hash_table_print` to display the hash table's contents.

7. **Delete Hash Table**
   - Implement `hash_table_delete` to free all allocated memory and delete the hash table.

## Requirements

- **Compiling**: Files should be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Code Style**: Follow Betty style guidelines. Use `betty-style.pl` and `betty-doc.pl` for checking.
- **Function Limits**: No more than 5 functions per file.
- **Global Variables**: Not allowed.
- **Header Files**: Include prototypes in `hash_tables.h` and use include guards.

## Repository

- **GitHub Repository**: [alx-low_level_programming](https://github.com/alx-low_level_programming)
- **Directory**: `0x1A-hash_tables`

## Testing

The provided code includes test files for each task, ensuring the correct implementation of hash table operations.

---

For more details, refer to the code and test files in the repository.

