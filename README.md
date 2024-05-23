# 📄 Programming I running
A C program to manage aircraft information, allowing insertion, updating and visualization of data through an interactive menu, with input validations and use of system functions.

## :link: Development environment
- Visual Studio Code
```
1.89.1
```
- GCC
```
gcc.exe (tdm64-1) 10.3.0
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## :link: Purpose and description
The program developed in C language is a system designed to register and manage information about aircraft. It allows the user to input, update and view data from different airplane models. The system uses a structure called `Aviao` to store information about each aircraft. This structure contains fields to store the airplane model name, number of seats, engine types, aisle type, range in kilometers, and number of destinations operated by that model.

To ensure the functionality of the system, several functions have been implemented. The `string_size` function calculates the size of a string, while the `stringtoint` function converts a string representing a number to an integer value. The `menucaract` function is responsible for collecting detailed information about an airplane, with input validation to ensure that fields are not empty. The `information` function iterates over a list of planes and calls `menucaract` to collect information for each plane. The `table` function displays a table with all the planes’ registered data.

Additionally, the `edit_aviao` function allows you to update specific information for a selected plane, and the `updatedata` function displays a table of data and allows you to select an aircraft to update its information. The `total` function displays the total number of registered planes, while the `menu_buscarchave` function allows you to search and view plane information by keywords, such as model. Finally, the `numberavioes` function requests the total number of planes to be registered and validates the entry.

The main function `main` implements an interactive menu that allows the user to access the different functionalities of the program. The menu presents options to insert information, display the table of entered data, generate reports by keywords, update data, show the amount of data and exit the program.

The program includes validations to ensure that the data entered by the user is valid. These validations verify that fields are not empty and ensure that numeric entries are valid and positive. Furthermore, to improve the user experience, the program uses system functions, such as `system("cls")` to clear the screen and `system("PAUSE")` to pause execution, allowing cleaner navigation and organized.
In summary, this program is a robust tool for managing aircraft information, allowing users to enter, view, update and search data efficiently. It serves as a practical example of how to use data structures and input validation techniques in C to build an interactive and functional system.
