# C-library learning

- Compile c program:
```c
    gcc <file_path> -o <executable_file_name>
```

- Convert c program to assembly language:

```c
    gcc -S <file_path> -o <executable_file_name>
    
    gcc -std=c11 kickStart.c -o ks
```

- Static Pointers in Action:

<table border = "1px" align="center"> 
    <tr>
        <td>Concept </td> <td> Example </td>
    </tr>
    <tr> <td> Basic Pointer         </td> <td> int * ptr = &a; </td>  </tr>
    <tr> <td> Pointer to Array      </td> <td> int * ptr = array;  </td>  </tr>
    <tr> <td> Function to Pointer   </td> <td> void(* ptr) () = &funcName;  </td>  </tr>
    <tr> <td> Static Local Pointer  </td> <td> static int x; int * ptr = &x;   </td>  </tr>
    <tr> <td> Pointer to Stracture  </td> <td> struct Point * ptr = &p;  </td>  </tr>
    <tr> <td> Static Global Pointer </td> <td> static int * ptr = &global_var; </td> </tr>
    <tr> <td> Constant Pointer      </td> <td> int * const ptr = &a; </td>  </tr>
    <tr> <td> Pointer to Constant   </td> <td> const int * ptr = &a; </td>  </tr>
    <tr> <td> Constant Pointer to Constant </td> <td> const int * const ptr = &a; </td>  </tr>
<tr> <td> Pointer to Array of Strings </td> <td> const char * arr[] = {"C","Pointers"}   </td>  </tr>
<tr> <td> Pointer to Array </td> <td> int (* ptr)[3] = &arr;  </td>  </tr>
</table>



# Lets Jump into pointer first

1. void pointer: It is a generic pointer type in C that can hold address of any data type. It is commonly used in situations where the specific data type is 
unknown or can vary.


