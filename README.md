# EA-Forage
# Part One
Simulating a culinary career progression game. Includes class definitions and implementations for managing activities such as training, cooking competitions, and skill-building in a simulated environment. Developed in C++ to demonstrate OOP principles, virtual functions, and inheritance.

# Part Two
## Inventory System Refactor and Bug Fix

### Objective
Enhance the inventory management system by:
- Implementing a mechanism to completely remove items from the inventory when their quantity reaches zero.
- Refactoring and optimizing the existing codebase for better maintainability and efficiency.

### Implementation Details
1. **Complete Item Removal**:
   - Modified the `remove_item()` function to delete items from the inventory when their quantity reaches zero.
   - Used `std::vector` and iterators for dynamic and efficient item storage and removal.
2. **Optimized Data Structure**:
   - Replaced the fixed-size C-style array with `std::vector` to handle items dynamically.
   - Used `std::unique_ptr` for safe memory management.
3. **Code Cleanup**:
   - Modularized repetitive tasks (e.g., displaying item data) into helper functions.
   - Improved error handling for user input.

### Results/Outcome
- Improved memory safety with `std::unique_ptr`, eliminating manual memory management.
- Enhanced code readability and maintainability.
- Simplified inventory operations (adding, listing, and removing items) using `std::vector`.

### Reflection
This task helped me:
- Understand the benefits of modern C++ features like `std::vector` and `std::unique_ptr`.
- Practice refactoring legacy code while maintaining its functionality.
- Recognize the importance of designing code for future scalability and ease of debugging.
