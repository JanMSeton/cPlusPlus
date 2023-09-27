1. It is appropiate to use an int-type parameter when a function uses the parameter only for simple purposes.
In the code example this is illustrated because the function does a simple task:

int addIntAndDouble (int number1, double number 2)
{
    return number1+ (int)number2;
}

2. It is appropiate to use a std::string-type parameter when a function uses a parameter for more advanced purposes.
In the code example this is illustrated because adding one string to another is advanced.

std::string concetenateStrings (std::string string1 + std::string string2)
{
    return string1 + string2;
}

3. It is appropiate to use a const reference to an int-type parameter when
In the code example this is illustrated because 


4. It is appropiate to use a const reference to an std::string-type parameter when
In the code example this is illustrated because 

5. It is appropiate to use a non-const reference to an int-type parameter when
In the code example this is illustrated because 

6. It is appropiate to use a non-const reference to an std::string-type parameter when
In the code example this is illustrated because 

7. It is appropiate to use a const rvalue-reference to an int-type parameter when
In the code example this is illustrated because 

8. It is appropiate to use a const rvalue-reference to an std::string-type parameter when
In the code example this is illustrated because

9. It is appropiate to use an rvalue-reference to an int-type parameter when
In the code example this is illustrated because 

10.It is appropiate to use an rvalue-reference to an std::string-type parameter when
In th e code example this is illustrated because 

11. It is appropiate to return an int-type value when
In the code example this is illustrated because 

12. It is appropiate to return a std::string-type value when
In the code example this is illustrated because 

13. It is appropiate to return a const reference int-type value when
In the code example this is illustrated because 

14. It is appropiate to return a const reference std::string-type value when
In the code example this is illustrated because 

15. It is appropiate to return a non-const reference int-type value when
In the code example this is illustrated because 

16. It is appropiate to return a non-const reference std::string-type value when
In the code example this is illustrated because 

17. It is appropiate to return a const rvalue-reference int-type value when
In the code example this is illustrated because 

18. It is appropiate to return a const rvalue-reference std::string-type value when
In the code example this is illustrated because 

19. It is appropiate to return a rvalue-reference int-type value when
In the code example this is illustrated because 

20. It is appropiate to return a rvalue-reference std::string-type value when
In the code example this is illustrated because 