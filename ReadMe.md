![](ReadMe_Resources/logo_text.png)

- [**Description**](#description)
- [**Classes**](#classes)
  - [**TF\_String**](#tf_string)
    - [**Private member variables:**](#private-member-variables)
    - [**Constructors:**](#constructors)
    - [**Destructor:**](#destructor)
    - [**Overloaded operators:**](#overloaded-operators)
    - [**Methods:**](#methods)
  - [**TF\_Vector**](#tf_vector)
    - [**Private member variables:**](#private-member-variables-1)
    - [**Constructors:**](#constructors-1)
    - [**Destructor:**](#destructor-1)
    - [**Overloaded operators:**](#overloaded-operators-1)
    - [**Methods:**](#methods-1)
  - [**TF\_Customer**](#tf_customer)
    - [**Private member variables:**](#private-member-variables-2)
    - [**Constructors:**](#constructors-2)
    - [**Destructor:**](#destructor-2)
    - [**Overloaded operators:**](#overloaded-operators-2)
    - [**Methods:**](#methods-2)
  - [**TF\_Product**](#tf_product)
    - [**Private member variables:**](#private-member-variables-3)
    - [**Constructors:**](#constructors-3)
    - [**Destructor:**](#destructor-3)
    - [**Overloaded operators:**](#overloaded-operators-3)
    - [**Methods:**](#methods-3)
  - [**TF\_Order**](#tf_order)
    - [**Private member variables:**](#private-member-variables-4)
    - [**Constructors:**](#constructors-4)
    - [**Destructor:**](#destructor-4)
    - [**Overloaded operators:**](#overloaded-operators-4)
    - [**Methods:**](#methods-4)
  - [**Features**](#features)
- [**Task 1**](#task-1)
  - [**Classes**](#classes-1)
  - [**Methods**](#methods-5)
  - [**Input and Output**](#input-and-output)
  - [**Dynamic Allocation**](#dynamic-allocation)
  - [**Interactive Menu**](#interactive-menu)
---
## **Description**
**TechFlow** is an object-oriented program that simulates a basic online store that sells computer-related products. The program is written in C++ and follows the principle of encapsulation.

---

## **Classes**

---
### **TF_String**
- is used to represent and manipulate strings of characters.

#### **Private member variables:**

- **str** : type char*

#### **Constructors:**

- Default constructor.
    ``` c++
    TF_String();
    ```

- Constructor that takes a const char* as input.
    ``` c++
    TF_String(const char *s);
    ```
- Copy constructor that takes another TF_String object as input.
    ``` c++
    TF_String(const TF_String &other);
    ```
- Move Constructor.
    ``` c++
    TF_String(TF_String &&other) noexcept;
    ```

#### **Destructor:**

- Frees any dynamically allocated memory when an object of the class is destroyed.
    ``` c++
   ~TF_String();
    ```

#### **Overloaded operators:**

- The assignment operator, operator=, which assigns one TF_String object to another.
    ``` c++
    void operator=(TF_String &op2);
    ```
- The stream input operator, operator>>, which allows input from a stream into a TF_String object.
    ``` c++
    friend std::istream &operator>>(std::istream &in, TF_String &s);
    ```
- The stream output operator, operator<<, which allows output of a TF_String object to a stream.
    ``` c++
    friend std::ostream &operator<<(std::ostream &out, const TF_String &s);
    ```
#### **Methods:**

- Method that takes a const char* input and returns the length of the string.
    ``` c++
    int str_length(const char *s);
    ```
- Method that takes two character array inputs and copies the contents of the second array into the first.
    ``` c++
    void str_copy(char *dest, const char *src);
    ```

---
### **TF_Vector**
- is a template class that provides a dynamic array data structure for storing a sequence of elements of type T.

#### **Private member variables:**

- **size** : type
- **data** : type

#### **Constructors:**

 - Default constructor.
    ``` c++
    TF_Vector();
    ``` 
 - Constructor that takes a size and an element of type T and initializes the data with the element. 
    ``` c++
    TF_Vector(int ksize, T elem);
    ``` 
 - Copy constructor that creates a new instance of the vector with the same size and elements as another vector.
    ``` c++
    TF_Vector(const TF_Vector<T> &other);
    ``` 
- Move Constructor.
    ``` c++
    TF_Vector(TF_Vector &&other) noexcept;
    ```
  
#### **Destructor:**
- Frees any dynamically allocated memory when an object of the class is destroyed.
    ``` c++
    ~TF_Vector();
    ``` 
#### **Overloaded operators:**
- The assignment operator, operator=, which assigns one TF_Vector object to another.
    ``` c++
  void operator=(const TF_Vector<T> &other);
    ```
- The stream input operator, operator>>, which allows input from a stream into a TF_Vector< type >.
    ``` c++
  friend std::istream &operator>>(std::istream &in, TF_Vector<T> &vector);
    ``` 
- The stream output operator, operator<<, which allows output of a TF_Vector < type > object to a stream.
    ``` c++
    friend std::ostream &operator<<(std::ostream &out, const TF_Vector<T> &vector);
    ``` 
- The subscript operator, operator[].
    ``` c++
    T &operator[](int index);
    ``` 

#### **Methods:**
- Method that is equivalent to push_back in the standard vector container.
    ``` c++
    void pushback(T elem);
    ``` 
- Getter for size.
    ``` c++
    int getSize();
    ``` 

---
### **TF_Customer**
- is a class that provides personal information about the customer.

#### **Private member variables:**

- **first_name** : type TF_String
- **last_name** : type TF_String
- **address** : type TF_String
- **email** : type TF_String
- **buget** : type double

#### **Constructors:**

 - Default constructor : initializes all member variables to empty strings and budget to 0.
    ``` c++
    TF_Customer();
    ``` 
 - Parameterized constructor that takes in the customer's first name, last name, address, email, and budget as arguments.
    ``` c++
    TF_Customer(TF_String &first_name, TF_String &last_name, TF_String &address, TF_String &email, double budget);
    ``` 
 - Copy constructor that creates a new customer object with the same values as an existing customer object.
    ``` c++
    TF_Customer(TF_Customer &other);
    ``` 
  
#### **Destructor:**
- Frees any dynamically allocated memory when an object of the class is destroyed. (trivial)
    ``` c++
    ~TF_Customer();
    ``` 
  
#### **Overloaded operators:**
- The stream input operator, operator>>, which allows input from a stream into an object of class Customer.
    ``` c++
    friend std::istream &operator>>(std::istream &in, TF_Customer &object);
    ``` 

- The stream output operator, operator<<, which allows output of an object of class Customer.
    ``` c++
    friend std::ostream &operator<<(std::ostream &out, const TF_Customer &object);
    ``` 

#### **Methods:**
- Getter for price.
    ``` c++
    double getPrice();
    ``` 
  
---
### **TF_Product**
- is a class that provides personal information about the product.

#### **Private member variables:**

- **name** : type TF_String
- **type** : type TF_String
- **price** : type double

#### **Constructors:**

 - Default constructor : initializes name and type to empty strings and price to 0.
    ``` c++
    TF_Product();
    ``` 
 - Parameterized constructor that takes in the products's name, type, price as arguments.
    ``` c++
    TF_Product(TF_String &name, TF_String &type, double price);
    ``` 
 - Copy constructor that creates a new product object with the same values as an existing product object.
    ``` c++
    TF_Product(TF_Product &object);
    ``` 
  
#### **Destructor:**
- Frees any dynamically allocated memory when an object of the class is destroyed. (trivial)
    ``` c++
    ~TF_Product();
    ``` 
  
#### **Overloaded operators:**
- The stream input operator, operator>>, which allows input from a stream into an object of class Product.
    ``` c++
    friend std::istream &operator>>(std::istream &in, TF_Product &object);
    ``` 

- The stream output operator, operator<<, which allows output of an object of class Product.
    ``` c++
    friend std::ostream &operator<<(std::ostream &out, const TF_Product &object);
    ``` 
#### **Methods:**
- Method that applies a discount to the price of an object of the TF_Product class by a percentage specified as an integer.
    ``` c++
    void discount(int percentage);
    ``` 
- Method that applies a discount to the price of an object of the TF_Product class by a percentage specified as a double.
    ``` c++
    void discount(double percentage);
    ``` 
- Getter for price.
    ``` c++
    double getPrice();
    ``` 
---
### **TF_Order**
- is a class that provides information about the order.

#### **Private member variables:**

- **customer** : type TF_Customer
- **products** : type TF_Vector< TF_Product >
- **date** : type TF_String

#### **Constructors:**

 - Default constructor.
    ``` c++
    TF_Order();
    ``` 
 - Parameterized constructor that takes in the orders's customer, products, date as arguments.
    ``` c++
    TF_Order(TF_Customer customer, TF_Vector<TF_Product> products, TF_String date);
    ``` 
 - Copy constructor that creates a new product object with the same values as an existing product object.
    ``` c++
    TF_Order(TF_Order &other);
    ``` 
  
#### **Destructor:**
- Frees any dynamically allocated memory when an object of the class is destroyed. (trivial)
    ``` c++
    ~TF_Order();
    ``` 

#### **Overloaded operators:**
- The stream output operator, operator<<, which allows output of an object of class Order.
    ``` c++
    friend std::ostream &operator<<(std::ostream &out, const TF_Order &object);
    ``` 

#### **Methods:**
- Method that returns the total price of all products.
    ``` c++
    double orderTotal();
    ``` 
- Method that returns the total price after charge.
    ``` c++
    double addCharge(double charge);
    ```  
- Method that returns the remaining budget.
    ``` c++
    double verifyBudget(double value);
    ```  
---
### **Features**
TBA

---
## **Task 1**
### **Classes**
- [X] You must respect the principle of encapsulation.
- [X] Define at least 5 classes.
- [X] All classes will have constructors.
- [X] At least 3 classes must be correlated by composition.

### **Methods**
- [X] At least 3 methods that operate on class member data.
- [X] At least one method will be overloaded.

### **Input and Output**
- [X] For at least one class overload the operator << and operator >>.

### **Dynamic Allocation**
Both TF_String and TF_Vector use Dynamic Allocation. 
- [X] At least one class must dynamically allocate memory.
- [X] At least one class that dynamically allocates memory will have a copy constructor and an operator = implemented.
- [X] All dynamically allocated memory must be properly deallocated.
- [X] At least one class must have a non-trivial destructor.

### **Interactive Menu**
- [X] Read from keyboard and create at least 3 types of objects among those defined.
- [X] Display these objects, after they have been read by the application.
- [X] Call a method on them.
- [X] Implement the move constructor and overload the move operator = for at least one class that manages dynamically allocated memory.

---