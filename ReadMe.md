![](ReadMe_Resources/logo_text.png)

- [**Description**](#description)
- [**Classes**](#classes)
  - [**TF\_String**](#tf_string)
  - [**TF\_Vector**](#tf_vector)
  - [**Features**](#features)
- [**Task 1**](#task-1)
  - [**Classes**](#classes-1)
  - [**Methods**](#methods)
  - [**Input and Output**](#input-and-output)
  - [**Dynamic Allocation**](#dynamic-allocation)
  - [**Interactive Menu**](#interactive-menu)
---
## **Description**
TechFlow is a object-oriented program that simulates a basic online store that sells computer-related products. The program is written in C++ and follows the principle of encapsulation.

---

## **Classes**

---
### **TF_String**
- is used to represent and manipulate strings of characters.

**Private member variables:**

- Pointer to a character array char* str, which will hold the string.

**Constructors:**

- Default constructor.

- Constructor that takes a const char* as input.

- Copy constructor that takes another TF_String object as input.

**Destructor:**

- Frees any dynamically allocated memory when an object of the class is destroyed.

**Overloaded operators:**

- The assignment operator, operator=, which assigns one TF_String object to another.

- The stream input operator, operator>>, which allows input from a stream into a TF_String object.

- The stream output operator, operator<<, which allows output of a TF_String object to a stream.

**Methods:**

- str_length() : takes a const char* input and returns the length of the string.

- str_copy() : takes two character array inputs and copies the contents of the second array into the first.

---
### **TF_Vector**
- is a template class that provides a dynamic array data structure for storing a sequence of elements of type T.

**Private member variables:**

- size : stores the size of the vector.
- data : pointer to the array of elements of type T.

**Constructors:**

 - Default constructor. 
 - Constructor that takes a size and an element of type T and initializes the data with the element. 
 - Copy constructor that creates a new instance of the vector with the same size and elements as another vector.
  
**Destructor:**
- Frees any dynamically allocated memory when an object of the class is destroyed.
  
**Overloaded operators:**
- The stream input operator, operator>>, which allows input from a stream into a TF_Vector< type >.

- The stream output operator, operator<<, which allows output of a TF_Vector < type > object to a stream.

**Methods:**
- pushback() : is equivalent to push_back in the standard vector container.

---
### **Features**
TBA

---
## **Task 1**
### **Classes**
- [X] You must respect the principle of encapsulation.
- [ ] Define at least 5 classes.
- [ ] All classes will have constructors.
- [ ] At least 3 classes must be correlated by composition.

### **Methods**
- [ ] At least 3 methods that operate on class member data.
- [ ] At least one method will be overloaded.

### **Input and Output**
- [ ] For at least one class overload the operator << and operator >>.

### **Dynamic Allocation**
Both TF_String and TF_Vector use Dynamic Allocation. 
- [X] At least one class must dynamically allocate memory.
- [X] At least one class that dynamically allocates memory will have a copy constructor and an operator = implemented.
- [X] All dynamically allocated memory must be properly deallocated.
- [X] At least one class must have a non-trivial destructor.

### **Interactive Menu**
- [ ] Read from keyboard and create at least 3 types of objects among those defined.
- [ ] Display these objects, after they have been read by the application.
- [ ] Call a method on them.
- [ ] Implement the move constructor and overload the move operator = for at least one class that manages dynamically allocated memory.

---