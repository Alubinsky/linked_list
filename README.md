This is a personal project to create a linked list in C that can be accessed from other machines through this Git.

## Features

- **13 Operations**: Insert, delete, search, sort, and more
- **Memory Safe**: Proper allocation and deallocation of all nodes
- **Well Documented**: Comprehensive function documentation in header file
- **Interactive Menu**: User-friendly CLI for testing operations
- **Error Handling**: Graceful handling of edge cases (empty lists, NULL pointers)
- **Sorting**: The sort_list() function uses **Selection Sort** with O(n²) time complexity.
This is suitable for small to medium lists. For larger datasets, consider
implementing Merge Sort (O(n log n)) or Quick Sort.

## Project Structure
```
linked_list/
├── linked_list.h          # Header file with declarations
├── linked_list.c          # Implementation
├── main.c                 # Interactive menu program
├── USAGE_INSTRUCTIONS.md  # Detailed setup guide
└── README.md              # This file
```

## Available Functions

| Function | Purpose | Time Complexity |
|----------|---------|-----------------|
| `insert_at_head()` | Add value to beginning | O(1) |
| `insert_at_tail()` | Add value to end | O(n) |
| `delete_at_head()` | Remove from beginning | O(1) |
| `delete_at_tail()` | Remove from end | O(n) |
| `is_member()` | Search for value | O(n) |
| `count_matches()` | Count occurrences | O(n) |
| `length()` | Get list size | O(n) |
| `sort_list()` | Sort ascending (Selection Sort) | O(n²) |
| `delete_duplicates()` | Remove duplicates | O(n²) |
| `append_lists()` | Combine two lists | O(n) |
| `delete_list()` | Free all memory | O(n) |
| `print_list()` | Display all values | O(n) |

## System Requirements

- GCC compiler (or any C compiler)
- C Standard Library
- Linux, macOS, or Windows (with appropriate tools)

## Future Improvements

- Implement faster sorting algorithms (Merge Sort, Quick Sort)
- Add reverse list functionality
- Support for different data types (floats, strings, custom structs)
- Add unit tests
- Implement doubly-linked list variant

## License

This project is open source and available under the MIT License.

## Author

Created by [Adam Lubinsky]

## Contributing

Feel free to fork this repository and submit pull requests for improvements.


**To Run This Program On a Device Follow These Instructions**

Step 1:
Clone the reprository with the following code:
~~~
git clone https://github.com/Alubinsky/linked_list.git
cd linked_list
~~~

Step 2:
Compile the project:
~~~
gcc main.c linked_list.c -o linked_list
~~~

Step 3:
Run the program:
~~~
./linked_list
~~~

Step 4:
If you wish to only run the linked list seperatly then follow the code shown here:
~~~
gcc main.c linked_list.c -o linked_list
~~~

//You will then be given options on how to interact with the linked list you are creating. 

If you wish to use the linked list in a project that you are currently follow these instructions:

Step 1: 
clone the reprository:
~~~
git clone https://github.com/Alubinsky/linked_list.git
cd linked_list
~~~

Step 2:
Add the header file for the linked list in the main source file:
~~~
#include "linked_list.h"
~~~

Step 3:
Compile the project files:
~~~
gcc your_program.c linked_list.c -o your_program
~~~

EXAMPLE:
//This code will add three nodes with the values 5, 3 and 8 to a linked list. Then this list will be sorted, printed, and then finally deleted.

```
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linked_list.h"

int main(void) {
    Node *list = NULL;
    
    list = insert_at_tail(list, 5);
    list = insert_at_tail(list, 3);
    list = insert_at_tail(list, 8);
    
    list = sort_list(list);
    print_list(list);
    
    delete_list(list);
    return 0;
}
```
